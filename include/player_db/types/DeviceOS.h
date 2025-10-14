#pragma once

namespace player_db::types {

enum class DeviceOS : unsigned short {
    Unknown         = 0x0,
    Android         = 0x1,
    IOS             = 0x2,
    OSX             = 0x3,
    Fire_OS         = 0x4,
    VR_Gears        = 0x5,
    VR_Hololens     = 0x6,
    Windows_10      = 0x7,
    Windows_32      = 0x8,
    Dedicated       = 0x9,
    TV_OS           = 0xA,
    Playstation     = 0xB,
    Nintendo_Switch = 0xC,
    Xbox            = 0xD,
    Windows_Phone   = 0xE,
    Linux           = 0xF
};

}