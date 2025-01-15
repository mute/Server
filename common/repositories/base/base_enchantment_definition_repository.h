/**
 * DO NOT MODIFY THIS FILE
 *
 * This repository was automatically generated and is NOT to be modified directly.
 * Any repository modifications are meant to be made to the repository extending the base.
 * Any modifications to base repositories are to be made by the generator only
 *
 * @generator ./utils/scripts/generators/repository-generator.pl
 * @docs https://docs.eqemu.io/developer/repositories
 */

#ifndef EQEMU_BASE_ENCHANTMENT_DEFINITION_REPOSITORY_H
#define EQEMU_BASE_ENCHANTMENT_DEFINITION_REPOSITORY_H

#include "../../database.h"
#include "../../strings.h"
#include <ctime>

class BaseEnchantmentDefinitionRepository {
public:
	struct EnchantmentDefinition {
		uint32_t    aug_id;
		uint8_t     quality;
		uint8_t     rarity;
		std::string name;
		std::string lore_desc;
		uint32_t    classes;
		uint32_t    slots;
		int8_t      nodrop;
		uint16_t    worn_effect;
		uint16_t    focus_effect;
		uint16_t    proc_effect;
		uint16_t    click_effect;
		int8_t      damage;
		int8_t      delay;
		int8_t      elemdmgamt;
		int8_t      elemdmgtype;
		int8_t      banedmgamt;
		int8_t      banedmgbody;
		int8_t      banedmgraceamt;
		int8_t      banedmgrace;
		int8_t      ac;
		int16_t     hp;
		int16_t     mana;
		int16_t     endur;
		int8_t      heroic_str;
		int8_t      heroic_sta;
		int8_t      heroic_agi;
		int8_t      heroic_dex;
		int8_t      heroic_wis;
		int8_t      heroic_int;
		int8_t      heroic_cha;
		int8_t      heroic_mr;
		int8_t      heroic_fr;
		int8_t      heroic_cr;
		int8_t      heroic_dr;
		int8_t      heroic_pr;
		int8_t      spelldmg;
		int8_t      healamt;
		int8_t      regen;
		int8_t      mana_regen;
		int8_t      endur_regen;
		int8_t      accuracy;
		int8_t      avoidance;
		int8_t      combateffects;
		int8_t      damageshield;
		int8_t      dsmitigation;
		int8_t      spellshield;
		int8_t      shielding;
		int8_t      dotshielding;
		int8_t      stunresist;
		int8_t      strikethrough;
		int8_t      clairvoyance;
		int8_t      skill_id;
		int8_t      skillmod;
		int8_t      skilldmg;
		int8_t      astr;
		int8_t      asta;
		int8_t      adex;
		int8_t      aagi;
		int8_t      aint;
		int8_t      awis;
		int8_t      acha;
		int8_t      mr;
		int8_t      fr;
		int8_t      cr;
		int8_t      dr;
		int8_t      pr;
	};

	static std::string PrimaryKey()
	{
		return std::string("aug_id");
	}

	static std::vector<std::string> Columns()
	{
		return {
			"aug_id",
			"quality",
			"rarity",
			"name",
			"lore_desc",
			"classes",
			"slots",
			"nodrop",
			"worn_effect",
			"focus_effect",
			"proc_effect",
			"click_effect",
			"damage",
			"delay",
			"elemdmgamt",
			"elemdmgtype",
			"banedmgamt",
			"banedmgbody",
			"banedmgraceamt",
			"banedmgrace",
			"ac",
			"hp",
			"mana",
			"endur",
			"heroic_str",
			"heroic_sta",
			"heroic_agi",
			"heroic_dex",
			"heroic_wis",
			"heroic_int",
			"heroic_cha",
			"heroic_mr",
			"heroic_fr",
			"heroic_cr",
			"heroic_dr",
			"heroic_pr",
			"spelldmg",
			"healamt",
			"regen",
			"mana_regen",
			"endur_regen",
			"accuracy",
			"avoidance",
			"combateffects",
			"damageshield",
			"dsmitigation",
			"spellshield",
			"shielding",
			"dotshielding",
			"stunresist",
			"strikethrough",
			"clairvoyance",
			"skill_id",
			"skillmod",
			"skilldmg",
			"astr",
			"asta",
			"adex",
			"aagi",
			"aint",
			"awis",
			"acha",
			"mr",
			"fr",
			"cr",
			"dr",
			"pr",
		};
	}

	static std::vector<std::string> SelectColumns()
	{
		return {
			"aug_id",
			"quality",
			"rarity",
			"name",
			"lore_desc",
			"classes",
			"slots",
			"nodrop",
			"worn_effect",
			"focus_effect",
			"proc_effect",
			"click_effect",
			"damage",
			"delay",
			"elemdmgamt",
			"elemdmgtype",
			"banedmgamt",
			"banedmgbody",
			"banedmgraceamt",
			"banedmgrace",
			"ac",
			"hp",
			"mana",
			"endur",
			"heroic_str",
			"heroic_sta",
			"heroic_agi",
			"heroic_dex",
			"heroic_wis",
			"heroic_int",
			"heroic_cha",
			"heroic_mr",
			"heroic_fr",
			"heroic_cr",
			"heroic_dr",
			"heroic_pr",
			"spelldmg",
			"healamt",
			"regen",
			"mana_regen",
			"endur_regen",
			"accuracy",
			"avoidance",
			"combateffects",
			"damageshield",
			"dsmitigation",
			"spellshield",
			"shielding",
			"dotshielding",
			"stunresist",
			"strikethrough",
			"clairvoyance",
			"skill_id",
			"skillmod",
			"skilldmg",
			"astr",
			"asta",
			"adex",
			"aagi",
			"aint",
			"awis",
			"acha",
			"mr",
			"fr",
			"cr",
			"dr",
			"pr",
		};
	}

	static std::string ColumnsRaw()
	{
		return std::string(Strings::Implode(", ", Columns()));
	}

	static std::string SelectColumnsRaw()
	{
		return std::string(Strings::Implode(", ", SelectColumns()));
	}

	static std::string TableName()
	{
		return std::string("enchantment_definition");
	}

	static std::string BaseSelect()
	{
		return fmt::format(
			"SELECT {} FROM {}",
			SelectColumnsRaw(),
			TableName()
		);
	}

	static std::string BaseInsert()
	{
		return fmt::format(
			"INSERT INTO {} ({}) ",
			TableName(),
			ColumnsRaw()
		);
	}

