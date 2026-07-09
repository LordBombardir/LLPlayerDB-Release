#pragma once

#include "DeviceOS.h"

#include <mc/platform/UUID.h>
#include <string>

namespace player_db::types {

struct PlayerEntry {
    mce::UUID                  uuid;
    std::string                name;
    std::optional<std::string> xuid;
    mce::UUID                  minecraftUUID;
    std::string                latestIpAddress;
    time_t                     latestJoinTime;
    time_t                     latestQuitTime;
    std::string                latestLocaleCode;
    unsigned long long         latestCID;
    std::string                latestSkinId;
    std::string                latestGameVersion;
    std::string                latestDeviceId;
    DeviceOS                   latestDeviceOS;
    std::string                latestDeviceModel;
    std::string                latestSelfSignedId;
    std::string                latestPlayFabId; // (LoginPacket "mid") MasterPlayfabId
};

} // namespace player_db::types