#include "../client.h"

void command_petcmd(Client *c, const Seperator *sep) {
    if (!c || !sep) {
        return;
    }

    std::string usage = "Usage: #petcmd [attack, qattack, follow, guard, sit, stop, taunt (on\\off), hold (on\\off), ghold (on\\off), spellhold (on\\off), focus (on\\off), back, regroup (on\\off)] [all, mag, bst, nec, enc, shm, dru, brd, shd].";

    // Check if we have at least one argument
    if (sep->argnum < 1) {
        c->Message(Chat::White, usage.c_str());
        return;
    }

    // Variables to store parsed commands and targets
    std::vector<int> command_codes;
    std::vector<uint8> class_targets;
    bool all_classes = false;

    // Process all arguments to identify commands and targets
    for (int i = 1; i <= sep->argnum; i++) {
        std::string arg = sep->arg[i];

        // Check if this is a command
        int command_code = -1;
        bool toggle_command = false;

        if (arg == "attack") {
            command_code = PET_ATTACK;
        } else if (arg == "qattack") {
            command_code = PET_QATTACK;
        } else if (arg == "follow") {
            command_code = PET_FOLLOWME;
        } else if (arg == "guard") {
            command_code = PET_GUARDHERE;
        } else if (arg == "sit") {
            command_code = PET_SIT;
        } else if (arg == "stop") {
            command_code = PET_STOP;
        } else if (arg == "taunt") {
            command_code = PET_TAUNT;
            toggle_command = true;
        } else if (arg == "hold") {
            command_code = PET_HOLD;
            toggle_command = true;
        } else if (arg == "ghold") {
            command_code = PET_GHOLD;
            toggle_command = true;
        } else if (arg == "spellhold") {
            command_code = PET_SPELLHOLD;
            toggle_command = true;
        } else if (arg == "focus") {
            command_code = PET_FOCUS;
            toggle_command = true;
        } else if (arg == "back") {
            command_code = PET_BACKOFF;
        } else if (arg == "regroup") {
            command_code = PET_REGROUP;
            toggle_command = true;
        }

        // If it's a command, check for optional on/off toggle
        if (command_code != -1) {
            // Check if next arg is "on" or "off" for toggle commands
            if (toggle_command && i + 1 <= sep->argnum) {
                std::string toggle = sep->arg[i + 1];
                if (toggle == "on") {
                    // Map to ON command code
                    if (command_code == PET_SIT) command_code = PET_SITDOWN;
                    else if (command_code == PET_STOP) command_code = PET_STOP_ON;
                    else if (command_code == PET_TAUNT) command_code = PET_TAUNT_ON;
                    else if (command_code == PET_HOLD) command_code = PET_HOLD_ON;
                    else if (command_code == PET_GHOLD) command_code = PET_GHOLD_ON;
                    else if (command_code == PET_SPELLHOLD) command_code = PET_SPELLHOLD_ON;
                    else if (command_code == PET_FOCUS) command_code = PET_FOCUS_ON;
                    else if (command_code == PET_REGROUP) command_code = PET_REGROUP_ON;
                    i++; // Skip the "on" token in next iteration
                } else if (toggle == "off") {
                    // Map to OFF command code
                    if (command_code == PET_SIT) command_code = PET_STANDUP;
                    else if (command_code == PET_STOP) command_code = PET_STOP_OFF;
                    else if (command_code == PET_TAUNT) command_code = PET_TAUNT_OFF;
                    else if (command_code == PET_HOLD) command_code = PET_HOLD_OFF;
                    else if (command_code == PET_GHOLD) command_code = PET_GHOLD_OFF;
                    else if (command_code == PET_SPELLHOLD) command_code = PET_SPELLHOLD_OFF;
                    else if (command_code == PET_FOCUS) command_code = PET_FOCUS_OFF;
                    else if (command_code == PET_REGROUP) command_code = PET_REGROUP_OFF;
                    i++; // Skip the "off" token in next iteration
                }
            }

            command_codes.push_back(command_code);
            continue; // Processed a command, move to next arg
        }

        // If not a command, check if it's a class target
        if (arg == "all") {
            all_classes = true;
        } else if (arg == "mag") {
            class_targets.push_back(Class::Magician);
        } else if (arg == "bst") {
            class_targets.push_back(Class::Beastlord);
        } else if (arg == "nec") {
            class_targets.push_back(Class::Necromancer);
        } else if (arg == "enc") {
            class_targets.push_back(Class::Enchanter);
        } else if (arg == "shm") {
            class_targets.push_back(Class::Shaman);
        } else if (arg == "dru") {
            class_targets.push_back(Class::Druid);
        } else if (arg == "brd") {
            class_targets.push_back(Class::Bard);
        } else if (arg == "shd") {
            class_targets.push_back(Class::ShadowKnight);
        }
        // Ignore unrecognized arguments
    }

    // If no commands specified, show usage
    if (command_codes.empty()) {
        c->Message(Chat::White, usage.c_str());
        return;
    }

    // If no classes specified, default to all
    if (class_targets.empty() && !all_classes) {
        all_classes = true;
    }

    // Execute all commands on matching pets
    for (auto pet : c->GetAllPets()) {
        auto pet_class_id = pet->CastToNPC()->GetPetOriginClass();

        // Check if this pet's class matches our targets
        if (all_classes || std::find(class_targets.begin(), class_targets.end(), pet_class_id) != class_targets.end()) {
            // Execute all commands on this pet
            for (int cmd : command_codes) {
                pet->CastToNPC()->DoPetCommand(cmd, c->GetTarget());
            }
        }
    }
}