	static EnchantmentDefinition NewEntity()
	{
		EnchantmentDefinition e{};

		e.aug_id         = 0;
		e.quality        = 0;
		e.rarity         = 1;
		e.name           = "";
		e.lore_desc      = "";
		e.classes        = 65535;
		e.slots          = 65535;
		e.nodrop         = 1;
		e.worn_effect    = 0;
		e.focus_effect   = 0;
		e.proc_effect    = 0;
		e.click_effect   = 0;
		e.damage         = 0;
		e.delay          = 0;
		e.elemdmgamt     = 0;
		e.elemdmgtype    = 0;
		e.banedmgamt     = 0;
		e.banedmgbody    = 0;
		e.banedmgraceamt = 0;
		e.banedmgrace    = 0;
		e.ac             = 0;
		e.hp             = 0;
		e.mana           = 0;
		e.endur          = 0;
		e.heroic_str     = 0;
		e.heroic_sta     = 0;
		e.heroic_agi     = 0;
		e.heroic_dex     = 0;
		e.heroic_wis     = 0;
		e.heroic_int     = 0;
		e.heroic_cha     = 0;
		e.heroic_mr      = 0;
		e.heroic_fr      = 0;
		e.heroic_cr      = 0;
		e.heroic_dr      = 0;
		e.heroic_pr      = 0;
		e.spelldmg       = 0;
		e.healamt        = 0;
		e.regen          = 0;
		e.mana_regen     = 0;
		e.endur_regen    = 0;
		e.accuracy       = 0;
		e.avoidance      = 0;
		e.combateffects  = 0;
		e.damageshield   = 0;
		e.dsmitigation   = 0;
		e.spellshield    = 0;
		e.shielding      = 0;
		e.dotshielding   = 0;
		e.stunresist     = 0;
		e.strikethrough  = 0;
		e.clairvoyance   = 0;
		e.skill_id       = 0;
		e.skillmod       = 0;
		e.skilldmg       = 0;
		e.astr           = 0;
		e.asta           = 0;
		e.adex           = 0;
		e.aagi           = 0;
		e.aint           = 0;
		e.awis           = 0;
		e.acha           = 0;
		e.mr             = 0;
		e.fr             = 0;
		e.cr             = 0;
		e.dr             = 0;
		e.pr             = 0;

		return e;
	}

	static EnchantmentDefinition GetEnchantmentDefinition(
		const std::vector<EnchantmentDefinition> &enchantment_definitions,
		int enchantment_definition_id
	)
	{
		for (auto &enchantment_definition : enchantment_definitions) {
			if (enchantment_definition.aug_id == enchantment_definition_id) {
				return enchantment_definition;
			}
		}

		return NewEntity();
	}

	static EnchantmentDefinition FindOne(
		Database& db,
		int enchantment_definition_id
	)
	{
		auto results = db.QueryDatabase(
			fmt::format(
				"{} WHERE {} = {} LIMIT 1",
				BaseSelect(),
				PrimaryKey(),
				enchantment_definition_id
			)
		);

		auto row = results.begin();
		if (results.RowCount() == 1) {
			EnchantmentDefinition e{};

			e.aug_id         = row[0] ? static_cast<uint32_t>(strtoul(row[0], nullptr, 10)) : 0;
			e.quality        = row[1] ? static_cast<uint8_t>(strtoul(row[1], nullptr, 10)) : 0;
			e.rarity         = row[2] ? static_cast<uint8_t>(strtoul(row[2], nullptr, 10)) : 1;
			e.name           = row[3] ? row[3] : "";
			e.lore_desc      = row[4] ? row[4] : "";
			e.classes        = row[5] ? static_cast<uint32_t>(strtoul(row[5], nullptr, 10)) : 65535;
			e.slots          = row[6] ? static_cast<uint32_t>(strtoul(row[6], nullptr, 10)) : 65535;
			e.nodrop         = row[7] ? static_cast<int8_t>(atoi(row[7])) : 1;
			e.worn_effect    = row[8] ? static_cast<uint16_t>(strtoul(row[8], nullptr, 10)) : 0;
			e.focus_effect   = row[9] ? static_cast<uint16_t>(strtoul(row[9], nullptr, 10)) : 0;
			e.proc_effect    = row[10] ? static_cast<uint16_t>(strtoul(row[10], nullptr, 10)) : 0;
			e.click_effect   = row[11] ? static_cast<uint16_t>(strtoul(row[11], nullptr, 10)) : 0;
			e.damage         = row[12] ? static_cast<int8_t>(atoi(row[12])) : 0;
			e.delay          = row[13] ? static_cast<int8_t>(atoi(row[13])) : 0;
			e.elemdmgamt     = row[14] ? static_cast<int8_t>(atoi(row[14])) : 0;
			e.elemdmgtype    = row[15] ? static_cast<int8_t>(atoi(row[15])) : 0;
			e.banedmgamt     = row[16] ? static_cast<int8_t>(atoi(row[16])) : 0;
			e.banedmgbody    = row[17] ? static_cast<int8_t>(atoi(row[17])) : 0;
			e.banedmgraceamt = row[18] ? static_cast<int8_t>(atoi(row[18])) : 0;
			e.banedmgrace    = row[19] ? static_cast<int8_t>(atoi(row[19])) : 0;
			e.ac             = row[20] ? static_cast<int8_t>(atoi(row[20])) : 0;
			e.hp             = row[21] ? static_cast<int16_t>(atoi(row[21])) : 0;
			e.mana           = row[22] ? static_cast<int16_t>(atoi(row[22])) : 0;
			e.endur          = row[23] ? static_cast<int16_t>(atoi(row[23])) : 0;
			e.heroic_str     = row[24] ? static_cast<int8_t>(atoi(row[24])) : 0;
			e.heroic_sta     = row[25] ? static_cast<int8_t>(atoi(row[25])) : 0;
			e.heroic_agi     = row[26] ? static_cast<int8_t>(atoi(row[26])) : 0;
			e.heroic_dex     = row[27] ? static_cast<int8_t>(atoi(row[27])) : 0;
			e.heroic_wis     = row[28] ? static_cast<int8_t>(atoi(row[28])) : 0;
			e.heroic_int     = row[29] ? static_cast<int8_t>(atoi(row[29])) : 0;
			e.heroic_cha     = row[30] ? static_cast<int8_t>(atoi(row[30])) : 0;
			e.heroic_mr      = row[31] ? static_cast<int8_t>(atoi(row[31])) : 0;
			e.heroic_fr      = row[32] ? static_cast<int8_t>(atoi(row[32])) : 0;
			e.heroic_cr      = row[33] ? static_cast<int8_t>(atoi(row[33])) : 0;
			e.heroic_dr      = row[34] ? static_cast<int8_t>(atoi(row[34])) : 0;
			e.heroic_pr      = row[35] ? static_cast<int8_t>(atoi(row[35])) : 0;
			e.spelldmg       = row[36] ? static_cast<int8_t>(atoi(row[36])) : 0;
			e.healamt        = row[37] ? static_cast<int8_t>(atoi(row[37])) : 0;
			e.regen          = row[38] ? static_cast<int8_t>(atoi(row[38])) : 0;
			e.mana_regen     = row[39] ? static_cast<int8_t>(atoi(row[39])) : 0;
			e.endur_regen    = row[40] ? static_cast<int8_t>(atoi(row[40])) : 0;
			e.accuracy       = row[41] ? static_cast<int8_t>(atoi(row[41])) : 0;
			e.avoidance      = row[42] ? static_cast<int8_t>(atoi(row[42])) : 0;
			e.combateffects  = row[43] ? static_cast<int8_t>(atoi(row[43])) : 0;
			e.damageshield   = row[44] ? static_cast<int8_t>(atoi(row[44])) : 0;
			e.dsmitigation   = row[45] ? static_cast<int8_t>(atoi(row[45])) : 0;
			e.spellshield    = row[46] ? static_cast<int8_t>(atoi(row[46])) : 0;
			e.shielding      = row[47] ? static_cast<int8_t>(atoi(row[47])) : 0;
			e.dotshielding   = row[48] ? static_cast<int8_t>(atoi(row[48])) : 0;
			e.stunresist     = row[49] ? static_cast<int8_t>(atoi(row[49])) : 0;
			e.strikethrough  = row[50] ? static_cast<int8_t>(atoi(row[50])) : 0;
			e.clairvoyance   = row[51] ? static_cast<int8_t>(atoi(row[51])) : 0;
			e.skill_id       = row[52] ? static_cast<int8_t>(atoi(row[52])) : 0;
			e.skillmod       = row[53] ? static_cast<int8_t>(atoi(row[53])) : 0;
			e.skilldmg       = row[54] ? static_cast<int8_t>(atoi(row[54])) : 0;
			e.astr           = row[55] ? static_cast<int8_t>(atoi(row[55])) : 0;
			e.asta           = row[56] ? static_cast<int8_t>(atoi(row[56])) : 0;
			e.adex           = row[57] ? static_cast<int8_t>(atoi(row[57])) : 0;
			e.aagi           = row[58] ? static_cast<int8_t>(atoi(row[58])) : 0;
			e.aint           = row[59] ? static_cast<int8_t>(atoi(row[59])) : 0;
			e.awis           = row[60] ? static_cast<int8_t>(atoi(row[60])) : 0;
			e.acha           = row[61] ? static_cast<int8_t>(atoi(row[61])) : 0;
			e.mr             = row[62] ? static_cast<int8_t>(atoi(row[62])) : 0;
			e.fr             = row[63] ? static_cast<int8_t>(atoi(row[63])) : 0;
			e.cr             = row[64] ? static_cast<int8_t>(atoi(row[64])) : 0;
			e.dr             = row[65] ? static_cast<int8_t>(atoi(row[65])) : 0;
			e.pr             = row[66] ? static_cast<int8_t>(atoi(row[66])) : 0;

			return e;
		}

		return NewEntity();
	}

