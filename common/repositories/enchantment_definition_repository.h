#ifndef EQEMU_ENCHANTMENT_DEFINITION_REPOSITORY_H
#define EQEMU_ENCHANTMENT_DEFINITION_REPOSITORY_H

#include "../database.h"
#include "../strings.h"
#include "base/base_enchantment_definition_repository.h"

class EnchantmentDefinitionRepository: public BaseEnchantmentDefinitionRepository {
public:

    /**
     * This file was auto generated and can be modified and extended upon
     *
     * Base repository methods are automatically
     * generated in the "base" version of this repository. The base repository
     * is immutable and to be left untouched, while methods in this class
     * are used as extension methods for more specific persistence-layer
     * accessors or mutators.
     *
     * Base Methods (Subject to be expanded upon in time)
     *
     * Note: Not all tables are designed appropriately to fit functionality with all base methods
     *
     * InsertOne
     * UpdateOne
     * DeleteOne
     * FindOne
     * GetWhere(std::string where_filter)
     * DeleteWhere(std::string where_filter)
     * InsertMany
     * All
     *
     * Example custom methods in a repository
     *
     * EnchantmentDefinitionRepository::GetByZoneAndVersion(int zone_id, int zone_version)
     * EnchantmentDefinitionRepository::GetWhereNeverExpires()
     * EnchantmentDefinitionRepository::GetWhereXAndY()
     * EnchantmentDefinitionRepository::DeleteWhereXAndY()
     *
     * Most of the above could be covered by base methods, but if you as a developer
     * find yourself re-using logic for other parts of the code, its best to just make a
     * method that can be re-used easily elsewhere especially if it can use a base repository
     * method and encapsulate filters there
     */

	// Custom extended repository methods here

	static uint32 GetEnchantmentItemID(const EnchantmentDefinition& definition) {
		return definition.aug_id != 0 ? definition.aug_id + (definition.quality * 1000000) + 100000000 : 0;
	}

	static EnchantmentDefinition GetRandomForItem (Database& db, const EQ::ItemData* base_item) {
		std::string where_filter = fmt::format(
			"((damage = 0 AND elemdmgamt = 0 AND banedmgamt = 0 AND banedmgraceamt = 0) OR "
			"(({} & 6318080) != 0)) AND "
			"(slots & {}) != 0 AND "
			"(classes & {}) != 0 "
			"ORDER BY RAND() LIMIT 1",
			base_item->Slots, base_item->Slots, base_item->Classes
		);

		auto results = GetWhere(db, where_filter);

		if (results.empty()) {
			return NewEntity();
		}

		return results.front();
	}
};

#endif //EQEMU_ENCHANTMENT_DEFINITION_REPOSITORY_H