class CfgPatches
{
	class R700
	{
		units[]=
		{
			"R700_Suppressor"
		};
		weapons[]=
		{
			"R700"
		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Weapons_Firearms",
			"DZ_Weapons_Ammunition",
			"DZ_Weapons_Magazines",
			"DZ_Weapons_Muzzles",
			"DZ_Weapons_Optics"
		};
		magazines[]=
		{
			"R700_10Rnd"
		};
	};
};
class Mode_Safe;
class Mode_SemiAuto;
class Mode_Single;
class Mode_Burst;
class Mode_FullAuto;
class OpticsInfoRifle;
class cfgWeapons
{
	class Rifle_Base;
	class Launcher_Base;
	class Scout_Base;
	class R700_Base: Scout_Base
	{
		scope=0;
		weight=3000;
		repairableWithKits[]={1};
		repairCosts[]={25};
		modelOptics="-";
		distanceZoomMin=100;
		distanceZoomMax=100;
		PPDOFProperties[]={1,0.5,50,160,4,10};
		opticsFlare=0;
		winchesterTypeOpticsMount=1;
		ironsightsExcludingOptics[]=
		{
			"HuntingOptic"
		};
		WeaponLength=0.934214;
		barrelArmor=1.1109999;
		initSpeedMultiplier=1.15;
		chamberSize=1;
		chamberedRound="";
		chamberableFrom[]=
		{
			"Ammo_338"
		};
		magazines[]=
		{
			"R700_10Rnd"
		};
		magazineSwitchTime=0.38;
		ejectType=0;
		recoilModifier[]={1,1,1};
		swayModifier[]={0.85000002,0.85000002,0.85000002};
		dispersionModifier=-0.00025000001;
		dexterityModifier=-0.2;
		simpleHiddenSelections[]=
		{
			"hide_barrel"
		};
		hiddenSelections[]=
		{
			"camo",
			"camo01",
			"camo02",
			"camo03",
			"camo04"
		};
		class NoiseShoot
		{
			strength=100;
			type="shot";
		};
		modes[]=
		{
			"Single"
		};
		class Single: Mode_Single
		{
			soundSetShot[]=
			{
				"SCOUT_Shot_SoundSet",
				"SCOUT_Tail_SoundSet",
				"SCOUT_InteriorTail_SoundSet"
			};
			soundSetShotExt[]=
			{
				
				{
					"SCOUT_silencer_SoundSet",
					"SCOUT_silencerTail_SoundSet",
					"SCOUT_silencerInteriorTail_SoundSet"
				},
				
				{
					"SCOUT_silencerHomeMade_SoundSet",
					"SCOUT_silencerHomeMadeTail_SoundSet",
					"SCOUT_silencerInteriorTail_SoundSet"
				}
			};
			reloadTime=2;
			recoil="recoil_scout";
			recoilProne="recoil_scout_prone";
			dispersion=0.0015;
			magazineSlot="magazine";
		};
		class OpticsInfo: OpticsInfoRifle
		{
			modelOptics="-";
			distanceZoomMin=100;
			distanceZoomMax=100;
		};
		class InventorySlotsOffsets
		{
			class Shoulder
			{
				position[]={0,-0.02,-0.050000001};
				orientation[]={0,-30,0};
			};
			class Melee
			{
				position[]={0,0,0.050000001};
				orientation[]={0,30,0};
			};
		};
		class Particles
		{
			class OnFire
			{
				class SmokeCloud
				{
					overrideParticle="weapon_shot_winded_smoke";
				};
				class MuzzleFlash
				{
					overrideParticle="weapon_shot_cz527_01";
					ignoreIfSuppressed=1;
					illuminateWorld=1;
					positionOffset[]={-0.050000001,0,0};
				};
			};
			class OnOverheating
			{
				shotsToStartOverheating=1;
				maxOverheatingValue=4;
				overheatingDecayInterval=3;
				class BarrelSmoke
				{
					overrideParticle="smoking_barrel_small";
				};
			};
			class OnBulletCasingEject
			{
				class ChamberSmokeRaise
				{
					overrideParticle="weapon_shot_chamber_smoke_raise";
					overridePoint="Nabojnicestart";
				};
			};
		};
		weaponStateAnim="dz\anims\anm\player\reloads\Scout\w_Scout_states.anm";
	};
	class R700: R700_Base
	{
		scope=2;
		displayName="Remington 700";
		descriptionShort="";
		model="\Weapons\R700\R700.p3d";
		attachments[]=
		{
			"weaponWrap",
			"weaponOpticsHunting",
			"weaponMuzzleR700"
		};
		itemSize[]={9,3};
		hiddenSelectionsTextures[]=
		{
			"Weapons\R700\data\Chassis_McMillan_co.paa",
			"Weapons\R700\data\Action_co.paa",
			"Weapons\R700\data\Barrel_Timberwolf_co.paa",
			"Weapons\R700\data\Barrel_Timberwolf_MuzzleBrake_co.paa",
			"Weapons\R700\data\Chassis_MDTESS_Handguard18_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"Weapons\R700\data\Chassis_McMillan.rvmat",
			"Weapons\R700\data\Action.rvmat",
			"Weapons\R700\data\Barrel_Timberwolf.rvmat",
			"Weapons\R700\data\Barrel_Timberwolf_MuzzleBrake.rvmat",
			"Weapons\R700\data\Chassis_MDTESS_Handguard18.rvmat"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=250;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"Weapons\R700\data\Chassis_McMillan.rvmat",
								"Weapons\R700\data\Action.rvmat",
								"Weapons\R700\data\Barrel_Timberwolf.rvmat",
								"Weapons\R700\data\Barrel_Timberwolf_MuzzleBrake.rvmat",
								"Weapons\R700\data\Chassis_MDTESS_Handguard18.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"Weapons\R700\data\Chassis_McMillan.rvmat",
								"Weapons\R700\data\Action.rvmat",
								"Weapons\R700\data\Barrel_Timberwolf.rvmat",
								"Weapons\R700\data\Barrel_Timberwolf_MuzzleBrake.rvmat",
								"Weapons\R700\data\Chassis_MDTESS_Handguard18.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"Weapons\R700\data\Chassis_McMillan_damage.rvmat",
								"Weapons\R700\data\Action_damage.rvmat",
								"Weapons\R700\data\Barrel_Timberwolf_damage.rvmat",
								"Weapons\R700\data\Barrel_Timberwolf_MuzzleBrake_damage.rvmat",
								"Weapons\R700\data\Chassis_MDTESS_Handguard18_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"Weapons\R700\data\Chassis_McMillan_damage.rvmat",
								"Weapons\R700\data\Action_damage.rvmat",
								"Weapons\R700\data\Barrel_Timberwolf_damage.rvmat",
								"Weapons\R700\data\Barrel_Timberwolf_MuzzleBrake_damage.rvmat",
								"Weapons\R700\data\Chassis_MDTESS_Handguard18_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"Weapons\R700\data\Chassis_McMillan_destruct.rvmat",
								"Weapons\R700\data\Action_destruct.rvmat",
								"Weapons\R700\data\Barrel_Timberwolf_destruct.rvmat",
								"Weapons\R700\data\Barrel_Timberwolf_MuzzleBrake_destruct.rvmat",
								"Weapons\R700\data\Chassis_MDTESS_Handguard18_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
};
class CfgVehicles
{
	class Inventory_Base;
	class ItemSuppressor;
	class R700_Suppressor: ItemSuppressor
	{
		scope=2;
		displayName="Remington R700 Suppressor";
		descriptionShort="";
		model="\Weapons\R700\R700_Suppressor.p3d";
		rotationFlags=17;
		reversed=0;
		weight=73;
		itemSize[]={3,1};
		itemModelLength=0.148;
		barrelArmor=2250;
		lootCategory="Attachments";
		lootTag[]=
		{
			"Military_west"
		};
		inventorySlot[]=
		{
			"weaponMuzzleR700"
		};
		simulation="ItemSuppressor";
		dispersionModifier=-0.00050000002;
		dispersionCondition="true";
		noiseShootModifier=-0.89999998;
		recoilModifier[]={0.89999998,0.89999998,0.89999998};
		swayModifier[]={1.3,1.3,1.3};
		selectionFireAnim="zasleh";
		soundIndex=1;
		muzzlePos="usti hlavne";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=4;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"Weapons\R700\data\Suppressor.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"Weapons\R700\data\Suppressor.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"Weapons\R700\data\Suppressor_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"Weapons\R700\data\Suppressor_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"Weapons\R700\data\Suppressor_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class Particles
		{
			class OnFire
			{
				class MuzzleFlash
				{
					overrideParticle="weapon_shot_fnx_02";
					onlyWithinHealthLabel[]={0,3};
				};
			};
			class OnOverheating
			{
				shotsToStartOverheating=3;
				maxOverheatingValue=10;
				overheatingDecayInterval=1;
				class SmokeTrail
				{
					overrideParticle="smoking_barrel_small";
					onlyWithinRainLimits[]={0,0.2};
				};
				class SmokingBarrelHotSteamSmall
				{
					overrideParticle="smoking_barrel_steam_small";
					positionOffset[]={0,0.1,0};
					onlyWithinOverheatLimits[]={0,1};
					onlyWithinRainLimits[]={0.2,1};
				};
			};
		};
	};
};
class CfgMagazines
{
	class DefaultMagazine;
	class Mag_Scout_5Rnd;
	class R700_10Rnd: Mag_Scout_5Rnd
	{
		scope=2;
		displayName="Remington 700 10Rnd Magazine";
		descriptionShort="";
		model="\Weapons\R700\R700_Magazine.p3d";
		weight=80;
		weightPerQuantityUnit=4;
		itemSize[]={1,2};
		count=10;
		ammo="Bullet_338";
		ammoItems[]=
		{
			"Ammo_338"
		};
		tracersEvery=0;
		hiddenSelections[]=
		{
			"camo",
			"camo01",
			"camo02"
		};
		hiddenSelectionsTextures[]=
		{
			"Weapons\R700\data\338\338_co.paa",
			"Weapons\R700\data\338\338_Brass_co.paa",
			"Weapons\R700\data\Mag_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"Weapons\R700\data\338\338.rvmat",
			"Weapons\R700\data\338\338_Brass.rvmat",
			"Weapons\R700\data\Mag.rvmat"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"Weapons\R700\data\338\338.rvmat",
								"Weapons\R700\data\338\338_Brass.rvmat",
								"Weapons\R700\data\Mag.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"Weapons\R700\data\338\338.rvmat",
								"Weapons\R700\data\338\338_Brass.rvmat",
								"Weapons\R700\data\Mag.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"Weapons\R700\data\338\338_damage.rvmat",
								"Weapons\R700\data\338\338_Brass_damage.rvmat",
								"Weapons\R700\data\Mag_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"Weapons\R700\data\338\338_damage.rvmat",
								"Weapons\R700\data\338\338_Brass_damage.rvmat",
								"Weapons\R700\data\Mag_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"Weapons\R700\data\338\338_destruct.rvmat",
								"Weapons\R700\data\338\338_Brass_destruct.rvmat",
								"Weapons\R700\data\Mag_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class ProxyR700_Magazine: ProxyAttachment
	{
		scope=2;
		inventorySlot="magazine";
		model="\Weapons\R700\Proxies\ProxyR700_Magazine.p3d";
	};
	class ProxyR700_Suppressor: ProxyAttachment
	{
		scope=2;
		inventorySlot="weaponMuzzleR700";
		model="\Weapons\R700\Proxies\ProxyR700_Suppressor.p3d";
	};
};
class CfgSlots
{
	class Slot_weaponMuzzleR700
	{
		name="weaponMuzzleR700";
		displayName="R700 Suppressor";
		ghostIcon="set:dayz_inventory image:supressor";
	};
};