	static int DeleteOne(
		Database& db,
		int enchantment_definition_id
	)
	{
		auto results = db.QueryDatabase(
			fmt::format(
				"DELETE FROM {} WHERE {} = {}",
				TableName(),
				PrimaryKey(),
				enchantment_definition_id
			)
		);

		return (results.Success() ? results.RowsAffected() : 0);
	}

	static int UpdateOne(
		Database& db,
		const EnchantmentDefinition &e
	)
	{
		std::vector<std::string> v;

		auto columns = Columns();

		v.push_back(columns[0] + " = " + std::to_string(e.aug_id));
		v.push_back(columns[1] + " = " + std::to_string(e.quality));
		v.push_back(columns[2] + " = " + std::to_string(e.rarity));
		v.push_back(columns[3] + " = '" + Strings::Escape(e.name) + "'");
		v.push_back(columns[4] + " = '" + Strings::Escape(e.lore_desc) + "'");
		v.push_back(columns[5] + " = " + std::to_string(e.classes));
		v.push_back(columns[6] + " = " + std::to_string(e.slots));
		v.push_back(columns[7] + " = " + std::to_string(e.nodrop));
		v.push_back(columns[8] + " = " + std::to_string(e.worn_effect));
		v.push_back(columns[9] + " = " + std::to_string(e.focus_effect));
		v.push_back(columns[10] + " = " + std::to_string(e.proc_effect));
		v.push_back(columns[11] + " = " + std::to_string(e.click_effect));
		v.push_back(columns[12] + " = " + std::to_string(e.damage));
		v.push_back(columns[13] + " = " + std::to_string(e.delay));
		v.push_back(columns[14] + " = " + std::to_string(e.elemdmgamt));
		v.push_back(columns[15] + " = " + std::to_string(e.elemdmgtype));
		v.push_back(columns[16] + " = " + std::to_string(e.banedmgamt));
		v.push_back(columns[17] + " = " + std::to_string(e.banedmgbody));
		v.push_back(columns[18] + " = " + std::to_string(e.banedmgraceamt));
		v.push_back(columns[19] + " = " + std::to_string(e.banedmgrace));
		v.push_back(columns[20] + " = " + std::to_string(e.ac));
		v.push_back(columns[21] + " = " + std::to_string(e.hp));
		v.push_back(columns[22] + " = " + std::to_string(e.mana));
		v.push_back(columns[23] + " = " + std::to_string(e.endur));
		v.push_back(columns[24] + " = " + std::to_string(e.heroic_str));
		v.push_back(columns[25] + " = " + std::to_string(e.heroic_sta));
		v.push_back(columns[26] + " = " + std::to_string(e.heroic_agi));
		v.push_back(columns[27] + " = " + std::to_string(e.heroic_dex));
		v.push_back(columns[28] + " = " + std::to_string(e.heroic_wis));
		v.push_back(columns[29] + " = " + std::to_string(e.heroic_int));
		v.push_back(columns[30] + " = " + std::to_string(e.heroic_cha));
		v.push_back(columns[31] + " = " + std::to_string(e.heroic_mr));
		v.push_back(columns[32] + " = " + std::to_string(e.heroic_fr));
		v.push_back(columns[33] + " = " + std::to_string(e.heroic_cr));
		v.push_back(columns[34] + " = " + std::to_string(e.heroic_dr));
		v.push_back(columns[35] + " = " + std::to_string(e.heroic_pr));
		v.push_back(columns[36] + " = " + std::to_string(e.spelldmg));
		v.push_back(columns[37] + " = " + std::to_string(e.healamt));
		v.push_back(columns[38] + " = " + std::to_string(e.regen));
		v.push_back(columns[39] + " = " + std::to_string(e.mana_regen));
		v.push_back(columns[40] + " = " + std::to_string(e.endur_regen));
		v.push_back(columns[41] + " = " + std::to_string(e.accuracy));
		v.push_back(columns[42] + " = " + std::to_string(e.avoidance));
		v.push_back(columns[43] + " = " + std::to_string(e.combateffects));
		v.push_back(columns[44] + " = " + std::to_string(e.damageshield));
		v.push_back(columns[45] + " = " + std::to_string(e.dsmitigation));
		v.push_back(columns[46] + " = " + std::to_string(e.spellshield));
		v.push_back(columns[47] + " = " + std::to_string(e.shielding));
		v.push_back(columns[48] + " = " + std::to_string(e.dotshielding));
		v.push_back(columns[49] + " = " + std::to_string(e.stunresist));
		v.push_back(columns[50] + " = " + std::to_string(e.strikethrough));
		v.push_back(columns[51] + " = " + std::to_string(e.clairvoyance));
		v.push_back(columns[52] + " = " + std::to_string(e.skill_id));
		v.push_back(columns[53] + " = " + std::to_string(e.skillmod));
		v.push_back(columns[54] + " = " + std::to_string(e.skilldmg));
		v.push_back(columns[55] + " = " + std::to_string(e.astr));
		v.push_back(columns[56] + " = " + std::to_string(e.asta));
		v.push_back(columns[57] + " = " + std::to_string(e.adex));
		v.push_back(columns[58] + " = " + std::to_string(e.aagi));
		v.push_back(columns[59] + " = " + std::to_string(e.aint));
		v.push_back(columns[60] + " = " + std::to_string(e.awis));
		v.push_back(columns[61] + " = " + std::to_string(e.acha));
		v.push_back(columns[62] + " = " + std::to_string(e.mr));
		v.push_back(columns[63] + " = " + std::to_string(e.fr));
		v.push_back(columns[64] + " = " + std::to_string(e.cr));
		v.push_back(columns[65] + " = " + std::to_string(e.dr));
		v.push_back(columns[66] + " = " + std::to_string(e.pr));

		auto results = db.QueryDatabase(
			fmt::format(
				"UPDATE {} SET {} WHERE {} = {}",
				TableName(),
				Strings::Implode(", ", v),
				PrimaryKey(),
				e.aug_id
			)
		);

		return (results.Success() ? results.RowsAffected() : 0);
	}

