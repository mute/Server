#include "../client.h"

void command_zap(Client* c, const Seperator* sep)
{
	auto zone_id = c->GetZoneID();
	auto zone = GetZone(zone_id);
	auto short_name = zone.GetShortName();

	auto query = fmt::format(
		"DELETE FROM spawn2 WHERE zone = {}",
		short_name
	);
	auto results = content_db.QueryDatabase(query);

	if (!results.Success() || !results.RowsAffected()) {
		c->Message(Chat::White, "Failed to update spawns.");
		return;
	}

	c->Message(
		Chat::White,
		fmt::format(
			"Removed spawns from ",
			short_name
		).c_str()
	);
}

