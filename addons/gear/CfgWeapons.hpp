class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class CfgWeapons {
    class ItemCore;
    class Uniform_Base;
    class UniformItem;
    class HeadgearItem;
    class VestItem;

    class ACRE_BaseRadio;
    class CBA_MiscItem_ItemInfo;
    class ACRE_PRC117F: ACRE_BaseRadio {
        class ItemInfo: CBA_MiscItem_ItemInfo {
            allowedSlots[] = { 701,801,901 };
        };
    };

    class UK3CB_BAF_U_CombatUniform_MTP_TShirt_RM;
    class UK3CB_BAF_U_CombatUniform_MTP_TShirt: UK3CB_BAF_U_CombatUniform_MTP_TShirt_RM {
        scope = 2;
        author = "UKSF";
        displayName = "Combat T-Shirt MTP";
        class ItemInfo: UniformItem {
            uniformModel = "-";
            uniformClass = "UK3CB_BAF_Soldier_MTP_Tshirt_base";
            containerClass = "Supply40";
            mass = 40;
        };
    };
    class U_I_CombatUniform;
    class UK3CB_BAF_U_CombatUniform_MTP_1Para: U_I_CombatUniform {
        scope = 2;
        author = "UKSF";
        DLC = "UK3CB_BAF_Equipment";
        displayName = "Combat Uniform MTP 1Para";
        descriptionShort = "BAF Combat Uniform MTP<br/>by www.3commandobrigade.com";
        picture = QPATHTOF(UI\icon_uniform_mtp_1para_ca.paa);
        hiddenSelections[] = { "Camo" };
        hiddenSelectionsTextures[] = { QPATHTOF(data\uniforms\mtp_uk_1para.paa) };
        class ItemInfo: UniformItem {
            uniformModel = "-";
            uniformClass = "UK3CB_BAF_Soldier_MTP_1para_LongSleeve_base";
            containerClass = "Supply40";
            mass = 40;
        };
    };
    class U_I_CombatUniform_shortsleeve;
    class UK3CB_BAF_U_CombatUniform_MTP_1Para_ShortSleeve: U_I_CombatUniform_shortsleeve {
        scope = 2;
        author = "UKSF";
        DLC = "UK3CB_BAF_Equipment";
        displayName = "Combat Uniform MTP 1Para Rolled";
        descriptionShort = "BAF Combat Uniform MTP<br>Sleeves Rolled-Up<br/>by www.3commandobrigade.com";
        picture = QPATHTOF(UI\icon_uniform_mtp_1para_rolledup_ca.paa);
        hiddenSelections[] = { "Camo" };
        hiddenSelectionsTextures[] = { QPATHTOF(data\uniforms\mtp_uk_1para.paa) };
        class ItemInfo: UniformItem {
            uniformModel = "-";
            uniformClass = "UK3CB_BAF_Soldier_MTP_1para_ShortSleeve_base";
            containerClass = "Supply40";
            mass = 40;
        };
    };
    class UK3CB_BAF_U_CombatUniform_MTP_CSMR: U_I_CombatUniform {
        scope = 2;
        author = "UKSF";
        DLC = "UK3CB_BAF_Equipment";
        displayName = "Combat Uniform MTP CSMR";
        descriptionShort = "BAF Combat Uniform MTP<br/>by www.3commandobrigade.com";
        picture = QPATHTOF(UI\icon_uniform_mtp_csmr_ca.paa);
        hiddenSelections[] = { "Camo" };
        hiddenSelectionsTextures[] = { QPATHTOF(data\uniforms\mtp_uk_csmr.paa) };
        class ItemInfo: UniformItem {
            uniformModel = "-";
            uniformClass = "UK3CB_BAF_Soldier_MTP_CSMR_LongSleeve_base";
            containerClass = "Supply40";
            mass = 40;
        };
    };
    class UK3CB_BAF_U_CombatUniform_MTP_CSMR_ShortSleeve: U_I_CombatUniform_shortsleeve {
        scope = 2;
        author = "UKSF";
        DLC = "UK3CB_BAF_Equipment";
        displayName = "Combat Uniform MTP CSMR Rolled";
        descriptionShort = "BAF Combat Uniform MTP<br>Sleeves Rolled-Up<br/>by www.3commandobrigade.com";
        picture = QPATHTOF(UI\icon_uniform_mtp_csmr_rolledup_ca.paa);
        hiddenSelections[] = { "Camo" };
        hiddenSelectionsTextures[] = { QPATHTOF(data\uniforms\mtp_uk_csmr.paa) };
        class ItemInfo: UniformItem {
            uniformModel = "-";
            uniformClass = "UK3CB_BAF_Soldier_MTP_CSMR_ShortSleeve_base";
            containerClass = "Supply40";
            mass = 40;
        };
    };
    class UK3CB_BAF_U_CombatUniform_MTP_Path: U_I_CombatUniform {
        scope = 2;
        author = "UKSF";
        DLC = "UK3CB_BAF_Equipment";
        displayName = "Combat Uniform MTP Pathfinder";
        descriptionShort = "BAF Combat Uniform MTP<br/>by www.3commandobrigade.com";
        picture = QPATHTOF(UI\icon_uniform_mtp_path_ca.paa);
        hiddenSelections[] = { "Camo" };
        hiddenSelectionsTextures[] = { QPATHTOF(data\uniforms\mtp_uk_path.paa) };
        class ItemInfo: UniformItem {
            uniformModel = "-";
            uniformClass = "UK3CB_BAF_Soldier_MTP_Path_LongSleeve_base";
            containerClass = "Supply40";
            mass = 40;
        };
    };
    class UK3CB_BAF_U_CombatUniform_MTP_Path_ShortSleeve: U_I_CombatUniform_shortsleeve {
        scope = 2;
        author = "UKSF";
        DLC = "UK3CB_BAF_Equipment";
        displayName = "Combat Uniform MTP Pathfinder Rolled";
        descriptionShort = "BAF Combat Uniform MTP<br>Sleeves Rolled-Up<br/>by www.3commandobrigade.com";
        picture = QPATHTOF(UI\icon_uniform_mtp_path_rolledup_ca.paa);
        hiddenSelections[] = { "Camo" };
        hiddenSelectionsTextures[] = { QPATHTOF(data\uniforms\mtp_uk_path.paa) };
        class ItemInfo: UniformItem {
            uniformModel = "-";
            uniformClass = "UK3CB_BAF_Soldier_MTP_Path_ShortSleeve_base";
            containerClass = "Supply40";
            mass = 40;
        };
    };
    class UK3CB_BAF_U_CombatUniform_MTP_Sig: U_I_CombatUniform {
        scope = 2;
        author = "UKSF";
        DLC = "UK3CB_BAF_Equipment";
        displayName = "Combat Uniform MTP Signals";
        descriptionShort = "BAF Combat Uniform MTP<br/>by www.3commandobrigade.com";
        picture = QPATHTOF(UI\icon_uniform_mtp_sig_ca.paa);
        hiddenSelections[] = { "Camo" };
        hiddenSelectionsTextures[] = { QPATHTOF(data\uniforms\mtp_uk_sig.paa) };
        class ItemInfo: UniformItem {
            uniformModel = "-";
            uniformClass = "UK3CB_BAF_Soldier_MTP_Sig_LongSleeve_base";
            containerClass = "Supply40";
            mass = 40;
        };
    };
    class UK3CB_BAF_U_CombatUniform_MTP_Sig_ShortSleeve: U_I_CombatUniform_shortsleeve {
        scope = 2;
        author = "UKSF";
        DLC = "UK3CB_BAF_Equipment";
        displayName = "Combat Uniform MTP Signals Rolled";
        descriptionShort = "BAF Combat Uniform MTP<br>Sleeves Rolled-Up<br/>by www.3commandobrigade.com";
        picture = QPATHTOF(UI\icon_uniform_mtp_sig_rolledup_ca.paa);
        hiddenSelections[] = { "Camo" };
        hiddenSelectionsTextures[] = { QPATHTOF(data\uniforms\mtp_uk_sig.paa) };
        class ItemInfo: UniformItem {
            uniformModel = "-";
            uniformClass = "UK3CB_BAF_Soldier_MTP_Sig_ShortSleeve_base";
            containerClass = "Supply40";
            mass = 40;
        };
    };
    class U_B_HeliPilotCoveralls;
    class UK3CB_BAF_U_HeliPilotCoveralls_RAF: U_B_HeliPilotCoveralls {
        scope = 2;
        author = "UKSF";
        displayName = "Pilot Coveralls [BAF]";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
        hiddenSelections[] = { "camo", "insignia" };
        hiddenSelectionsTextures[] = { QPATHTOF(data\uniforms\pilot_coveralls_raf.paa) };
        class ItemInfo: UniformItem {
            uniformModel = "-";
            uniformClass = "UK3CB_BAF_HeliPilot_RAF_base";
            containerClass = "Supply40";
            mass = 60;
        };
    };
    class UKSF_U_PilotCoveralls_7: UK3CB_BAF_U_HeliPilotCoveralls_RAF {
        displayName = "Pilot Coveralls (7 Sqn.)";
        hiddenSelections[] = { "camo", "insignia" };
        hiddenSelectionsTextures[] = { QPATHTOF(data\uniforms\pilot_coveralls_7.paa) };
        class ItemInfo: UniformItem {
            uniformModel = "-";
            uniformClass = "UKSF_B_Pilot_7";
            containerClass = "Supply100";
            mass = 50;
        };
    };
    class UK3CB_BAF_U_CombatUniform_MTP;
    class UKSF_U_PilotUniform_656: UK3CB_BAF_U_CombatUniform_MTP {
        displayName = "Pilot Uniform (656 Sqn.)";
        hiddenSelections[] = { "camo", "insignia" };
        hiddenSelectionsTextures[] = { QPATHTOF(data\uniforms\pilot_uniform_656.paa) };
        class ItemInfo: UniformItem {
            uniformModel = "-";
            uniformClass = "UKSF_B_Pilot_656";
            containerClass = "Supply100";
            mass = 50;
        };
    };
    class U_I_pilotCoveralls;
    class UKSF_U_PilotGSuit_617: U_I_pilotCoveralls {
        author = "UKSF";
        displayName = "Pilot G-Suit (617 Sqn.)";
        hiddenSelections[] = { "Camo" };
        hiddenSelectionsTextures[] = { QPATHTOF(data\uniforms\pilot_gsuit_617.paa) };
        class ItemInfo: UniformItem {
            uniformModel = "-";
            uniformClass = "UKSF_B_Pilot_617";
            containerClass = "Supply500";
            mass = 80;
        };
        ACE_GForceCoef = 0.3;
    };
    class UKSF_U_RAF_Blues: Uniform_Base {
        scope = 2;
        author = "UKSF";
        displayName = "RAF Blues";
        picture = QPATHTOF(UI\icon_uniform_atc_ca.paa);
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
        class ItemInfo: UniformItem {
            uniformModel = "-";
            uniformClass = "UKSF_B_ATC_base";
            containerClass = "Supply100";
            mass = 20;
        };
    };
    class U_O_Soldier_VR;
    class UKSF_U_VR: U_O_Soldier_VR {
        scope = 2;
        scopeArsenal = 1;
        displayName = "VR Battle Suit";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
        picture = "\A3\characters_f_bootcamp\data\ui\icon_u_o_protagonist_vr_ca.paa";
        hiddenSelectionsTextures[] = { "#(argb,8,8,3)color(0.85,0.05,0.05,1,ca)" };
        class ItemInfo: UniformItem {
            modelSides[] = {0, 3};
            uniformModel = "-";
            uniformClass = "UKSF_O_Rifleman";
            containerClass = "Supply1000";
            mass = 0;
        };
    };

    class H_Beret_02;
    class UKSF_H_AACBeret: H_Beret_02 {
        scope = 2;
        author = "UKSF";
        displayName = "AAC Beret";
        picture = QPATHTOF(UI\icon_beret_aac_ca.paa);
        model = "\A3\characters_f_epb\BLUFOR\headgear_beret02";
        hiddenSelections[] = { "Camo" };
        hiddenSelectionsTextures[] = { QPATHTOF(data\hats\AAC_Beret.paa) };
        hiddenSelectionsMaterials[] = { QPATHTOF(data\hats\Beret.rvmat) };
        class ItemInfo: HeadgearItem {
            mass = 5;
            uniformmodel = "\A3\characters_f_epb\BLUFOR\headgear_beret02";
            modelSides[] = { 6 };
            class HitpointsProtectionInfo {
                class Head {
                    hitpointName = "HitHead";
                    armor = 0;
                    passThrough = 0.5;
                };
            };
            hiddenSelectionsTextures[] = { QPATHTOF(data\hats\AAC_Beret.paa) };
            hiddenSelections[] = { "Camo" };
        };
    };

    class V_TacVest_oli;
    class UKSF_V_Pilot: V_TacVest_oli {
        scope = 2;
        author = "UKSF";
        displayName = "Pilot vest";
        picture = QPATHTOF(UI\icon_v_tacvest_khk_ca.paa);
        hiddenSelections[] = { "camo" };
        hiddenSelectionsTextures[] = { QPATHTOF(data\vests\tacticalvest_olive_co.paa) };
        class ItemInfo: VestItem {
            uniformModel = "A3\Characters_F\Common\equip_tacticalvest";
            containerClass = "Supply500";
            mass = 40;
            armor = 20;
            passThrough = 1;
            hiddenSelections[] = { "camo" };
        };
    };
    class UK3CB_BAF_V_Osprey_Mk2_Base;
    class UK3CB_BAF_V_Pilot_A: UK3CB_BAF_V_Osprey_Mk2_Base {
        class ItemInfo: VestItem {
            containerClass = "Supply500";
        };
    };
    class V_PlateCarrier1_rgr;
    class V_PlateCarrier2_rgr: V_PlateCarrier1_rgr {
        class ItemInfo;
    };
    class UK3CB_BAF_V_Osprey_Base: V_PlateCarrier2_rgr {
        class ItemInfo: ItemInfo {
            class HitpointsProtectionInfo {
                class Neck {
                    HitpointName = "HitNeck";
                    armor = 16; // 12
                    PassThrough = 0.4;
                };
                class Chest {
                    HitpointName = "HitChest";
                    armor = 30; // 26, 20
                    PassThrough = 0.2;
                };
                class Diaphragm {
                    HitpointName = "HitDiaphragm";
                    armor = 30; // 26, 20
                    PassThrough = 0.2;
                };
                class Abdomen {
                    hitpointName = "HitAbdomen";
                    armor = 26; // 20
                    passThrough = 0.2; // 0.3
                };
                class Body {
                    hitpointName = "HitBody";
                    passThrough = 0.2; // 0.3
                };
            };
        };
    };

    class InventoryOpticsItem_Base_F;
    class UK3CB_BAF_SpecterLDS_Dot;
    class UK3CB_BAF_SpecterLDS: ItemCore {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class UK3CB_BAF_LDS {
                    visionMode[] = {};
                };
            };
        };
    };
    class UK3CB_BAF_SpecterLDS_3D: UK3CB_BAF_SpecterLDS {
        scope = 2;
        scopeCurator = 2;
        class ItemInfo: InventoryOpticsItem_Base_F {
            allowedSlots[] = {801,701,901};
            mass = 4;
            mountAction = "MountOptic";
            muzzleEnd = "konec hlavne";
            muzzlePos = "usti hlavne";
            optics = 1;
            scope = 0;
            type = 201;
            unmountAction = "DismountOptic";
            modelOptics = "UK3CB_BAF_Weapons\addons\UK3CB_BAF_Weapons_Accessories\uk3cb_Elcan_Optic.p3d";
            class OpticsModes {
                class UK3CB_BAF_LDS {
                    cameraDir = "";
                    discreteDistance[] = {300};
                    discreteDistanceInitIndex = 0;
                    distanceZoomMax = 300;
                    distanceZoomMin = 300;
                    memoryPointCamera = "opticView";
                    opticsFlare = 1;
                    opticsID = 1;
                    opticsPPEffects[] = { "OpticsCHAbera5","OpticsBlur5" };
                    opticsZoomInit = 0.09;
                    opticsZoomMax = 0.09;
                    opticsZoomMin = 0.09;
                    visionMode[] = {};
                    useModelOptics = 0;
                    opticsDisablePeripherialVision = 0;
                };
            };
        };
    };
    class UK3CB_BAF_SpecterLDS_Dot_3D: UK3CB_BAF_SpecterLDS_Dot {
        scope = 2;
        scopeCurator = 2;
        model = "UK3CB_BAF_Weapons\addons\UK3CB_BAF_Weapons_Accessories\uk3cb_Elcan_Reflex.p3d";
        modelOptics = "";
        class ItemInfo: InventoryOpticsItem_Base_F {
            allowedSlots[] = {801,701,901};
            mass = 4;
            mountAction = "MountOptic";
            muzzleEnd = "konec hlavne";
            muzzlePos = "usti hlavne";
            optics = 1;
            scope = 0;
            type = 201;
            unmountAction = "DismountOptic";
            modelOptics = "UK3CB_BAF_Weapons\addons\UK3CB_BAF_Weapons_Accessories\uk3cb_Elcan_Optic.p3d";
            class OpticsModes {
                class UK3CB_BAF_LDS {
                    cameraDir = "";
                    discreteDistance[] = {300};
                    discreteDistanceInitIndex = 0;
                    distanceZoomMax = 300;
                    distanceZoomMin = 300;
                    memoryPointCamera = "opticView";
                    opticsFlare = 1;
                    opticsID = 1;
                    opticsPPEffects[] = { "OpticsCHAbera5","OpticsBlur5" };
                    opticsZoomInit = 0.09;
                    opticsZoomMax = 0.09;
                    opticsZoomMin = 0.09;
                    visionMode[] = {};
                    useModelOptics = 0;
                    opticsDisablePeripherialVision = 0;
                };
                class UK3CB_BAF_LDS_Top {
                    cameraDir = "";
                    discreteDistance[] = {100};
                    discreteDistanceInitIndex = 0;
                    distanceZoomMax = 100;
                    distanceZoomMin = 100;
                    memoryPointCamera = "eye";
                    opticsFlare = 1;
                    opticsID = 2;
                    opticsPPEffects[] = { "OpticsCHAbera5","OpticsBlur5" };
                    opticsZoomInit = 0.75;
                    opticsZoomMax = 1.1;
                    opticsZoomMin = 0.375;
                    visionMode[] = {};
                    useModelOptics = 0;
                    opticsDisablePeripherialVision = 0;
                };
            };
        };
    };
    class UK3CB_BAF_TA31F: ItemCore {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class UK3CB_BAF_ACOG {
                    visionMode[] = {};
                };
            };
        };
    };
    class UK3CB_BAF_TA648: ItemCore {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class ACOG_scope {
                    visionMode[] = {};
                };
            };
        };
    };
    class UK3CB_BAF_SUSAT: ItemCore {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class UK3CB_BAF_SUSAT {
                    visionMode[] = {};
                };
            };
        };
    };
    class RKSL_optic_LDS: ItemCore {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class LDS {
                    visionMode[] = {};
                };
            };
        };
    };
    class optic_LRPS: ItemCore {
        class ItemInfo: InventoryOpticsItem_Base_F {
            class OpticsModes {
                class Snip {
                    visionMode[] = {};
                };
            };
        };
    };
    class ACE_NVG_Wide;
    class ACE_NVG_Pilot: ACE_NVG_Wide {
        scope = 2;
        scopeArsenal = 2;
        author = "UKSF";
        displayName = "Pilot NVG";
        ACE_NightVision_grain = 0;
        ACE_NightVision_blur = 0;
        ACE_NightVision_radBlur = 0;
    };

    class arifle_Mk20_plain_F;
    class UGL_F;
    class UK3CB_BAF_L85A2: arifle_Mk20_plain_F {
        class UK3CB_BAF_L123A2: UGL_F {
            magazines[] = { "1Rnd_HE_Grenade_shell","UGL_FlareWhite_F","UGL_FlareGreen_F","UGL_FlareRed_F","UGL_FlareYellow_F","UGL_FlareCIR_F","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell","1Rnd_SmokePurple_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","UK3CB_BAF_1Rnd_HEDP_Grenade_shell","ACE_HuntIR_M203" };
        };
        class UK3CB_BAF_L123A3_V2: UGL_F {
            magazines[] = { "1Rnd_HE_Grenade_shell","UGL_FlareWhite_F","UGL_FlareGreen_F","UGL_FlareRed_F","UGL_FlareYellow_F","UGL_FlareCIR_F","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell","1Rnd_SmokePurple_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","UK3CB_BAF_1Rnd_HEDP_Grenade_shell","ACE_HuntIR_M203" };
        };
        class EGLM: UGL_F {
            magazines[] = { "1Rnd_HE_Grenade_shell","UGL_FlareWhite_F","UGL_FlareGreen_F","UGL_FlareRed_F","UGL_FlareYellow_F","UGL_FlareCIR_F","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell","1Rnd_SmokePurple_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","ACE_HuntIR_M203" };
        };
        ace_barrelLength = 461; // c:441.96, a:518
    };
    class UK3CB_BAF_L119_Base: arifle_Mk20_plain_F {
        ace_barrelLength = 450; // c:410, a:398
    };
    class UK3CB_BAF_L119A1_CQB: UK3CB_BAF_L119_Base {
        ace_barrelLength = 434; // c:250, a:250
    };
    class srifle_EBR_F;
    class UK3CB_BAF_L129A1: srifle_EBR_F {
        ace_barrelLength = 410;
    };
    class LMG_Zafir_F;
    class UK3CB_BAF_L7A2: LMG_Zafir_F {
        magazines[] = {
            "UK3CB_BAF_762_200Rnd_T","UK3CB_BAF_762_200Rnd","UK3CB_BAF_762_200Rnd_Blank","UK3CB_BAF_762_100Rnd_T","UK3CB_BAF_762_100Rnd","UK3CB_BAF_762_100Rnd_Blank","UK3CB_BAF_762_100Rnd_EL","UK3CB_BAF_762_100Rnd_T_EL","UK3CB_BAF_762_200Rnd_EL","UK3CB_BAF_762_200Rnd_T_EL"
        };
        class Single: Mode_SemiAuto {
            sounds[] = { "StandardSound" };
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType {
                soundSetShot[] = { "DS_CoaxMG_Closure_SoundSet","DS_CoaxMG_Shot_SoundSet","DS_mmg1_Tail_SoundSet" };
            };
        };
        class FullAuto: Mode_FullAuto {
            sounds[] = { "StandardSound" };
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType {
                soundSetShot[] = { "DS_CoaxMG_Closure_SoundSet","DS_CoaxMG_Shot_SoundSet","DS_mmg1_Tail_SoundSet" };
            };
        };
        class WeaponSlotsInfo;
    };
    class UK3CB_BAF_L7A2_FIST: UK3CB_BAF_L7A2 {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 240;
        };
    };
    class Rifle_Long_Base_F;
    class UK3CB_BAF_L110_Base: Rifle_Long_Base_F {
        class Single: Mode_SemiAuto {
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType {
                soundSetShot[] = {     "DS_zafir_Closure_SoundSet","DS_zafir_Shot_SoundSet","DS_lmg1_Tail_SoundSet" };
            };
        };
        class FullAuto: Mode_FullAuto {
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType {
                soundSetShot[] = {     "DS_zafir_Closure_SoundSet","DS_zafir_Shot_SoundSet","DS_lmg1_Tail_SoundSet" };
            };
        };
    };
    class UK3CB_BAF_L110_556_Base: UK3CB_BAF_L110_Base {
        class Single: Mode_SemiAuto {
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType {
                soundSetShot[] = {     "DS_zafir_Closure_SoundSet","DS_zafir_Shot_SoundSet","DS_lmg1_Tail_SoundSet" };
            };
        };
        class FullAuto: Mode_FullAuto {
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType {
                soundSetShot[] = {     "DS_zafir_Closure_SoundSet","DS_zafir_Shot_SoundSet","DS_lmg1_Tail_SoundSet" };
            };
        };
    };
    class UK3CB_BAF_L110_762_Base: UK3CB_BAF_L110_Base {
        class Single: Mode_SemiAuto {
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType {
                soundSetShot[] = { "DS_CoaxMG_Closure_SoundSet","DS_CoaxMG_Shot_SoundSet","DS_mmg1_Tail_SoundSet" };
            };
        };
        class FullAuto: Mode_FullAuto {
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType {
                soundSetShot[] = { "DS_CoaxMG_Closure_SoundSet","DS_CoaxMG_Shot_SoundSet","DS_mmg1_Tail_SoundSet" };
            };
        };
    };
    class LMG_RCWS;
    class MGun;
    class UK3CB_BAF_L7A2_veh: LMG_RCWS {
        magazines[] = {
            "UK3CB_BAF_762_200Rnd_T","UK3CB_BAF_762_200Rnd","UK3CB_BAF_762_200Rnd_Blank","UK3CB_BAF_762_100Rnd_T","UK3CB_BAF_762_100Rnd","UK3CB_BAF_762_100Rnd_Blank","UK3CB_BAF_762_100Rnd_EL","UK3CB_BAF_762_100Rnd_T_EL","UK3CB_BAF_762_200Rnd_EL","UK3CB_BAF_762_200Rnd_T_EL"
        };
        class manual: MGun {
            sounds[] = { "StandardSound" };
            class StandardSound {
                soundSetShot[] = { "DS_CoaxMG_Closure_SoundSet","DS_CoaxMG_Shot_SoundSet","DS_lmg1_Tail_SoundSet" };
            };
        };
    };
    class GM6_base_F;
    class srifle_GM6_F: GM6_base_F {
        class Single;
    };
    class UK3CB_BAF_L135A1: srifle_GM6_F {
        class Single: Single {
            class BaseSoundModeType {};
            class StandardSound: BaseSoundModeType {
                soundSetShot[] = { "DS_sniper1_crackling_SoundSet","DS_lrr_Shot_SoundSet","DS_sniper1_Tail_SoundSet" };
            };
        };
    };

    class UK3CB_BAF_L85A2_RIS;
    class UK3CB_BAF_L85A2_RIS_Elcan: UK3CB_BAF_L85A2_RIS {
        class LinkedItems {
            class LinkedItemsOptic {
                slot = "asdg_OpticRail_UK3CB_BAF_L85";
                item = "UK3CB_BAF_SpecterLDS_Dot_3D";
            };
        };
    };
    class UK3CB_BAF_L22A2;
    class UK3CB_BAF_L22A2_Elcan: UK3CB_BAF_L22A2 {
        class LinkedItems {
            class LinkedItemsOptic {
                slot = "asdg_OpticRail_UK3CB_BAF_L85";
                item = "UK3CB_BAF_SpecterLDS_Dot_3D";
            };
        };
    };
    class UK3CB_BAF_L85A2_UGL;
    class UK3CB_BAF_L85A2_UGL_Elcan: UK3CB_BAF_L85A2_UGL {
        class LinkedItems {
            class LinkedItemsOptic {
                slot = "asdg_OpticRail_UK3CB_BAF_L85";
                item = "UK3CB_BAF_SpecterLDS_Dot_3D";
            };
        };
    };
    class UK3CB_BAF_L110A3;
    class UK3CB_BAF_L110A3_Elcan: UK3CB_BAF_L110A3 {
        class LinkedItems {
            class LinkedItemsOptic {
                slot = "asdg_OpticRail_UK3CB_BAF_L110A2";
                item = "UK3CB_BAF_SpecterLDS_Dot_3D";
            };
        };
    };
    class UK3CB_BAF_L129A1_Grippod;
    class UK3CB_BAF_L129A1_Grippod_Acog: UK3CB_BAF_L129A1_Grippod {
        class LinkedItems {
            class LinkedItemsOptic {
                slot = "asdg_OpticRail_UK3CB_BAF_L129A1";
                item = "UK3CB_BAF_TA31F";
            };
        };
    };
    class UK3CB_BAF_L115A3;
    class UK3CB_BAF_L115A3_LRPS: UK3CB_BAF_L115A3 {
        class LinkedItems {
            class LinkedItemsOptic {
                slot = "asdg_OpticRail_UK3CB_BAF_L115";
                item = "optic_LRPS";
            };
        };
    };
    class UK3CB_BAF_L115A3_DE;
    class UK3CB_BAF_L115A3_DE_LRPS: UK3CB_BAF_L115A3_DE {
        class LinkedItems {
            class LinkedItemsOptic {
                slot = "asdg_OpticRail_UK3CB_BAF_L115";
                item = "optic_LRPS";
            };
        };
    };
    class UK3CB_BAF_L135A1_LRPS: UK3CB_BAF_L135A1 {
        class LinkedItems {
            class LinkedItemsOptic {
                slot = "asdg_OpticRail_rifles";
                item = "optic_LRPS";
            };
        };
    };
    class launch_NLAW_F;
    class UK3CB_BAF_NLAW_Launcher: launch_NLAW_F {        
        magazines[] = { "ACE_PreloadedMissileDummy" };
        ACE_UsedTube = "ACE_launch_NLAW_Used_F";
        ace_nlaw_enabled = 1;
        uk3cb_used_launcher = "";
        canLock = 1;
        ace_overpressure_priority = 1;
        ace_overpressure_angle = 30;
        ace_overpressure_range = 2;
        ace_overpressure_damage = 0.6;
    };
    class ACE_launch_NLAW_Used_F: launch_NLAW_F {
        modelOptics = "\UK3CB_BAF_Weapons\addons\UK3CB_BAF_Weapons_Launchers\uk3cb_nlaw_optic.p3d";
    };

    class Default;
    class Put: Default {
        muzzles[] += { "BreachChargeMuzzle" };
        class DemoChargeMuzzle;
        class BreachChargeMuzzle: DemoChargeMuzzle {
            displayName = "Breach Charge";
            magazines[] = { "BreachCharge_Remote_Mag" };
        };
    };
    class CUP_weapon_mastersafe: Default {
        displayName = "Safe";
        displayNameMagazine = "Safe";
        shortNameMagazine = "Safe";
        nameSound = "cannon";
        cursor = "EmptyCursor";
        cursorAim = "EmptyCursor";
        magazines[] = { "FakeMagazine" };
        reloadMagazineSound[] = { "", 1, 1 };
        canLock = 0;
        burst = 0;
        reloadTime = 0.01;
        magazineReloadTime = 0.1;
    };
    class CMFlareLauncher;
    class UK3CB_BAF_CMFlareLauncher: CMFlareLauncher {
        modes[] = {"Single", "Burst1", "AIBurst"};
        class Burst1: Mode_Burst {         
            reloadTime = 0.2;
            displayName = "Flares 10/1s";
            burst = 5;
        };
    };
    class missiles_SCALPEL;
    class ace_hellfire_launcher: missiles_SCALPEL {
        displayName = "AGM-114K";
        magazines[] = { "2Rnd_ACE_Hellfire_AGM114K", "4Rnd_ACE_Hellfire_AGM114K", "PylonMissile_1Rnd_ACE_Hellfire_AGM114K", "PylonRack_1Rnd_ACE_Hellfire_AGM114K", "PylonRack_3Rnd_ACE_Hellfire_AGM114K", "PylonRack_4Rnd_ACE_Hellfire_AGM114K" };
    };
    class ace_hellfire_launcher_N: ace_hellfire_launcher {
        displayName = "AGM-114N";
        magazines[] = { "2Rnd_ACE_Hellfire_AGM114N", "4Rnd_ACE_Hellfire_AGM114N", "6Rnd_ACE_Hellfire_AGM114N", "PylonMissile_1Rnd_ACE_Hellfire_AGM114N", "PylonRack_1Rnd_ACE_Hellfire_AGM114N", "PylonRack_3Rnd_ACE_Hellfire_AGM114N", "PylonRack_4Rnd_ACE_Hellfire_AGM114N" };
    };
    class ace_hellfire_launcher_drone: ace_hellfire_launcher {
        magazines[] = { "PylonRack_2Rnd_ACE_Hellfire_AGM114K_Drone" };
    };
    class ace_hellfire_launcher_drone_N: ace_hellfire_launcher_N {
        magazines[] = { "PylonRack_2Rnd_ACE_Hellfire_AGM114N_Drone" };
    };
    class ace_hellfire_launcher_L: ace_hellfire_launcher {
        displayName = "AGM-114L";
        magazines[] = { "4Rnd_ACE_Hellfire_AGM114L", "PylonRack_4Rnd_ACE_Hellfire_AGM114L" };
        ace_hellfire_enabled = 0;
        ace_laser_canSelect = 0;
        weaponLockSystem = 8;
        canLock = 2;
        cmImmunity = 0.95;
    };
    class CannonCore;
    class CUP_Vacannon_M230_veh: CannonCore {
        magazines[] = { "CUP_1200Rnd_TE1_Red_Tracer_30x113mm_M789_HEDP_M","CUP_1200Rnd_TE1_Green_Tracer_30x113mm_M789_HEDP_M","CUP_1200Rnd_TE1_Yellow_Tracer_30x113mm_M789_HEDP_M","CUP_1200Rnd_TE1_White_Tracer_30x113mm_M789_HEDP_M" };
        ballisticsComputer = "4 + 2 + 1";
        reloadTime = 0.096;
        modes[] = { "close", "short", "medium", "far", "manual", "burst_15", "burst_25" };
        cursorAim = "EmptyCursor";      
        class GunParticles {
            class EffectSmokeLeft {
                effectName = "MachineGun2";
                positionName = "usti hlavne";
                directionName = "gun_smoke_left";
            };
            class EffectSmokeRight {
                effectName = "MachineGun2";
                positionName = "usti hlavne";
                directionName = "gun_smoke_right";
            };
            class EffectCartridge {
                positionName = "gun_eject";
                directionName = "gun_eject_dir";
                effectName = "MachineGunCartridge1";
            };
        };
        class manual: CannonCore {
            displayName = "Burst 10";
            textureType = "semi";
            burst = 10;
            soundBurst = 0;
        };
        class burst_15: manual {
            displayName = "Burst 20 ";
            textureType = "burst";
            burst = 20;
        };
        class burst_25: manual {
            displayName = "Full";
            textureType = "fullAuto";
            burst = 1;
        };
    };
    class CUP_Vacannon_M621_AW159_veh: CannonCore {
        class GunParticles {
            class FirstEffect {
                effectName = "machinegun1";
                positionName = "muzzle_1";
                directionName = "chamber_1";
            };
            class EffectCartridge {
                positionName = "eject_1";
                directionName = "eject_1_dir";
                effectName = "MachineGunCartridge";
            };
        };
        cartridgePos = "eject_1";
        cartridgeVel = "eject_1_dir";
        class manual: MGun {
            class StandardSound {
                // soundSetShot[] = { "DS_20mmgatling_Shot_SoundSet","DS_sniper1_tail_soundset" };
                begin1[] = { "A3\Sounds_F\arsenal\weapons_vehicles\gatling_20mm\20mm_01_burst", 3.98107, 1, 1300, {2, 35740} };
                soundBegin[] = { "begin1", 1 };
                closure1[] = { "A3\Sounds_F\weapons\Closure\sfx10", 0.63095737, 1, 20 };
                closure2[] = { "A3\sounds_f\weapons\closure\sfx11", 0.63095737, 1.2, 20 };
                soundClosure[] = { "closure1", 0.5, "closure2", 0.5 };
            };
        };
    };
    class CUP_Vmlauncher_FFAR_veh;
    class CUP_Vmlauncher_CRV7_veh: CUP_Vmlauncher_FFAR_veh {
        class Single;
        class Double: Single {
            displayName = "Ripple 2";
        };
        class Quadruple: Single {
            displayName = "Ripple 4";
        };
    };
    class CUP_Vlmg_M240_veh: MGun {
        displayName = "L7A2";
        magazines[] = { "CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M","CUP_200Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M","CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M","CUP_200Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M","CUP_1200Rnd_TE4_White_Tracer_762x51_M240_M","CUP_100Rnd_TE4_White_Tracer_762x51_M240_M","CUP_1200Rnd_TE4_Red_Tracer_762x51_M240_M",,"UK3CB_BAF_762_200Rnd_T","UK3CB_BAF_762_200Rnd","UK3CB_BAF_762_200Rnd_Blank","UK3CB_BAF_762_100Rnd_T","UK3CB_BAF_762_100Rnd","UK3CB_BAF_762_100Rnd_Blank","UK3CB_BAF_762_100Rnd_EL","UK3CB_BAF_762_100Rnd_T_EL","UK3CB_BAF_762_200Rnd_EL","UK3CB_BAF_762_200Rnd_T_EL" };
        class manual: MGun {
            sounds[] = { "StandardSound" };
            class StandardSound {
                soundSetShot[] = { "DS_CoaxMG_Closure_SoundSet","DS_CoaxMG_Shot_SoundSet","DS_lmg1_Tail_SoundSet" };
            };
        };
    };
    class HMG_M2;
    class CUP_Vhmg_M2_veh: HMG_M2 {
        displayName = "L111A1";
        magazines[] = { "CUP_100Rnd_127x99_M","CUP_100Rnd_TE4_Red_Tracer_127x99_M","CUP_100Rnd_TE4_Green_Tracer_127x99_M","CUP_100Rnd_TE4_Yellow_Tracer_127x99_M","CUP_100Rnd_TE4_White_Tracer_127x99_M","CUP_100Rnd_TE1_Red_Tracer_127x99_M","CUP_100Rnd_TE1_Green_Tracer_127x99_M","CUP_100Rnd_TE1_Yellow_Tracer_127x99_M","CUP_100Rnd_TE1_White_Tracer_127x99_M","CUP_200Rnd_TE1_Red_Tracer_127x99_M","UK3CB_BAF_127_100Rnd" };
        class manual: MGun {
            class StandardSound {
                soundSetShot[] = { "DS_HMG_Shot_SoundSet","DS_sniper1_Tail_SoundSet" };
            };
        };
    };
    class GMG_20mm;
    class GMG_F;
    class CUP_Vhmg_AGS30_veh: GMG_20mm {
        class manual: GMG_F {
            sounds[] = { "StandardSound" };
            class StandardSound {
                soundSetShot[] = { "DS_GMG_Shot_SoundSet","DS_mmg1_Tail_SoundSet" };
            };
        };
    };
    class CUP_Vgmg_MK19_veh: CUP_Vhmg_AGS30_veh {
        displayName = "L134A1";
        magazines[] = { "CUP_48Rnd_40mm_MK19_M","CUP_32Rnd_40mm_MK19_M","CUP_96Rnd_40mm_MK19_M","UK3CB_BAF_32Rnd_40mm_G_Box" };
    };
    class MGunCore;
    class CUP_Vlmg_M134_veh: MGunCore {
        class LowROF: Mode_FullAuto {
            sounds[] = { "StandardSound" };
            class StandardSound {
                soundSetShot[] = { "DS_Minigun762_Shot_SoundSet","DS_mmg1_Tail_SoundSet" };
            };
        };
        class HighROF: LowROF {
            sounds[] = { "StandardSound" };
            class StandardSound {
                soundSetShot[] = { "DS_Minigun762_Shot_SoundSet","DS_mmg1_Tail_SoundSet" };
            };
        };
    };
    delete gatling_30mm;
    class gatling_30mm_base: CannonCore {
        class LowROF: Mode_FullAuto {
            class StandardSound {
                soundSetShot[] = { "DS_30mmgatling_Shot_SoundSet","DS_sniper1_tail_soundset" };
            };
            soundContinuous = 0;
        };
        class close: LowROF {
            class StandardSound {
                soundSetShot[] = { "DS_30mmgatling_Shot_SoundSet","DS_sniper1_tail_soundset" };
            };
            soundContinuous = 0;
        };
        class near: close {
            class StandardSound {
                soundSetShot[] = { "DS_30mmgatling_Shot_SoundSet","DS_sniper1_tail_soundset" };
            };
            soundContinuous = 0;
        };
        class short: close {
            class StandardSound {
                soundSetShot[] = { "DS_30mmgatling_Shot_SoundSet","DS_sniper1_tail_soundset" };
            };
            soundContinuous = 0;
        };
        class medium: close {
            class StandardSound {
                soundSetShot[] = { "DS_30mmgatling_Shot_SoundSet","DS_sniper1_tail_soundset" };
            };
            soundContinuous = 0;
        };
        class far: close {
            class StandardSound {
                soundSetShot[] = { "DS_30mmgatling_Shot_SoundSet","DS_sniper1_tail_soundset" };
            };
            soundContinuous = 0;
        };
    };

    // AA weapons range changes
    // Ural ZU-23, BMP-2 ZU-23, ZU-23
    class CUP_Vacannon_2A14_veh: CannonCore {
        class manual;
        class close: manual {
            midRange = 200; // 300
            maxRange = 500; // 600
            aiDispersionCoefX = 5;
            aiDispersionCoefY = 5;
        };
        class short: close {
            minRange = 300; // 400
            midRange = 500; // 600
            maxRange = 800; // 900
            aiDispersionCoefX = 6;
            aiDispersionCoefY = 6;
        };
        class medium: close {
            minRange = 600; // 700
            midRange = 800; // 900
            maxRange = 1100; // 1200
            aiDispersionCoefX = 7;
            aiDispersionCoefY = 7;
        };
        class far: close {
            minRange = 900; // 1000
            midRange = 1100; // 1200
            maxRange = 1400; // 1500
            aiDispersionCoefX = 8;
            aiDispersionCoefY = 8;
        };
    };
    // Tunguska
    class CUP_Vacannon_GSh302K_veh;
    class CUP_Vacannon_2A38M_veh: CUP_Vacannon_GSh302K_veh {
        class LowROF;
        class close: LowROF {
            midRange = 50; // 150
            maxRange = 200; // 300
            aiDispersionCoefX = 5;
            aiDispersionCoefY = 5;
        };
        class near: close {
            midRange = 150; // 250
            maxRange = 300; // 400
            aiDispersionCoefX = 5;
            aiDispersionCoefY = 5;
        };
        class short: close {
            minRange = 100; // 200
            midRange = 300; // 400
            maxRange = 500; // 600
            aiDispersionCoefX = 6;
            aiDispersionCoefY = 6;
        };
        class medium: close {
            minRange = 300; // 400
            midRange = 600; // 700
            maxRange = 800; // 900
            aiDispersionCoefX = 7;
            aiDispersionCoefY = 7;
        };
        class far: close {
            minRange = 700; // 800
            midRange = 900; // 1000
            maxRange = 1400; // 1500
            aiDispersionCoefX = 8;
            aiDispersionCoefY = 8;
        };
    };
    // ZSU-23-4
    class CUP_Vacannon_AZP23_veh: CannonCore {
        class manual;
        class close: manual {
            midRange = 200; // 300
            maxRange = 500; // 600
            aiDispersionCoefX = 5;
            aiDispersionCoefY = 5;
        };
        class short: close {
            minRange = 300; // 400
            midRange = 500; // 600
            maxRange = 800; // 900
            aiDispersionCoefX = 6;
            aiDispersionCoefY = 6;
        };
        class medium: close {
            minRange = 600; // 700
            midRange = 800; // 900
            maxRange = 1100; // 1200
            aiDispersionCoefX = 7;
            aiDispersionCoefY = 7;
        };
        class far: close {
            minRange = 900; // 1000
            midRange = 1100; // 1200
            maxRange = 1400; // 1500
            aiDispersionCoefX = 8;
            aiDispersionCoefY = 8;
        };
    };
    // Tunguska
    class missiles_titan;
    class CUP_Vmlauncher_9M311_veh: missiles_titan {
        midRange = 1000; // 4500
        maxRange = 5000; // 8000
        aiRateOfFire = 7; // 5
    };
    class CUP_Vmlauncher_Igla_twice_veh: missiles_titan {
        midRange = 1000; // 3100
        maxRange = 4000; // 5200
        aiRateOfFire = 7; // 5
    };
    class CUP_Vmlauncher_Stinger_vehicle_veh: missiles_titan {
        midRange = 1000; // 3100
        maxRange = 4000; // 5200
        aiRateOfFire = 7; // 5
    };
    class CUP_Vmlauncher_RBS70_veh: missiles_titan {
        midRange = 1000; // 3100
        maxRange = 4000; // 5200
        aiRateOfFire = 7; // 5
    };
    class Launcher_Base_F;
    class CUP_launch_Igla: Launcher_Base_F {
        midRange = 1000; // 2500
        maxRange = 3000; // 4800
        aiRateOfFire = 7; // 5
    };
    class CUP_launch_FIM92Stinger: Launcher_Base_F {
        midRange = 1000; // 2500
        maxRange = 3000; // 4800
        aiRateOfFire = 7; // 5
    };
    class CUP_launch_9K32Strela: Launcher_Base_F {
        midRange = 1000; // 2500
        maxRange = 3000; // 4800
        aiRateOfFire = 7; // 5
    };

    // Weapons for virtual army faction
    class CUP_arifle_M4A1;
    class CUP_arifle_M4A1_Acog: CUP_arifle_M4A1 {
        scopeArsenal = 1;
        class LinkedItems {
            class LinkedItemsOptic {
                slot = "CUP_PicatinnyTopMountM4";
                item = "CUP_optic_RCO";
            };
        };
    };
    class CUP_lmg_M240;
    class CUP_lmg_M240_LDS: CUP_lmg_M240 {
        scopeArsenal = 1;
        class LinkedItems {
            class LinkedItemsOptic {
                slot = "CUP_PicatinnyTopMountM4";
                item = "UK3CB_BAF_SpecterLDS";
            };
        };
    };
    class CUP_launch_FIM92Stinger_Rubber: CUP_launch_FIM92Stinger {
        scopeArsenal = 1;
        magazines[] = { "CUP_Stinger_M_Rubber" };
        ace_overpressure_damage = 0;
    };
    class CUP_Vmlauncher_Stinger_vehicle_veh_Rubber: CUP_Vmlauncher_Stinger_vehicle_veh {
        magazines[] = { "CUP_4Rnd_Stinger_M_Rubber" };
    };
    
    #include "CfgWeaponsPrivate.hpp"
};