	static EnchantmentDefinition InsertOne(
		Database& db,
		EnchantmentDefinition e
	)
	{
		std::vector<std::string> v;

		v.push_back(std::to_string(e.aug_id));
		v.push_back(std::to_string(e.quality));
		v.push_back(std::to_string(e.rarity));
		v.push_back("'" + Strings::Escape(e.name) + "'");
		v.push_back("'" + Strings::Escape(e.lore_desc) + "'");
		v.push_back(std::to_string(e.classes));
		v.push_back(std::to_string(e.slots));
		v.push_back(std::to_string(e.nodrop));
		v.push_back(std::to_string(e.worn_effect));
		v.push_back(std::to_string(e.focus_effect));
		v.push_back(std::to_string(e.proc_effect));
		v.push_back(std::to_string(e.click_effect));
		v.push_back(std::to_string(e.damage));
		v.push_back(std::to_string(e.delay));
		v.push_back(std::to_string(e.elemdmgamt));
		v.push_back(std::to_string(e.elemdmgtype));
		v.push_back(std::to_string(e.banedmgamt));
		v.push_back(std::to_string(e.banedmgbody));
		v.push_back(std::to_string(e.banedmgraceamt));
		v.push_back(std::to_string(e.banedmgrace));
		v.push_back(std::to_string(e.ac));
		v.push_back(std::to_string(e.hp));
		v.push_back(std::to_string(e.mana));
		v.push_back(std::to_string(e.endur));
		v.push_back(std::to_string(e.heroic_str));
		v.push_back(std::to_string(e.heroic_sta));
		v.push_back(std::to_string(e.heroic_agi));
		v.push_back(std::to_string(e.heroic_dex));
		v.push_back(std::to_string(e.heroic_wis));
		v.push_back(std::to_string(e.heroic_int));
		v.push_back(std::to_string(e.heroic_cha));
		v.push_back(std::to_string(e.heroic_mr));
		v.push_back(std::to_string(e.heroic_fr));
		v.push_back(std::to_string(e.heroic_cr));
		v.push_back(std::to_string(e.heroic_dr));
		v.push_back(std::to_string(e.heroic_pr));
		v.push_back(std::to_string(e.spelldmg));
		v.push_back(std::to_string(e.healamt));
		v.push_back(std::to_string(e.regen));
		v.push_back(std::to_string(e.mana_regen));
		v.push_back(std::to_string(e.endur_regen));
		v.push_back(std::to_string(e.accuracy));
		v.push_back(std::to_string(e.avoidance));
		v.push_back(std::to_string(e.combateffects));
		v.push_back(std::to_string(e.damageshield));
		v.push_back(std::to_string(e.dsmitigation));
		v.push_back(std::to_string(e.spellshield));
		v.push_back(std::to_string(e.shielding));
		v.push_back(std::to_string(e.dotshielding));
		v.push_back(std::to_string(e.stunresist));
		v.push_back(std::to_string(e.strikethrough));
		v.push_back(std::to_string(e.clairvoyance));
		v.push_back(std::to_string(e.skill_id));
		v.push_back(std::to_string(e.skillmod));
		v.push_back(std::to_string(e.skilldmg));
		v.push_back(std::to_string(e.astr));
		v.push_back(std::to_string(e.asta));
		v.push_back(std::to_string(e.adex));
		v.push_back(std::to_string(e.aagi));
		v.push_back(std::to_string(e.aint));
		v.push_back(std::to_string(e.awis));
		v.push_back(std::to_string(e.acha));
		v.push_back(std::to_string(e.mr));
		v.push_back(std::to_string(e.fr));
		v.push_back(std::to_string(e.cr));
		v.push_back(std::to_string(e.dr));
		v.push_back(std::to_string(e.pr));

		auto results = db.QueryDatabase(
			fmt::format(
				"{} VALUES ({})",
				BaseInsert(),
				Strings::Implode(",", v)
			)
		);

		if (results.Success()) {
			e.aug_id = results.LastInsertedID();
			return e;
		}

		e = NewEntity();

		return e;
	}

