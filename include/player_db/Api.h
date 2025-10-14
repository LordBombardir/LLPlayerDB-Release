#pragma once

#include "types/PlayerEntry.h"
#include <mc/world/actor/player/Player.h>
#include <optional>

#ifndef PLAYERDB_API
#ifdef PLAYERDB_EXPORT
#define PLAYERDB_API __declspec(dllexport)
#else
#define PLAYERDB_API __declspec(dllimport)
#endif
#endif

extern "C++" {

namespace player_db::api {

// clang-format off
PLAYERDB_API types::PlayerEntry addOrUpdatePlayerEntry(const Player& player);
PLAYERDB_API types::PlayerEntry addUnknownPlayerEntry(const std::string& name = "", const std::string& xuid = "");

PLAYERDB_API types::PlayerEntry getPlayerEntry(const Player& player);
PLAYERDB_API std::optional<types::PlayerEntry> getPlayerEntry(const mce::UUID& uuid);
PLAYERDB_API std::optional<types::PlayerEntry> getPlayerEntry(const std::string& name = "", const std::string& xuid = "");
// clang-format on

PLAYERDB_API std::optional<types::PlayerEntry> getPlayerEntryByName(const std::string& name);
PLAYERDB_API std::optional<types::PlayerEntry> getPlayerEntryByXuid(const std::string& xuid);
PLAYERDB_API std::optional<types::PlayerEntry> getEntryByMinecraftUUID(const mce::UUID& uuid);

PLAYERDB_API std::vector<types::PlayerEntry> getSimilarEntries(const Player& player);

} // namespace player_db::api
}