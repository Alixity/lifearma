/*
    class PLAYERSIDE { // PLAYERSIDE can be: WEST (for cops), CIV (for civ/reb), GUER (for medics), EAST (for opfor)
        // NOTES:
        //     empty array means that nothing will be add on players
        //     if you put more than a uniform on the CIV's class, they will be selected randonly,
        //         otherwise, for the other teams, player will get the uniform related to his level

        itemType[] = { // itemType can be: uniform, headgear, vest, backpack, weapon, items or linkedItems
            { "classname", "conditions" }
        };
    };
*/
class Loadouts {
    // COP
    class WEST {
        uniform[] = {
            {"U_Rangemaster", "call life_copLevel > 0"}
        };
        headgear[] = {
            {"H_Cap_blk", "call life_copLevel > 0"}
        };
        vest[] = {
            {"V_Rangemaster_belt", "call life_copLevel > 0"}
        };
        backpack[] = {};
        weapon[] = {
            {"hgun_P07_snds_F", "call life_copLevel > 0"}
        };
        mags[] = {
            {"16Rnd_9x21_Mag", 6, "call life_copLevel > 0"}
        };
        items[] = {};
        linkedItems[] = {
            {"ItemMap", "call life_copLevel > 0"},
            {"ItemCompass", "call life_copLevel > 0"},
            {"ItemRadio", ""},
            {"ItemWatch", "call life_copLevel > 0"}
        };
    };

    // CIV
    class CIV {
        uniform[] = {
            {"U_C_Poloshirt_salmon", ""},
            {"U_BG_Guerilla3_1", "license_civ_rebel"},
            {"U_C_Driver_2", "life_is_arrested"},
            {"U_C_Poloshirt_blue", "!life_is_arrested"},
            {"U_C_Poloshirt_salmon", ""},
            {"U_C_Poloshirt_tricolour", ""}
        };
        headgear[] = {};
        vest[] = {
            {"V_BandollierB_khk", "license_civ_rebel"},
        };
        backpack[] = {};
        weapon[] = {};
        mags[] = {};
        items[] = {};
        linkedItems[] = {
            {"ItemMap", ""},
            {"ItemCompass", ""},
            {"ItemRadio", ""},
            {"ItemWatch", ""}
        };
    };

    // MED
    class GUER {
        uniform[] = {
            {"U_I_CombatUniform", "call life_medicLevel >= 1"}
            // {"U_C_Paramedic_01_F", "call life_medicLevel >= 1"}
        };
        headgear[] = {
            {"H_Cap_red", "call life_medicLevel >= 1"}
        };
        vest[] = {};
        backpack[] = {
            {"B_Messenger_Gray_F", "call life_medicLevel >= 1"}
        };
        weapon[] = {};
        mags[] = {};
        items[] = {
            {"FirstAidKit", 3, "call life_medicLevel >= 1"}
        };
        linkedItems[] = {
            {"ItemMap", "call life_medicLevel >= 1"},
            {"ItemCompass", "call life_medicLevel >= 1"},
            {"ItemRadio", "call life_medicLevel >= 1"},
            {"ItemWatch", "call life_medicLevel >= 1"}
        };
    };
};