	static int InsertMany(
		Database& db,
		const std::vector<EnchantmentDefinition> &entries
	)
	{
		std::vector<std::string> insert_chunks;

		for (auto &e: entries) {
			std::vector<std::string> v;

			v.push_back(std::to_string(e.aug_id));
			v.push_back(std::to_string(e.quality));
			v.push_back(std::to_string(e.rarity));
			v.push_back("'" + Strings::Escape(e.name) + "'");
			v.push_back("'" + Strings::Escape(e.lore_desc) + "'");
			v.push_back(std::to_string(e.classes));
			v.push_back(std::to_string(e.slots));
			v.push_back(std::to_string(e.nodrop));
			v.push_back(std::to_string(e.worn_effect));
			v.push_back(std::to_string(e.focus_effect));
			v.push_back(std::to_string(e.proc_effect));
			v.push_back(std::to_string(e.click_effect));
			v.push_back(std::to_string(e.damage));
			v.push_back(std::to_string(e.delay));
			v.push_back(std::to_string(e.elemdmgamt));
			v.push_back(std::to_string(e.elemdmgtype));
			v.push_back(std::to_string(e.banedmgamt));
			v.push_back(std::to_string(e.banedmgbody));
			v.push_back(std::to_string(e.banedmgraceamt));
			v.push_back(std::to_string(e.banedmgrace));
			v.push_back(std::to_string(e.ac));
			v.push_back(std::to_string(e.hp));
			v.push_back(std::to_string(e.mana));
			v.push_back(std::to_string(e.endur));
			v.push_back(std::to_string(e.heroic_str));
			v.push_back(std::to_string(e.heroic_sta));
			v.push_back(std::to_string(e.heroic_agi));
			v.push_back(std::to_string(e.heroic_dex));
			v.push_back(std::to_string(e.heroic_wis));
			v.push_back(std::to_string(e.heroic_int));
			v.push_back(std::to_string(e.heroic_cha));
			v.push_back(std::to_string(e.heroic_mr));
			v.push_back(std::to_string(e.heroic_fr));
			v.push_back(std::to_string(e.heroic_cr));
			v.push_back(std::to_string(e.heroic_dr));
			v.push_back(std::to_string(e.heroic_pr));
			v.push_back(std::to_string(e.spelldmg));
			v.push_back(std::to_string(e.healamt));
			v.push_back(std::to_string(e.regen));
			v.push_back(std::to_string(e.mana_regen));
			v.push_back(std::to_string(e.endur_regen));
			v.push_back(std::to_string(e.accuracy));
			v.push_back(std::to_string(e.avoidance));
			v.push_back(std::to_string(e.combateffects));
			v.push_back(std::to_string(e.damageshield));
			v.push_back(std::to_string(e.dsmitigation));
			v.push_back(std::to_string(e.spellshield));
			v.push_back(std::to_string(e.shielding));
			v.push_back(std::to_string(e.dotshielding));
			v.push_back(std::to_string(e.stunresist));
			v.push_back(std::to_string(e.strikethrough));
			v.push_back(std::to_string(e.clairvoyance));
			v.push_back(std::to_string(e.skill_id));
			v.push_back(std::to_string(e.skillmod));
			v.push_back(std::to_string(e.skilldmg));
			v.push_back(std::to_string(e.astr));
			v.push_back(std::to_string(e.asta));
			v.push_back(std::to_string(e.adex));
			v.push_back(std::to_string(e.aagi));
			v.push_back(std::to_string(e.aint));
			v.push_back(std::to_string(e.awis));
			v.push_back(std::to_string(e.acha));
			v.push_back(std::to_string(e.mr));
			v.push_back(std::to_string(e.fr));
			v.push_back(std::to_string(e.cr));
			v.push_back(std::to_string(e.dr));
			v.push_back(std::to_string(e.pr));

			insert_chunks.push_back("(" + Strings::Implode(",", v) + ")");
		}

		std::vector<std::string> v;

		auto results = db.QueryDatabase(
			fmt::format(
				"{} VALUES {}",
				BaseInsert(),
				Strings::Implode(",", insert_chunks)
			)
		);

		return (results.Success() ? results.RowsAffected() : 0);
	}

	static std::vector<EnchantmentDefinition> All(Database& db)
	{
		std::vector<EnchantmentDefinition> all_entries;

		auto results = db.QueryDatabase(
			fmt::format(
				"{}",
				BaseSelect()
			)
		);

		all_entries.reserve(results.RowCount());

		for (auto row = results.begin(); row != results.end(); ++row) {
			EnchantmentDefinition e{};

			e.aug_id         = row[0] ? static_cast<uint32_t>(strtoul(row[0], nullptr, 10)) : 0;
			e.quality        = row[1] ? static_cast<uint8_t>(strtoul(row[1], nullptr, 10)) : 0;
			e.rarity         = row[2] ? static_cast<uint8_t>(strtoul(row[2], nullptr, 10)) : 1;
			e.name           = row[3] ? row[3] : "";
			e.lore_desc      = row[4] ? row[4] : "";
			e.classes        = row[5] ? static_cast<uint32_t>(strtoul(row[5], nullptr, 10)) : 65535;
			e.slots          = row[6] ? static_cast<uint32_t>(strtoul(row[6], nullptr, 10)) : 65535;
			e.nodrop         = row[7] ? static_cast<int8_t>(atoi(row[7])) : 1;
			e.worn_effect    = row[8] ? static_cast<uint16_t>(strtoul(row[8], nullptr, 10)) : 0;
			e.focus_effect   = row[9] ? static_cast<uint16_t>(strtoul(row[9], nullptr, 10)) : 0;
			e.proc_effect    = row[10] ? static_cast<uint16_t>(strtoul(row[10], nullptr, 10)) : 0;
			e.click_effect   = row[11] ? static_cast<uint16_t>(strtoul(row[11], nullptr, 10)) : 0;
			e.damage         = row[12] ? static_cast<int8_t>(atoi(row[12])) : 0;
			e.delay          = row[13] ? static_cast<int8_t>(atoi(row[13])) : 0;
			e.elemdmgamt     = row[14] ? static_cast<int8_t>(atoi(row[14])) : 0;
			e.elemdmgtype    = row[15] ? static_cast<int8_t>(atoi(row[15])) : 0;
			e.banedmgamt     = row[16] ? static_cast<int8_t>(atoi(row[16])) : 0;
			e.banedmgbody    = row[17] ? static_cast<int8_t>(atoi(row[17])) : 0;
			e.banedmgraceamt = row[18] ? static_cast<int8_t>(atoi(row[18])) : 0;
			e.banedmgrace    = row[19] ? static_cast<int8_t>(atoi(row[19])) : 0;
			e.ac             = row[20] ? static_cast<int8_t>(atoi(row[20])) : 0;
			e.hp             = row[21] ? static_cast<int16_t>(atoi(row[21])) : 0;
			e.mana           = row[22] ? static_cast<int16_t>(atoi(row[22])) : 0;
			e.endur          = row[23] ? static_cast<int16_t>(atoi(row[23])) : 0;
			e.heroic_str     = row[24] ? static_cast<int8_t>(atoi(row[24])) : 0;
			e.heroic_sta     = row[25] ? static_cast<int8_t>(atoi(row[25])) : 0;
			e.heroic_agi     = row[26] ? static_cast<int8_t>(atoi(row[26])) : 0;
			e.heroic_dex     = row[27] ? static_cast<int8_t>(atoi(row[27])) : 0;
			e.heroic_wis     = row[28] ? static_cast<int8_t>(atoi(row[28])) : 0;
			e.heroic_int     = row[29] ? static_cast<int8_t>(atoi(row[29])) : 0;
			e.heroic_cha     = row[30] ? static_cast<int8_t>(atoi(row[30])) : 0;
			e.heroic_mr      = row[31] ? static_cast<int8_t>(atoi(row[31])) : 0;
			e.heroic_fr      = row[32] ? static_cast<int8_t>(atoi(row[32])) : 0;
			e.heroic_cr      = row[33] ? static_cast<int8_t>(atoi(row[33])) : 0;
			e.heroic_dr      = row[34] ? static_cast<int8_t>(atoi(row[34])) : 0;
			e.heroic_pr      = row[35] ? static_cast<int8_t>(atoi(row[35])) : 0;
			e.spelldmg       = row[36] ? static_cast<int8_t>(atoi(row[36])) : 0;
			e.healamt        = row[37] ? static_cast<int8_t>(atoi(row[37])) : 0;
			e.regen          = row[38] ? static_cast<int8_t>(atoi(row[38])) : 0;
			e.mana_regen     = row[39] ? static_cast<int8_t>(atoi(row[39])) : 0;
			e.endur_regen    = row[40] ? static_cast<int8_t>(atoi(row[40])) : 0;
			e.accuracy       = row[41] ? static_cast<int8_t>(atoi(row[41])) : 0;
			e.avoidance      = row[42] ? static_cast<int8_t>(atoi(row[42])) : 0;
			e.combateffects  = row[43] ? static_cast<int8_t>(atoi(row[43])) : 0;
			e.damageshield   = row[44] ? static_cast<int8_t>(atoi(row[44])) : 0;
			e.dsmitigation   = row[45] ? static_cast<int8_t>(atoi(row[45])) : 0;
			e.spellshield    = row[46] ? static_cast<int8_t>(atoi(row[46])) : 0;
			e.shielding      = row[47] ? static_cast<int8_t>(atoi(row[47])) : 0;
			e.dotshielding   = row[48] ? static_cast<int8_t>(atoi(row[48])) : 0;
			e.stunresist     = row[49] ? static_cast<int8_t>(atoi(row[49])) : 0;
			e.strikethrough  = row[50] ? static_cast<int8_t>(atoi(row[50])) : 0;
			e.clairvoyance   = row[51] ? static_cast<int8_t>(atoi(row[51])) : 0;
			e.skill_id       = row[52] ? static_cast<int8_t>(atoi(row[52])) : 0;
			e.skillmod       = row[53] ? static_cast<int8_t>(atoi(row[53])) : 0;
			e.skilldmg       = row[54] ? static_cast<int8_t>(atoi(row[54])) : 0;
			e.astr           = row[55] ? static_cast<int8_t>(atoi(row[55])) : 0;
			e.asta           = row[56] ? static_cast<int8_t>(atoi(row[56])) : 0;
			e.adex           = row[57] ? static_cast<int8_t>(atoi(row[57])) : 0;
			e.aagi           = row[58] ? static_cast<int8_t>(atoi(row[58])) : 0;
			e.aint           = row[59] ? static_cast<int8_t>(atoi(row[59])) : 0;
			e.awis           = row[60] ? static_cast<int8_t>(atoi(row[60])) : 0;
			e.acha           = row[61] ? static_cast<int8_t>(atoi(row[61])) : 0;
			e.mr             = row[62] ? static_cast<int8_t>(atoi(row[62])) : 0;
			e.fr             = row[63] ? static_cast<int8_t>(atoi(row[63])) : 0;
			e.cr             = row[64] ? static_cast<int8_t>(atoi(row[64])) : 0;
			e.dr             = row[65] ? static_cast<int8_t>(atoi(row[65])) : 0;
			e.pr             = row[66] ? static_cast<int8_t>(atoi(row[66])) : 0;

			all_entries.push_back(e);
		}

		return all_entries;
	}

