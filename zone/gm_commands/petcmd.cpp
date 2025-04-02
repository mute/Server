void command_petcmd(Client *c, const Seperator *sep) {
    // Basic null pointer checks
    if (!c || !sep) {
        return;
    }

    const std::string usage = "Usage: #petcmd [attack, qattack, follow, guard, sit, stop, taunt (on\\off), hold (on\\off), ghold (on\\off), spellhold (on\\off), focus (on\\off), back, regroup (on\\off), health, leader, feign, leave] [all, mag, bst, nec, enc, shm, dru, brd, shd]. Verbs do not need to be applied in any specific order.";

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
        // Skip any null arguments
        if (!sep->arg[i]) {
            continue;
        }

        std::string arg = sep->arg[i];

        // Check if this is a command
        int command_code = -1;
        bool toggle_command = false;

        if (arg == "attack") {
            command_code = PET_ATTACK;
        } else if (arg == "qattack") {
            command_code = PET_QATTACK;
        } else if (arg == "follow" || arg == "followme") {
            command_code = PET_FOLLOWME;
        } else if (arg == "guard") {
            command_code = PET_GUARDHERE;
        } else if (arg == "sit") {
            command_code = PET_SIT;
        } else if (arg == "stop" || arg == "freeze") {
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
        } else if (arg == "spellhold" || arg == "nocast") {
            command_code = PET_SPELLHOLD;
            toggle_command = true;
        } else if (arg == "focus") {
            command_code = PET_FOCUS;
            toggle_command = true;
        } else if (arg == "back" || arg == "backoff") {
            command_code = PET_BACKOFF;
        } else if (arg == "regroup") {
            command_code = PET_REGROUP;
            toggle_command = true;
        } else if (arg == "leave" || arg == "dismiss" || arg == "getlost") {
            command_code = PET_GETLOST;
        } else if (arg == "health" || arg == "healthreport" || arg == "hp") {
            command_code = PET_HEALTHREPORT;
        } else if (arg == "leader" || arg == "master") {
            command_code = PET_LEADER;
        } else if (arg == "feign" || arg == "fd" || arg == "playdead") {
            command_code = PET_FEIGN;
        }

        if (command_code != -1) {
            // If it's a command, check for optional on/off toggle
            if (toggle_command && i + 1 <= sep->argnum && sep->arg[i + 1]) {
                std::string next_arg = sep->arg[i + 1];

                // Check if next arg is "on" or "off" or another valid command/class
                if (next_arg == "on") {
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
                } else if (next_arg == "off") {
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
                // Any other value is treated as a separate command/class - don't increment i
            }

            command_codes.push_back(command_code);
            continue; // Processed a command, move to next arg
        }

        // If not a command, check if it's a class target
        if (arg == "all") {
            all_classes = true;
        } else if (arg == "mag" || arg == "mage" || arg == "magician") {
            class_targets.push_back(Class::Magician);
        } else if (arg == "bst" || arg == "bl" || arg == "beast" || arg == "beastlord") {
            class_targets.push_back(Class::Beastlord);
        } else if (arg == "nec" || arg == "necro" || arg == "necromancer") {
            class_targets.push_back(Class::Necromancer);
        } else if (arg == "enc" || arg == "ench" || arg == "enchanter") {
            class_targets.push_back(Class::Enchanter);
        } else if (arg == "shm" || arg == "shaman") {
            class_targets.push_back(Class::Shaman);
        } else if (arg == "dru" || arg == "druid") {
            class_targets.push_back(Class::Druid);
        } else if (arg == "brd" || arg == "bard") {
            class_targets.push_back(Class::Bard);
        } else if (arg == "shd" || arg == "sk" || arg == "shadowknight") {
            class_targets.push_back(Class::ShadowKnight);
        } else if (arg == "war" || arg == "warrior") {
            class_targets.push_back(Class::Warrior);
        } else if (arg == "clr" || arg == "cler" || arg == "cleric") {
            class_targets.push_back(Class::Cleric);
        } else if (arg == "pal" || arg == "paladin") {
            class_targets.push_back(Class::Paladin);
        } else if (arg == "rng" || arg == "ranger") {
            class_targets.push_back(Class::Ranger);
        } else if (arg == "mnk" || arg == "monk") {
            class_targets.push_back(Class::Monk);
        } else if (arg == "rog" || arg == "rogue") {
            class_targets.push_back(Class::Rogue);
        } else if (arg == "wiz" || arg == "wizard") {
            class_targets.push_back(Class::Wizard);
        } else if (arg == "ber" || arg == "berserker") {
            class_targets.push_back(Class::Berserker);
        }
        // If it's neither a command nor a class, silently ignore it
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

    // Get the list of pets - safely handle null/empty cases
    auto pets = c->GetAllPets();
    if (pets.empty()) {
        c->Message(Chat::White, "You don't have any pets under your control.");
        return;
    }

    // Execute all commands on matching pets
    for (auto pet : pets) {
        // Skip invalid pets
        if (!pet || !pet->IsNPC()) {
            continue;
        }

        auto pet_class_id = pet->CastToNPC()->GetPetOriginClass();

        // Check if this pet's class matches our targets
        if (all_classes || std::find(class_targets.begin(), class_targets.end(), pet_class_id) != class_targets.end()) {
            // Execute all commands on this pet
            for (int cmd : command_codes) {
                // Get target safely
                Mob* target = c->GetTarget();
                pet->CastToNPC()->DoPetCommand(cmd, target);
            }
        }
    }
}