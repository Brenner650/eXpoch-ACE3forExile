class CfgPatches
{
	class ace_inventory
	{
		name = "ACE3 - Inventory";
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.64;
		requiredAddons[] = {"ace_common"};
		author = "$STR_ace_common_ACETeam";
		authors[] = {"Pabst Mirror, commy2"};
		url = "$STR_ace_main_URL";
		version = "3.8.2.13";
		versionStr = "3.8.2.13";
		versionAr[] = {3,8,2,13};
	};
};
class Extended_PreStart_EventHandlers
{
	class ace_inventory
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\inventory\XEH_preStart.sqf'";
	};
};
class Extended_PreInit_EventHandlers
{
	class ace_inventory
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\inventory\XEH_preInit.sqf'";
	};
};
class Extended_PostInit_EventHandlers
{
	class ace_inventory
	{
		init = "call compile preProcessFileLineNumbers '\z\ace\addons\inventory\XEH_postInit.sqf'";
	};
};
class RscText;
class RscPicture;
class RscListBox;
class RscProgress;
class RscStructuredText;
class RscActiveText;
class RscCombo;
class ACE_Settings
{
	class ace_inventory_inventoryDisplaySize
	{
		value = 0;
		typeName = "SCALAR";
		isClientSettable = 1;
		displayName = "$STR_ace_inventory_SettingName";
		description = "$STR_ace_inventory_SettingDescription";
		values[] = {"$str_medium","$str_large","$str_very_large"};
	};
};