	static std::vector<EnchantmentDefinition> GetWhere(Database& db, const std::string &where_filter)
	{
		std::vector<EnchantmentDefinition> all_entries;

		auto results = db.QueryDatabase(
			fmt::format(
				"{} WHERE {}",
				BaseSelect(),
				where_filter
			)
		);

		all_entries.reserve(results.RowCount());

		for (auto row = results.begin(); row != results.end(); ++row) {
			EnchantmentDefinition e{};

			e.aug_id         = row[0] ? static_cast<uint32_t>(strtoul(row[0], nullptr, 10)) : 0;
			e.quality        = row[1] ? static_cast<uint8_t>(strtoul(row[1], nullptr, 10)) : 0;
			e.rarity         = row[2] ? static_cast<uint8_t>(strtoul(row[2], nullptr, 10)) : 1;
			e.name           = row[3] ? row[3] : "";
			e.lore_desc      = row[4] ? row[4] : "";
			e.classes        = row[5] ? static_cast<uint32_t>(strtoul(row[5], nullptr, 10)) : 65535;
			e.slots          = row[6] ? static_cast<uint32_t>(strtoul(row[6], nullptr, 10)) : 65535;
			e.nodrop         = row[7] ? static_cast<int8_t>(atoi(row[7])) : 1;
			e.worn_effect    = row[8] ? static_cast<uint16_t>(strtoul(row[8], nullptr, 10)) : 0;
			e.focus_effect   = row[9] ? static_cast<uint16_t>(strtoul(row[9], nullptr, 10)) : 0;
			e.proc_effect    = row[10] ? static_cast<uint16_t>(strtoul(row[10], nullptr, 10)) : 0;
			e.click_effect   = row[11] ? static_cast<uint16_t>(strtoul(row[11], nullptr, 10)) : 0;
			e.damage         = row[12] ? static_cast<int8_t>(atoi(row[12])) : 0;
			e.delay          = row[13] ? static_cast<int8_t>(atoi(row[13])) : 0;
			e.elemdmgamt     = row[14] ? static_cast<int8_t>(atoi(row[14])) : 0;
			e.elemdmgtype    = row[15] ? static_cast<int8_t>(atoi(row[15])) : 0;
			e.banedmgamt     = row[16] ? static_cast<int8_t>(atoi(row[16])) : 0;
			e.banedmgbody    = row[17] ? static_cast<int8_t>(atoi(row[17])) : 0;
			e.banedmgraceamt = row[18] ? static_cast<int8_t>(atoi(row[18])) : 0;
			e.banedmgrace    = row[19] ? static_cast<int8_t>(atoi(row[19])) : 0;
			e.ac             = row[20] ? static_cast<int8_t>(atoi(row[20])) : 0;
			e.hp             = row[21] ? static_cast<int16_t>(atoi(row[21])) : 0;
			e.mana           = row[22] ? static_cast<int16_t>(atoi(row[22])) : 0;
			e.endur          = row[23] ? static_cast<int16_t>(atoi(row[23])) : 0;
			e.heroic_str     = row[24] ? static_cast<int8_t>(atoi(row[24])) : 0;
			e.heroic_sta     = row[25] ? static_cast<int8_t>(atoi(row[25])) : 0;
			e.heroic_agi     = row[26] ? static_cast<int8_t>(atoi(row[26])) : 0;
			e.heroic_dex     = row[27] ? static_cast<int8_t>(atoi(row[27])) : 0;
			e.heroic_wis     = row[28] ? static_cast<int8_t>(atoi(row[28])) : 0;
			e.heroic_int     = row[29] ? static_cast<int8_t>(atoi(row[29])) : 0;
			e.heroic_cha     = row[30] ? static_cast<int8_t>(atoi(row[30])) : 0;
			e.heroic_mr      = row[31] ? static_cast<int8_t>(atoi(row[31])) : 0;
			e.heroic_fr      = row[32] ? static_cast<int8_t>(atoi(row[32])) : 0;
			e.heroic_cr      = row[33] ? static_cast<int8_t>(atoi(row[33])) : 0;
			e.heroic_dr      = row[34] ? static_cast<int8_t>(atoi(row[34])) : 0;
			e.heroic_pr      = row[35] ? static_cast<int8_t>(atoi(row[35])) : 0;
			e.spelldmg       = row[36] ? static_cast<int8_t>(atoi(row[36])) : 0;
			e.healamt        = row[37] ? static_cast<int8_t>(atoi(row[37])) : 0;
			e.regen          = row[38] ? static_cast<int8_t>(atoi(row[38])) : 0;
			e.mana_regen     = row[39] ? static_cast<int8_t>(atoi(row[39])) : 0;
			e.endur_regen    = row[40] ? static_cast<int8_t>(atoi(row[40])) : 0;
			e.accuracy       = row[41] ? static_cast<int8_t>(atoi(row[41])) : 0;
			e.avoidance      = row[42] ? static_cast<int8_t>(atoi(row[42])) : 0;
			e.combateffects  = row[43] ? static_cast<int8_t>(atoi(row[43])) : 0;
			e.damageshield   = row[44] ? static_cast<int8_t>(atoi(row[44])) : 0;
			e.dsmitigation   = row[45] ? static_cast<int8_t>(atoi(row[45])) : 0;
			e.spellshield    = row[46] ? static_cast<int8_t>(atoi(row[46])) : 0;
			e.shielding      = row[47] ? static_cast<int8_t>(atoi(row[47])) : 0;
			e.dotshielding   = row[48] ? static_cast<int8_t>(atoi(row[48])) : 0;
			e.stunresist     = row[49] ? static_cast<int8_t>(atoi(row[49])) : 0;
			e.strikethrough  = row[50] ? static_cast<int8_t>(atoi(row[50])) : 0;
			e.clairvoyance   = row[51] ? static_cast<int8_t>(atoi(row[51])) : 0;
			e.skill_id       = row[52] ? static_cast<int8_t>(atoi(row[52])) : 0;
			e.skillmod       = row[53] ? static_cast<int8_t>(atoi(row[53])) : 0;
			e.skilldmg       = row[54] ? static_cast<int8_t>(atoi(row[54])) : 0;
			e.astr           = row[55] ? static_cast<int8_t>(atoi(row[55])) : 0;
			e.asta           = row[56] ? static_cast<int8_t>(atoi(row[56])) : 0;
			e.adex           = row[57] ? static_cast<int8_t>(atoi(row[57])) : 0;
			e.aagi           = row[58] ? static_cast<int8_t>(atoi(row[58])) : 0;
			e.aint           = row[59] ? static_cast<int8_t>(atoi(row[59])) : 0;
			e.awis           = row[60] ? static_cast<int8_t>(atoi(row[60])) : 0;
			e.acha           = row[61] ? static_cast<int8_t>(atoi(row[61])) : 0;
			e.mr             = row[62] ? static_cast<int8_t>(atoi(row[62])) : 0;
			e.fr             = row[63] ? static_cast<int8_t>(atoi(row[63])) : 0;
			e.cr             = row[64] ? static_cast<int8_t>(atoi(row[64])) : 0;
			e.dr             = row[65] ? static_cast<int8_t>(atoi(row[65])) : 0;
			e.pr             = row[66] ? static_cast<int8_t>(atoi(row[66])) : 0;

			all_entries.push_back(e);
		}

		return all_entries;
	}

	static int DeleteWhere(Database& db, const std::string &where_filter)
	{
		auto results = db.QueryDatabase(
			fmt::format(
				"DELETE FROM {} WHERE {}",
				TableName(),
				where_filter
			)
		);

		return (results.Success() ? results.RowsAffected() : 0);
	}

	static int Truncate(Database& db)
	{
		auto results = db.QueryDatabase(
			fmt::format(
				"TRUNCATE TABLE {}",
				TableName()
			)
		);

		return (results.Success() ? results.RowsAffected() : 0);
	}

	static int64 GetMaxId(Database& db)
	{
		auto results = db.QueryDatabase(
			fmt::format(
				"SELECT COALESCE(MAX({}), 0) FROM {}",
				PrimaryKey(),
				TableName()
			)
		);

		return (results.Success() && results.begin()[0] ? strtoll(results.begin()[0], nullptr, 10) : 0);
	}

	static int64 Count(Database& db, const std::string &where_filter = "")
	{
		auto results = db.QueryDatabase(
			fmt::format(
				"SELECT COUNT(*) FROM {} {}",
				TableName(),
				(where_filter.empty() ? "" : "WHERE " + where_filter)
			)
		);

		return (results.Success() && results.begin()[0] ? strtoll(results.begin()[0], nullptr, 10) : 0);
	}

	static std::string BaseReplace()
	{
		return fmt::format(
			"REPLACE INTO {} ({}) ",
			TableName(),
			ColumnsRaw()
		);
	}

	static int ReplaceOne(
		Database& db,
		const EnchantmentDefinition &e
	)
	{
		std::vector<std::string> v;

		v.push_back(std::to_string(e.aug_id));
		v.push_back(std::to_string(e.quality));
		v.push_back(std::to_string(e.rarity));
		v.push_back("'" + Strings::Escape(e.name) + "'");
		v.push_back("'" + Strings::Escape(e.lore_desc) + "'");
		v.push_back(std::to_string(e.classes));
		v.push_back(std::to_string(e.slots));
		v.push_back(std::to_string(e.nodrop));
		v.push_back(std::to_string(e.worn_effect));
		v.push_back(std::to_string(e.focus_effect));
		v.push_back(std::to_string(e.proc_effect));
		v.push_back(std::to_string(e.click_effect));
		v.push_back(std::to_string(e.damage));
		v.push_back(std::to_string(e.delay));
		v.push_back(std::to_string(e.elemdmgamt));
		v.push_back(std::to_string(e.elemdmgtype));
		v.push_back(std::to_string(e.banedmgamt));
		v.push_back(std::to_string(e.banedmgbody));
		v.push_back(std::to_string(e.banedmgraceamt));
		v.push_back(std::to_string(e.banedmgrace));
		v.push_back(std::to_string(e.ac));
		v.push_back(std::to_string(e.hp));
		v.push_back(std::to_string(e.mana));
		v.push_back(std::to_string(e.endur));
		v.push_back(std::to_string(e.heroic_str));
		v.push_back(std::to_string(e.heroic_sta));
		v.push_back(std::to_string(e.heroic_agi));
		v.push_back(std::to_string(e.heroic_dex));
		v.push_back(std::to_string(e.heroic_wis));
		v.push_back(std::to_string(e.heroic_int));
		v.push_back(std::to_string(e.heroic_cha));
		v.push_back(std::to_string(e.heroic_mr));
		v.push_back(std::to_string(e.heroic_fr));
		v.push_back(std::to_string(e.heroic_cr));
		v.push_back(std::to_string(e.heroic_dr));
		v.push_back(std::to_string(e.heroic_pr));
		v.push_back(std::to_string(e.spelldmg));
		v.push_back(std::to_string(e.healamt));
		v.push_back(std::to_string(e.regen));
		v.push_back(std::to_string(e.mana_regen));
		v.push_back(std::to_string(e.endur_regen));
		v.push_back(std::to_string(e.accuracy));
		v.push_back(std::to_string(e.avoidance));
		v.push_back(std::to_string(e.combateffects));
		v.push_back(std::to_string(e.damageshield));
		v.push_back(std::to_string(e.dsmitigation));
		v.push_back(std::to_string(e.spellshield));
		v.push_back(std::to_string(e.shielding));
		v.push_back(std::to_string(e.dotshielding));
		v.push_back(std::to_string(e.stunresist));
		v.push_back(std::to_string(e.strikethrough));
		v.push_back(std::to_string(e.clairvoyance));
		v.push_back(std::to_string(e.skill_id));
		v.push_back(std::to_string(e.skillmod));
		v.push_back(std::to_string(e.skilldmg));
		v.push_back(std::to_string(e.astr));
		v.push_back(std::to_string(e.asta));
		v.push_back(std::to_string(e.adex));
		v.push_back(std::to_string(e.aagi));
		v.push_back(std::to_string(e.aint));
		v.push_back(std::to_string(e.awis));
		v.push_back(std::to_string(e.acha));
		v.push_back(std::to_string(e.mr));
		v.push_back(std::to_string(e.fr));
		v.push_back(std::to_string(e.cr));
		v.push_back(std::to_string(e.dr));
		v.push_back(std::to_string(e.pr));

		auto results = db.QueryDatabase(
			fmt::format(
				"{} VALUES ({})",
				BaseReplace(),
				Strings::Implode(",", v)
			)
		);

		return (results.Success() ? results.RowsAffected() : 0);
	}

	static int ReplaceMany(
		Database& db,
		const std::vector<EnchantmentDefinition> &entries
	)
	{
		std::vector<std::string> insert_chunks;

		for (auto &e: entries) {
			std::vector<std::string> v;

			v.push_back(std::to_string(e.aug_id));
			v.push_back(std::to_string(e.quality));
			v.push_back(std::to_string(e.rarity));
			v.push_back("'" + Strings::Escape(e.name) + "'");
			v.push_back("'" + Strings::Escape(e.lore_desc) + "'");
			v.push_back(std::to_string(e.classes));
			v.push_back(std::to_string(e.slots));
			v.push_back(std::to_string(e.nodrop));
			v.push_back(std::to_string(e.worn_effect));
			v.push_back(std::to_string(e.focus_effect));
			v.push_back(std::to_string(e.proc_effect));
			v.push_back(std::to_string(e.click_effect));
			v.push_back(std::to_string(e.damage));
			v.push_back(std::to_string(e.delay));
			v.push_back(std::to_string(e.elemdmgamt));
			v.push_back(std::to_string(e.elemdmgtype));
			v.push_back(std::to_string(e.banedmgamt));
			v.push_back(std::to_string(e.banedmgbody));
			v.push_back(std::to_string(e.banedmgraceamt));
			v.push_back(std::to_string(e.banedmgrace));
			v.push_back(std::to_string(e.ac));
			v.push_back(std::to_string(e.hp));
			v.push_back(std::to_string(e.mana));
			v.push_back(std::to_string(e.endur));
			v.push_back(std::to_string(e.heroic_str));
			v.push_back(std::to_string(e.heroic_sta));
			v.push_back(std::to_string(e.heroic_agi));
			v.push_back(std::to_string(e.heroic_dex));
			v.push_back(std::to_string(e.heroic_wis));
			v.push_back(std::to_string(e.heroic_int));
			v.push_back(std::to_string(e.heroic_cha));
			v.push_back(std::to_string(e.heroic_mr));
			v.push_back(std::to_string(e.heroic_fr));
			v.push_back(std::to_string(e.heroic_cr));
			v.push_back(std::to_string(e.heroic_dr));
			v.push_back(std::to_string(e.heroic_pr));
			v.push_back(std::to_string(e.spelldmg));
			v.push_back(std::to_string(e.healamt));
			v.push_back(std::to_string(e.regen));
			v.push_back(std::to_string(e.mana_regen));
			v.push_back(std::to_string(e.endur_regen));
			v.push_back(std::to_string(e.accuracy));
			v.push_back(std::to_string(e.avoidance));
			v.push_back(std::to_string(e.combateffects));
			v.push_back(std::to_string(e.damageshield));
			v.push_back(std::to_string(e.dsmitigation));
			v.push_back(std::to_string(e.spellshield));
			v.push_back(std::to_string(e.shielding));
			v.push_back(std::to_string(e.dotshielding));
			v.push_back(std::to_string(e.stunresist));
			v.push_back(std::to_string(e.strikethrough));
			v.push_back(std::to_string(e.clairvoyance));
			v.push_back(std::to_string(e.skill_id));
			v.push_back(std::to_string(e.skillmod));
			v.push_back(std::to_string(e.skilldmg));
			v.push_back(std::to_string(e.astr));
			v.push_back(std::to_string(e.asta));
			v.push_back(std::to_string(e.adex));
			v.push_back(std::to_string(e.aagi));
			v.push_back(std::to_string(e.aint));
			v.push_back(std::to_string(e.awis));
			v.push_back(std::to_string(e.acha));
			v.push_back(std::to_string(e.mr));
			v.push_back(std::to_string(e.fr));
			v.push_back(std::to_string(e.cr));
			v.push_back(std::to_string(e.dr));
			v.push_back(std::to_string(e.pr));

			insert_chunks.push_back("(" + Strings::Implode(",", v) + ")");
		}

		std::vector<std::string> v;

		auto results = db.QueryDatabase(
			fmt::format(
				"{} VALUES {}",
				BaseReplace(),
				Strings::Implode(",", insert_chunks)
			)
		);

		return (results.Success() ? results.RowsAffected() : 0);
	}
};

#endif //EQEMU_BASE_ENCHANTMENT_DEFINITION_REPOSITORY_H
