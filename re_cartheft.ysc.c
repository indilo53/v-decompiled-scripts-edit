#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	int iLocal_12 = 0;
	int iLocal_13 = 0;
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	float fLocal_16 = 0f;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	int iLocal_19 = 0;
	char* sLocal_20 = NULL;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	float fLocal_27 = 0f;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	vector3 vLocal_45 = { 0f, 0f, 0f };
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	vector3 vLocal_52 = { 0f, 0f, 0f };
	var uLocal_55 = 0;
	float fLocal_56 = 0f;
	float fLocal_57 = 0f;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	bool bLocal_61 = 0;
	int iLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	int iLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	char* sLocal_83 = NULL;
	char* sLocal_84 = NULL;
	char* sLocal_85 = NULL;
	char* sLocal_86 = NULL;
	vector3 vLocal_87 = { 0f, 0f, 0f };
	vector3 vLocal_90 = { 0f, 0f, 0f };
	vector3 vLocal_93 = { 0f, 0f, 0f };
	vector3 vLocal_96 = { 0f, 0f, 0f };
	vector3 vLocal_99 = { 0f, 0f, 0f };
	vector3 vLocal_102 = { 0f, 0f, 0f };
	float fLocal_105 = 0f;
	float fLocal_106 = 0f;
	float fLocal_107 = 0f;
	float fLocal_108 = 0f;
	float fLocal_109 = 0f;
	float fLocal_110 = 0f;
	float fLocal_111 = 0f;
	float fLocal_112 = 0f;
	vector3 vLocal_113 = { 0f, 0f, 0f };
	vector3 vLocal_116 = { 0f, 0f, 0f };
	float fLocal_119 = 0f;
	char* sLocal_120 = NULL;
	char* sLocal_121 = NULL;
	struct<10> Local_122[16];
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	char* sLocal_287 = NULL;
	char* sLocal_288 = NULL;
	char* sLocal_289 = NULL;
	char* sLocal_290 = NULL;
	char* sLocal_291 = NULL;
	char* sLocal_292 = NULL;
	char* sLocal_293 = NULL;
	char[] cLocal_294[8] = 0;
	int iLocal_295 = 0;
	bool bLocal_296 = 0;
	int iLocal_297 = 0;
	int iLocal_298 = 0;
	int iLocal_299 = 0;
	int iLocal_300 = 0;
	int iLocal_301 = 0;
	var uLocal_302 = 0;
	int iLocal_303 = 0;
	int iLocal_304 = 0;
	int iLocal_305 = 0;
	char* sLocal_306 = NULL;
	char* sLocal_307 = NULL;
	char* sLocal_308 = NULL;
	char* sLocal_309 = NULL;
	vector3 vLocal_310 = { 0f, 0f, 0f };
	vector3 vLocal_313 = { 0f, 0f, 0f };
	int iLocal_316 = 0;
	vector3 vLocal_317 = { 0f, 0f, 0f };
	vector3 vLocal_320 = { 0f, 0f, 0f };
	vector3 vLocal_323 = { 0f, 0f, 0f };
	vector3 vLocal_326 = { 0f, 0f, 0f };
	var uLocal_329 = 0;
	var uLocal_330 = 0;
	var uLocal_331 = 0;
	var uLocal_332 = -1;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	var uLocal_336 = 0;
	var uLocal_337 = 0;
	var uLocal_338 = 0;
	var uLocal_339 = 1000;
	var uLocal_340 = 1000;
	var uLocal_341 = 0;
	bool bLocal_342 = 0;
	struct<18> ScriptParam_0 = { 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5 } ;
	var uScriptParam_18 = 0;
	var uScriptParam_19 = 0;
	var uScriptParam_20 = 0;
	var uScriptParam_21 = 0;
	var uScriptParam_22 = 0;
#endregion

void __EntryFunction__()
{
	vector3 vVar0;
	int iVar3;
	
	iLocal_3 = 3;
	iLocal_4 = 1;
	iLocal_5 = 134;
	iLocal_6 = 134;
	iLocal_7 = 1;
	iLocal_8 = 1;
	iLocal_9 = 1;
	iLocal_10 = 134;
	iLocal_11 = 1;
	iLocal_12 = 12;
	iLocal_13 = 12;
	fLocal_16 = 0.001f;
	iLocal_19 = -1;
	sLocal_20 = "NULL";
	fLocal_23 = 0f;
	fLocal_27 = -0.0375f;
	fLocal_28 = 0.17f;
	fLocal_32 = 80f;
	fLocal_33 = 140f;
	fLocal_34 = 180f;
	iLocal_41 = 1;
	iLocal_42 = 65;
	iLocal_43 = 49;
	iLocal_44 = 64;
	fLocal_56 = 10f;
	fLocal_57 = 7f;
	iLocal_58 = 1;
	sLocal_84 = "random@car_thief@waving_ig_1";
	fLocal_119 = 1f;
	iLocal_299 = 786603;
	iLocal_300 = 786469;
	sLocal_307 = "car_returned_peyote";
	sLocal_308 = "girl_car_returned";
	sLocal_309 = "player_car_returned";
	vLocal_52 = { ScriptParam_0.f_1[0 /*3*/] };
	uLocal_55 = ScriptParam_0.f_17[0];
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(11))
	{
		func_231();
	}
	func_230();
	if (iLocal_301 == 2)
	{
		if (func_229(34))
		{
			SCRIPT::TERMINATE_THIS_THREAD();
		}
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_IN_FLYING_VEHICLE(PLAYER::PLAYER_PED_ID()))
			{
				vVar0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
				if (vVar0.z > 23f || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -743.3924f, -2129.82f, 12.07619f, -708.892f, -2160.705f, 19.7035f, 124.5f, 0, 1, 0))
				{
					SCRIPT::TERMINATE_THIS_THREAD();
				}
			}
		}
	}
	if (func_188(vLocal_52, 17, iLocal_301, 0, 0))
	{
		func_185(-1);
	}
	else
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		func_184();
		func_183(uLocal_63, &uLocal_66);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PLAYER::_0xC3376F42B1FACCC6(PLAYER::PLAYER_ID());
		}
		func_182();
		if (!func_181())
		{
			if (func_180())
			{
				func_231();
			}
			if (BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
			{
				switch (iLocal_48)
				{
					case 0:
						if (func_163())
						{
							PED::SET_CREATE_RANDOM_COPS(0);
							iLocal_48 = 1;
						}
						break;
					
					case 1:
						if (!PED::IS_PED_INJURED(uLocal_76))
						{
							if (((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_INJURED(uLocal_75)) && func_162(iLocal_77)) && !func_161(0))
							{
								if (func_160())
								{
									if (func_162(iLocal_80))
									{
										VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iLocal_80, 0);
									}
									func_151(1);
									PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.1f);
									func_146(39, 1);
									func_146(40, 1);
									func_146(41, 1);
									func_146(42, 1);
									func_146(43, 1);
									func_146(44, 1);
									SYSTEM::SETTIMERA(0);
								}
							}
							else
							{
								if (!PED::IS_PED_INJURED(uLocal_75))
								{
									AI::TASK_SMART_FLEE_PED(uLocal_75, PLAYER::PLAYER_PED_ID(), 150f, -1, 0, 0);
									PED::SET_PED_KEEP_TASK(uLocal_75, 1);
									SYSTEM::WAIT(0);
								}
								func_231();
							}
						}
						else
						{
							if (!PED::IS_PED_INJURED(uLocal_75) && func_162(iLocal_77))
							{
								AI::TASK_VEHICLE_DRIVE_WANDER(uLocal_75, iLocal_77, 20f, iLocal_299);
								PED::SET_PED_KEEP_TASK(uLocal_75, 1);
								SYSTEM::WAIT(0);
							}
							func_114(0);
						}
						break;
				}
			}
			else
			{
				func_231();
			}
		}
		else
		{
			if (PED::IS_PED_INJURED(uLocal_76))
			{
				if (Local_122[2 /*10*/].f_7)
				{
					func_113(&Local_122, 2);
				}
			}
			PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
			func_105();
			if (func_162(iLocal_77) && !func_104())
			{
				if (func_102())
				{
					if (!PED::IS_PED_INJURED(uLocal_75))
					{
						switch (iLocal_49)
						{
							case 0:
								if (!PED::IS_PED_INJURED(uLocal_76))
								{
									if (PED::IS_PED_IN_VEHICLE(uLocal_76, iLocal_77, 0))
									{
										if (iLocal_301 == 2)
										{
											ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(uLocal_76, 1, 1);
											ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_77, 1, 1);
											AI::OPEN_SEQUENCE_TASK(&uLocal_78);
											AI::TASK_VEHICLE_MISSION_PED_TARGET(0, iLocal_77, PLAYER::PLAYER_PED_ID(), 8, 30f, iLocal_300, 200f, 10f, 0);
											AI::CLOSE_SEQUENCE_TASK(uLocal_78);
											AI::TASK_PERFORM_SEQUENCE(uLocal_76, uLocal_78);
											AI::CLEAR_SEQUENCE_TASK(&uLocal_78);
										}
										else
										{
											ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(uLocal_76, 1, 1);
											AI::OPEN_SEQUENCE_TASK(&uLocal_78);
											AI::TASK_VEHICLE_TEMP_ACTION(0, iLocal_77, 30, 1000);
											AI::TASK_VEHICLE_MISSION_PED_TARGET(0, iLocal_77, PLAYER::PLAYER_PED_ID(), 8, 40f, iLocal_300, 200f, 10f, 1);
											AI::CLOSE_SEQUENCE_TASK(uLocal_78);
											AI::TASK_PERFORM_SEQUENCE(uLocal_76, uLocal_78);
											AI::CLEAR_SEQUENCE_TASK(&uLocal_78);
										}
										vLocal_317 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(iLocal_77, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_77, "wheel_lr")) };
										vLocal_320 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iLocal_77, vLocal_317) };
										GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_ENTITY("scr_wheel_burnout", iLocal_77, vLocal_320 + Vector(-0.5f, -1f, 0f), 0f, 180f, 0f, 0.25f, 0, 0, 0);
										vLocal_323 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(iLocal_77, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_77, "wheel_rr")) };
										vLocal_326 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iLocal_77, vLocal_323) };
										GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_ENTITY("scr_wheel_burnout", iLocal_77, vLocal_326 + Vector(-0.5f, -1f, 0f), 0f, 180f, 0f, 0.25f, 0, 0, 0);
										SYSTEM::SETTIMERA(0);
										if (!UI::DOES_BLIP_EXIST(uLocal_64))
										{
											uLocal_64 = func_100(iLocal_77, 1, 0);
										}
										GAMEPLAY::_SET_UNK_MAP_FLAG(2);
										iLocal_49 = 1;
									}
									else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_77, PLAYER::PLAYER_PED_ID(), 1))
									{
										if (!PED::IS_PED_INJURED(uLocal_76))
										{
											AI::TASK_SMART_FLEE_PED(uLocal_76, PLAYER::PLAYER_PED_ID(), 150f, -1, 0, 0);
											PED::SET_PED_KEEP_TASK(uLocal_76, 1);
											SYSTEM::WAIT(0);
										}
										func_231();
									}
								}
								else
								{
									AI::TASK_VEHICLE_DRIVE_WANDER(uLocal_75, iLocal_77, 20f, iLocal_299);
									PED::SET_PED_KEEP_TASK(uLocal_75, 1);
									SYSTEM::WAIT(0);
									func_114(0);
								}
								break;
							
							case 1:
								if (func_162(iLocal_77))
								{
									if (iLocal_301 == 1)
									{
										if (SYSTEM::TIMERA() < 5000)
										{
											if (SYSTEM::TIMERA() > 2000)
											{
												fLocal_119 = (fLocal_119 + 0.4f);
											}
											else
											{
												fLocal_119 = (fLocal_119 + 0.2f);
											}
											if (fLocal_119 > 30f)
											{
												fLocal_119 = 30f;
											}
											VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_77, fLocal_119);
											iVar3 = VEHICLE::GET_CLOSEST_VEHICLE(ENTITY::GET_ENTITY_COORDS(iLocal_77, 1), 5f, 0, 4);
											if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
											{
												if (func_162(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)))
												{
													if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), iLocal_77))
													{
														SYSTEM::SETTIMERA(5000);
													}
												}
												if (func_162(iVar3))
												{
													if (iVar3 != iLocal_77)
													{
														if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar3, iLocal_77))
														{
															SYSTEM::SETTIMERA(5000);
														}
													}
												}
											}
										}
									}
									if (VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(iLocal_77) < 700f)
									{
										func_231();
									}
								}
								func_69();
								if ((((((func_68() || func_67()) || ENTITY::IS_ENTITY_UPSIDEDOWN(iLocal_77)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iLocal_77, 1, 5000)) || FIRE::IS_ENTITY_ON_FIRE(iLocal_77)) || PED::IS_PED_INJURED(uLocal_76)) || !PED::IS_PED_IN_VEHICLE(uLocal_76, iLocal_77, 0))
								{
									if (AUDIO::IS_AUDIO_SCENE_ACTIVE("RE_CAR_STEAL_SCENE"))
									{
										if (func_162(iLocal_77))
										{
											AUDIO::_0x18EB48CFC41F2EA0(iLocal_77, 0);
										}
										AUDIO::STOP_AUDIO_SCENE("RE_CAR_STEAL_SCENE");
									}
									if (UI::DOES_BLIP_EXIST(uLocal_64))
									{
										UI::REMOVE_BLIP(&uLocal_64);
									}
									func_66();
									if (UI::DOES_BLIP_EXIST(uLocal_63))
									{
										UI::REMOVE_BLIP(&uLocal_63);
									}
									ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(uLocal_75);
									VEHICLE::BRING_VEHICLE_TO_HALT(iLocal_77, 50f, 5, 0);
									uLocal_65 = func_100(iLocal_77, 0, 0);
									fLocal_109 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iLocal_77, 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1));
									fLocal_107 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iLocal_77, 1), ENTITY::GET_ENTITY_COORDS(uLocal_75, 1));
									fLocal_108 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(uLocal_75, 1));
									func_64(&uLocal_330, 0, 0);
									iLocal_49 = 2;
								}
								break;
							
							case 2:
								if (func_162(iLocal_77))
								{
									if (VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(iLocal_77) < 700f)
									{
										func_231();
									}
								}
								if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
								{
									func_231();
								}
								if (!ENTITY::IS_ENTITY_DEAD(uLocal_76, 0))
								{
									if (!PED::IS_PED_IN_VEHICLE(uLocal_76, iLocal_77, 0))
									{
										func_63(uLocal_76, &uLocal_67, -1, 0, 0, 0, -1082130432, 0, -1, -1, 1);
									}
								}
								else
								{
									func_62(&uLocal_67);
								}
								if (!PED::IS_PED_INJURED(uLocal_76))
								{
									if (!PED::IS_PED_IN_COMBAT(uLocal_76, PLAYER::PLAYER_PED_ID()))
									{
										AI::TASK_COMBAT_PED(uLocal_76, PLAYER::PLAYER_PED_ID(), 0, 16);
										STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(ENTITY::GET_ENTITY_MODEL(uLocal_76));
									}
								}
								if ((SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iLocal_77, 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) > (fLocal_109 + 220f) || SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iLocal_77, 1), ENTITY::GET_ENTITY_COORDS(uLocal_75, 1)) > (fLocal_107 + 220f)) || SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(uLocal_75, 1)) > (fLocal_108 + 220f))
								{
									if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_77, 0))
									{
										func_114(0);
									}
									else
									{
										func_231();
									}
								}
								if (UI::DOES_BLIP_EXIST(uLocal_65))
								{
									if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_77, 0))
									{
										UI::REMOVE_BLIP(&uLocal_65);
										uLocal_63 = func_58(uLocal_75, 0, 0);
										func_57(&uLocal_66);
										func_64(&uLocal_330, 0, 0);
										if (!iLocal_60)
										{
											if (iLocal_301 == 1)
											{
												vLocal_93 = { -2258.759f, 4274.059f, 45.9166f };
											}
											else if (bLocal_61)
											{
												vLocal_93 = { -483.4162f, -2160.874f, 8.359f };
											}
											else
											{
												vLocal_93 = { -485.9905f, -2153.542f, 8.1999f };
											}
											if (!CAM::IS_SPHERE_VISIBLE(vLocal_93, 2f) && !ENTITY::IS_ENTITY_ON_SCREEN(uLocal_75))
											{
												ENTITY::SET_ENTITY_COORDS(uLocal_75, vLocal_93, 1, 0, 0, 1);
												ENTITY::SET_ENTITY_HEADING(uLocal_75, fLocal_106);
												iLocal_60 = 1;
											}
										}
										iLocal_50 = 3;
										iLocal_304 = GAMEPLAY::GET_GAME_TIMER();
									}
									else if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_77, uLocal_75, 20f, 20f, 7f, 0, 1, 0))
									{
										func_56();
										if (func_55())
										{
											if (VEHICLE::_0x639431E895B9AA57(uLocal_75, iLocal_77, -1, 0, 0))
											{
												if (!bLocal_296)
												{
													if (func_45(&Local_122, cLocal_294, sLocal_290, 4, 0, 0, 0))
													{
													}
												}
												AI::TASK_VEHICLE_DRIVE_WANDER(uLocal_75, iLocal_77, 35f, iLocal_299);
												PED::SET_PED_KEEP_TASK(uLocal_75, 1);
												func_114(1);
											}
										}
									}
								}
								else if (UI::DOES_BLIP_EXIST(uLocal_63))
								{
									if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_77, 0))
									{
										if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), uLocal_75, fLocal_56, fLocal_56, fLocal_56, 0, 1, 0))
										{
											if (func_44(1, 0, 1))
											{
												UI::REMOVE_BLIP(&uLocal_63);
												if (iLocal_301 == 1)
												{
													if (func_43(ENTITY::GET_ENTITY_HEADING(iLocal_77), 336f, 90f))
													{
														sLocal_306 = "RANDOM@CAR_THEFT_1@MCS_2";
													}
													else
													{
														sLocal_306 = "RANDOM@CAR_THEFT_1@MCS_2";
													}
												}
												else
												{
													sLocal_306 = "RANDOM@CAR_THEFT_1@MCS_3";
												}
												STREAMING::REQUEST_ANIM_DICT(sLocal_306);
												iLocal_50 = 4;
												iLocal_49 = 3;
											}
										}
										else
										{
											func_41(ENTITY::GET_ENTITY_COORDS(uLocal_75, 1), &fLocal_56, &fLocal_57);
										}
									}
									else
									{
										UI::REMOVE_BLIP(&uLocal_63);
										uLocal_65 = func_100(iLocal_77, 0, 0);
										iLocal_50 = 0;
									}
								}
								break;
							
							case 3:
								if (iLocal_301 == 1)
								{
									if (func_4())
									{
										if (func_3(uLocal_75))
										{
											PED::SET_PED_RESET_FLAG(uLocal_75, 310, 1);
										}
										func_114(1);
									}
								}
								else if (func_4())
								{
									if (func_3(uLocal_75))
									{
										PED::SET_PED_RESET_FLAG(uLocal_75, 310, 1);
									}
									func_114(1);
								}
								break;
						}
					}
					else
					{
						if (!PED::IS_PED_INJURED(uLocal_76))
						{
							if (PED::IS_PED_IN_VEHICLE(uLocal_76, iLocal_77, 0))
							{
								AI::TASK_VEHICLE_MISSION_PED_TARGET(uLocal_76, iLocal_77, PLAYER::PLAYER_PED_ID(), 8, 50f, iLocal_300, 10f, 10f, 0);
								PED::SET_PED_KEEP_TASK(uLocal_76, 1);
								STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(ENTITY::GET_ENTITY_MODEL(uLocal_76));
							}
							else
							{
								AI::TASK_SMART_FLEE_PED(uLocal_76, PLAYER::PLAYER_PED_ID(), 150f, -1, 0, 0);
								PED::SET_PED_KEEP_TASK(uLocal_76, 1);
								STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(ENTITY::GET_ENTITY_MODEL(uLocal_76));
							}
						}
						SYSTEM::WAIT(0);
						func_231();
					}
				}
				else
				{
					if (iLocal_49 == 1)
					{
						if (func_162(iLocal_77))
						{
							VEHICLE::DELETE_VEHICLE(&iLocal_77);
						}
						if (!PED::IS_PED_INJURED(uLocal_76))
						{
							PED::DELETE_PED(&uLocal_76);
						}
					}
					if (!PED::IS_PED_INJURED(uLocal_75))
					{
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_75, sLocal_83, "agitated_idle_a", 3))
						{
							ENTITY::STOP_ENTITY_ANIM(uLocal_75, "waiting", sLocal_83, -2f);
						}
						func_1(uLocal_75, "GENERIC_CURSE_HIGH", 24);
						AI::OPEN_SEQUENCE_TASK(&uLocal_78);
						AI::TASK_GO_STRAIGHT_TO_COORD(0, vLocal_102, 1f, 20000, 1193033728, 1056964608);
						AI::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_STAND_MOBILE", 0, 0);
						AI::CLOSE_SEQUENCE_TASK(uLocal_78);
						AI::TASK_PERFORM_SEQUENCE(uLocal_75, uLocal_78);
						AI::CLEAR_SEQUENCE_TASK(&uLocal_78);
					}
					func_231();
				}
			}
			else
			{
				if (!PED::IS_PED_INJURED(uLocal_76))
				{
					AI::TASK_SMART_FLEE_PED(uLocal_76, PLAYER::PLAYER_PED_ID(), 150f, -1, 0, 0);
					PED::SET_PED_KEEP_TASK(uLocal_76, 1);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_77))
				{
					VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iLocal_77, 50f);
				}
				func_231();
			}
		}
	}
}

void func_1(var uParam0, char* sParam1, int iParam2)
{
	AUDIO::_PLAY_AMBIENT_SPEECH1(uParam0, sParam1, func_2(iParam2), 1);
}

int func_2(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			return "SPEECH_PARAMS_STANDARD";
		
		case 1:
			return "SPEECH_PARAMS_ALLOW_REPEAT";
		
		case 2:
			return "SPEECH_PARAMS_BEAT";
		
		case 3:
			return "SPEECH_PARAMS_FORCE";
		
		case 4:
			return "SPEECH_PARAMS_FORCE_FRONTEND";
		
		case 5:
			return "SPEECH_PARAMS_FORCE_NO_REPEAT_FRONTEND";
		
		case 6:
			return "SPEECH_PARAMS_FORCE_NORMAL";
		
		case 7:
			return "SPEECH_PARAMS_FORCE_NORMAL_CLEAR";
		
		case 8:
			return "SPEECH_PARAMS_FORCE_NORMAL_CRITICAL";
		
		case 9:
			return "SPEECH_PARAMS_FORCE_SHOUTED";
		
		case 10:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR";
		
		case 11:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL";
		
		case 12:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY";
		
		case 13:
			return "SPEECH_PARAMS_MEGAPHONE";
		
		case 14:
			return "SPEECH_PARAMS_HELI";
		
		case 15:
			return "SPEECH_PARAMS_FORCE_MEGAPHONE";
		
		case 16:
			return "SPEECH_PARAMS_FORCE_HELI";
		
		case 17:
			return "SPEECH_PARAMS_INTERRUPT";
		
		case 18:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED";
		
		case 19:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CLEAR";
		
		case 20:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CRITICAL";
		
		case 21:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE";
		
		case 22:
			return "SPEECH_PARAMS_INTERRUPT_FRONTEND";
		
		case 23:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE_FRONTEND";
		
		case 24:
			return "SPEECH_PARAMS_ADD_BLIP";
		
		case 25:
			return "SPEECH_PARAMS_ADD_BLIP_ALLOW_REPEAT";
		
		case 26:
			return "SPEECH_PARAMS_ADD_BLIP_FORCE";
		
		case 27:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED";
		
		case 28:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED_FORCE";
		
		case 29:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT";
		
		case 30:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT_FORCE";
		
		case 31:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED";
		
		case 32:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CLEAR";
		
		case 33:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CRITICAL";
		
		case 34:
			return "SPEECH_PARAMS_SHOUTED";
		
		case 35:
			return "SPEECH_PARAMS_SHOUTED_CLEAR";
		
		case 36:
			return "SPEECH_PARAMS_SHOUTED_CRITICAL";
		
		default:
	}
	iVar0 = 0;
	return iVar0;
}

int func_3(var uParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_4()
{
	vector3 vVar0;
	char* sVar3;
	vector3 vVar4;
	float fVar7;
	
	sVar3 = "chassis";
	func_56();
	if (((!PED::IS_PED_INJURED(uLocal_75) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) && func_162(iLocal_77)) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_306))
	{
		switch (iLocal_51)
		{
			case 0:
				if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
				{
					if (func_44(1, 0, 1))
					{
						if (!GAMEPLAY::IS_BIT_SET(Global_2383, 11))
						{
							if (!PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
							{
								func_33(1, 1, 1, 0, 0);
								if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
								{
									UI::CLEAR_HELP(1);
									while (!func_31(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), fLocal_57, 1, 1056964608, 0, 1, 0))
									{
										UI::HIDE_HUD_AND_RADAR_THIS_FRAME();
										SYSTEM::WAIT(0);
									}
									func_31(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), fLocal_57, 0, 1056964608, 0, 1, 0);
								}
								UI::HIDE_HUD_AND_RADAR_THIS_FRAME();
								if (!PED::IS_PED_INJURED(uLocal_75))
								{
									PED::SET_PED_CAN_RAGDOLL(uLocal_75, 0);
								}
								func_29();
								func_23(0);
								UI::HIDE_HUD_AND_RADAR_THIS_FRAME();
								iLocal_51 = 1;
							}
						}
					}
				}
				break;
			
			case 1:
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
				VEHICLE::SET_VEHICLE_DOOR_CONTROL(iLocal_77, 0, 0, 0f);
				VEHICLE::SET_VEHICLE_DOOR_LATCHED(iLocal_77, 0, 1, 1, 1);
				UI::HIDE_HUD_AND_RADAR_THIS_FRAME();
				if (iLocal_301 == 1)
				{
					if (func_162(iLocal_77))
					{
						if (func_43(ENTITY::GET_ENTITY_HEADING(iLocal_77), 336f, 90f))
						{
							vLocal_90 = { -2254.3f, 4273.361f, 44.9697f };
							fLocal_105 = 336.6557f;
							vLocal_87 = { -2252.683f, 4274.16f, 45.0612f };
							vLocal_93 = { -2257.825f, 4269.189f, 44.6334f };
							fLocal_106 = 272.8688f;
							vLocal_113 = { -2254.588f, 4277.307f, 45.6133f };
							vLocal_116 = { 6.6248f, 0.0369f, 179.5595f };
						}
						else
						{
							vLocal_90 = { -2254.223f, 4272.33f, 44.9193f };
							fLocal_105 = 148.0287f;
							vLocal_93 = { -2255.733f, 4271.32f, 44.8166f };
							fLocal_106 = 179.4774f;
							vLocal_87 = { -2257.088f, 4268.938f, 44.6456f };
							vLocal_113 = { -2255.775f, 4274.144f, 46.0666f };
							vLocal_116 = { 2.8781f, 0.3464f, -146.6097f };
						}
					}
					vVar4 = { -2269.34f, 4279.89f, 45.47f };
					fVar7 = 53.23f;
					fLocal_112 = 50f;
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), vLocal_87, 1, 0, 0, 1);
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
					ENTITY::SET_ENTITY_COORDS(uLocal_75, vLocal_93, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(iLocal_77, fLocal_105);
					ENTITY::SET_ENTITY_COORDS(iLocal_77, vLocal_90, 1, 0, 0, 1);
				}
				else
				{
					if (!func_43(ENTITY::GET_ENTITY_HEADING(iLocal_77), 64.6764f, 90f))
					{
						vLocal_113 = { -478.7095f, -2163.598f, 10.3091f };
						vLocal_116 = { -7.4391f, 0.0006f, 35.6865f };
						vLocal_90 = { -484.9581f, -2155.266f, 8.248f };
						fLocal_105 = 243.308f;
						fLocal_112 = 22f;
					}
					else
					{
						vLocal_113 = { -488.0143f, -2149.419f, 9.9817f };
						vLocal_116 = { -11.7475f, 0.0006f, -145.0045f };
						vLocal_90 = { -484.3195f, -2154.188f, 8.2182f };
						fLocal_105 = 64.6764f;
						fLocal_112 = 36.9289f;
					}
					vVar4 = { -486.92f, -2169.01f, 8.89f };
					fVar7 = 63.1f;
					ENTITY::SET_ENTITY_COORDS(iLocal_77, vLocal_90, 1, 0, 0, 1);
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
					ENTITY::SET_ENTITY_HEADING(iLocal_77, fLocal_105);
				}
				PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
				if (func_162(iLocal_77))
				{
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_77, 1084227584);
					if (ENTITY::DOES_ENTITY_EXIST(uLocal_76))
					{
						if (PED::IS_PED_IN_VEHICLE(uLocal_76, iLocal_77, 0))
						{
							PED::DELETE_PED(&uLocal_76);
						}
					}
				}
				vLocal_310 = { 0f, 0f, 0f };
				vLocal_313 = { 0f, 0f, 0f };
				uLocal_302 = PED::CREATE_SYNCHRONIZED_SCENE(vLocal_310, vLocal_313, 2);
				PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(uLocal_302, iLocal_77, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_77, sVar3));
				PED::SET_SYNCHRONIZED_SCENE_ORIGIN(uLocal_302, vLocal_310, vLocal_313, 2);
				AI::TASK_SYNCHRONIZED_SCENE(uLocal_75, uLocal_302, sLocal_306, sLocal_308, 1000f, -2f, 0, 0, 1148846080, 0);
				AI::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), uLocal_302, sLocal_306, sLocal_309, 1000f, -2f, 1024, 0, 1148846080, 0);
				uLocal_79 = CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_ANIMATED_CAMERA", vLocal_113, vLocal_116, fLocal_112, 0, 2);
				CAM::PLAY_SYNCHRONIZED_CAM_ANIM(uLocal_79, uLocal_302, "car_returned_cam", sLocal_306);
				ENTITY::PLAY_ENTITY_ANIM(iLocal_77, sLocal_307, sLocal_306, 1000f, 0, 0, 0, 0, 262144);
				vLocal_310 = { ENTITY::GET_ENTITY_COORDS(iLocal_77, 1) };
				vLocal_313 = { ENTITY::GET_ENTITY_ROTATION(iLocal_77, 2) };
				if (func_162(iLocal_80))
				{
					if (func_22(iLocal_80, vLocal_90, 1) <= 11f)
					{
						ENTITY::SET_ENTITY_COORDS(iLocal_80, vVar4, 1, 0, 0, 1);
						ENTITY::SET_ENTITY_HEADING(iLocal_80, fVar7);
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_80, 1084227584);
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_80, 1, 0);
					}
				}
				GAMEPLAY::CLEAR_AREA(vLocal_90, 10f, 1, 0, 0, 0);
				SYSTEM::SETTIMERA(0);
				if (iLocal_301 == 2)
				{
					VEHICLE::REQUEST_VEHICLE_ASSET(joaat("rocoto"), 15);
				}
				else
				{
					VEHICLE::REQUEST_VEHICLE_ASSET(joaat("peyote"), 15);
				}
				FIRE::STOP_FIRE_IN_RANGE(vLocal_90, 15f);
				CAM::SET_CAM_ACTIVE(uLocal_79, 1);
				CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
				iLocal_51 = 3;
				STREAMING::_0xA76359FC80B2438E(1f);
				break;
			
			case 3:
				UI::HIDE_HUD_AND_RADAR_THIS_FRAME();
				if (func_19())
				{
					iLocal_51 = 4;
				}
				if (iLocal_301 == 1)
				{
					if (SYSTEM::TIMERA() > 1500 && !bLocal_342)
					{
						if (func_45(&Local_122, cLocal_294, sLocal_121, 4, 0, 0, 0))
						{
							iLocal_51 = 4;
						}
					}
				}
				else if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_302) && !bLocal_342)
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_302) >= 0.2f)
					{
						if (func_45(&Local_122, cLocal_294, sLocal_121, 4, 0, 0, 0))
						{
							iLocal_62 = 0;
							iLocal_51 = 4;
						}
					}
				}
				STREAMING::_0xA76359FC80B2438E(1f);
				break;
			
			case 4:
				UI::HIDE_HUD_AND_RADAR_THIS_FRAME();
				if (iLocal_301 == 2)
				{
					if (!func_18())
					{
						if (iLocal_62 == 0)
						{
							if (func_45(&Local_122, cLocal_294, "RECT2_REWARD", 4, 0, 0, 0))
							{
								iLocal_62 = 1;
							}
						}
					}
				}
				STREAMING::_0xA76359FC80B2438E(1f);
				if (iLocal_301 == 1)
				{
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_302))
					{
						if (iLocal_316 == 0)
						{
							if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_302) >= 0.83f)
							{
								AI::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
								AI::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), sLocal_306, sLocal_309, 1000f, -2f, -1, 1048576, PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_302), 0, 0, 0);
								PED::_0x2208438012482A1A(PLAYER::PLAYER_PED_ID(), 1, 0);
								iLocal_316 = 1;
							}
						}
						if (!PED::IS_PED_INJURED(uLocal_75))
						{
							if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_302) >= 0.83f)
							{
								if (ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_75, sLocal_306, sLocal_308, 2))
								{
									ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(uLocal_75, -1000f, 0);
									if (!PED::IS_PED_IN_ANY_VEHICLE(uLocal_75, 0))
									{
										if (func_162(iLocal_77))
										{
											PED::SET_PED_INTO_VEHICLE(uLocal_75, iLocal_77, -1);
											PED::SET_PED_RESET_FLAG(uLocal_75, 310, 1);
										}
									}
									PED::_0x2208438012482A1A(uLocal_75, 1, 0);
								}
								else
								{
									PED::SET_PED_RESET_FLAG(uLocal_75, 310, 1);
								}
							}
						}
					}
				}
				else if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_302))
				{
					if (iLocal_316 == 0)
					{
						if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_302) >= 0.86f)
						{
							AI::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
							AI::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), sLocal_306, sLocal_309, 1000f, -2f, -1, 1048576, PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_302), 0, 0, 0);
							PED::_0x2208438012482A1A(PLAYER::PLAYER_PED_ID(), 1, 0);
							iLocal_316 = 1;
						}
					}
					if (!PED::IS_PED_INJURED(uLocal_75))
					{
						if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_302) > 0.847f)
						{
							if (ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_75, sLocal_306, sLocal_308, 2))
							{
								ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(uLocal_75, -1000f, 0);
								if (!PED::IS_PED_IN_ANY_VEHICLE(uLocal_75, 0))
								{
									if (func_162(iLocal_77))
									{
										PED::SET_PED_INTO_VEHICLE(uLocal_75, iLocal_77, -1);
										PED::SET_PED_RESET_FLAG(uLocal_75, 310, 1);
									}
								}
								PED::_0x2208438012482A1A(uLocal_75, 1, 0);
							}
							else
							{
								PED::SET_PED_RESET_FLAG(uLocal_75, 310, 1);
							}
						}
					}
				}
				if (((PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_302) && PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_302) >= 0.99f) || !PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_302)) || func_19())
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_77, 0) && ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_77, sLocal_306, sLocal_307, 3))
					{
						ENTITY::SET_ENTITY_ANIM_CURRENT_TIME(iLocal_77, sLocal_306, sLocal_307, 1f);
					}
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_302))
					{
						PED::SET_SYNCHRONIZED_SCENE_PHASE(uLocal_302, 1f);
					}
					if (bLocal_342)
					{
						vVar0 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(sLocal_306, sLocal_309, vLocal_310, vLocal_313, 1f, 2) };
						GAMEPLAY::GET_GROUND_Z_FOR_3D_COORD(vVar0, &(vVar0.f_2), 0, 0);
						ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), vVar0, 1, 0, 0, 1);
						vVar0 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION(sLocal_306, sLocal_309, vLocal_310, vLocal_313, 1f, 2) };
						ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), vVar0.z);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
					}
					PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -1871534317, 1, 0, 1);
					if (!PED::IS_PED_IN_ANY_VEHICLE(uLocal_75, 0))
					{
						if (func_162(iLocal_77))
						{
							PED::SET_PED_INTO_VEHICLE(uLocal_75, iLocal_77, -1);
							PED::SET_PED_RESET_FLAG(uLocal_75, 310, 1);
						}
					}
					if (!PED::IS_PED_INJURED(uLocal_75))
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(uLocal_75, 0))
						{
							if (func_162(iLocal_77))
							{
								VEHICLE::SET_VEHICLE_DOOR_CONTROL(iLocal_77, 0, 0, 0f);
								VEHICLE::SET_VEHICLE_DOOR_LATCHED(iLocal_77, 0, 1, 1, 1);
								iLocal_305 = GAMEPLAY::GET_GAME_TIMER();
								iLocal_51 = 5;
							}
						}
					}
				}
				break;
			
			case 5:
				UI::HIDE_HUD_AND_RADAR_THIS_FRAME();
				if ((GAMEPLAY::GET_GAME_TIMER() - iLocal_305) > 100)
				{
					if (func_3(uLocal_75) && func_162(iLocal_77))
					{
						AI::OPEN_SEQUENCE_TASK(&uLocal_78);
						AI::TASK_VEHICLE_TEMP_ACTION(0, iLocal_77, 9, 1000);
						AI::TASK_VEHICLE_DRIVE_WANDER(0, iLocal_77, 25f, iLocal_299);
						AI::CLOSE_SEQUENCE_TASK(uLocal_78);
						AI::TASK_PERFORM_SEQUENCE(uLocal_75, uLocal_78);
						AI::CLEAR_SEQUENCE_TASK(&uLocal_78);
						PED::SET_PED_RESET_FLAG(uLocal_75, 310, 1);
					}
					func_33(0, 1, 1, 0, 0);
					if (bLocal_342)
					{
						if (CAM::DOES_CAM_EXIST(uLocal_79))
						{
							CAM::SET_CAM_ACTIVE(uLocal_79, 0);
							CAM::DESTROY_CAM(uLocal_79, 0);
						}
						CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
						SYSTEM::WAIT(750);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
						func_17(500, 1);
					}
					else
					{
						CAM::_RENDER_FIRST_PERSON_CAM(0, 0, 3, 0);
						CAM::SET_CAM_ACTIVE(uLocal_79, 0);
					}
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
					func_16(&iLocal_77);
					func_5(func_10(), 4, 5);
					return 1;
				}
				else if (func_3(uLocal_75))
				{
					PED::SET_PED_RESET_FLAG(uLocal_75, 310, 1);
				}
				break;
			}
	}
	return 0;
}

void func_5(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
			Global_106070.f_2355.f_539.f_2227[iParam1 /*4*/][iParam0] = (Global_106070.f_2355.f_539.f_2227[iParam1 /*4*/][iParam0] + iParam2);
			break;
		
		case 3:
			iVar1 = 9954;
			switch (iParam1)
			{
				case 1:
					iVar1 = 72;
					break;
				
				case 3:
					iVar1 = 74;
					break;
				
				case 2:
					iVar1 = 73;
					break;
				
				case 4:
					iVar1 = 75;
					break;
				
				case 5:
					iVar1 = 76;
					break;
				
				case 6:
					iVar1 = 77;
					break;
				
				case 7:
					iVar1 = 78;
					break;
			}
			if (iVar1 != 9954)
			{
				iVar0 = func_9(iVar1, -1, 0);
				iVar0 = (iVar0 + iParam2);
				if (iVar0 > 100)
				{
					iVar0 = 100;
				}
				func_6(iVar1, iVar0, -1, 1, 0);
			}
			break;
	}
}

void func_6(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2535519[iParam0 /*3*/][func_7(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
}

int func_7(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_8();
		if (iVar1 > -1)
		{
			Global_2535232 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2535232 = 1;
		}
	}
	return iVar0;
}

int func_8()
{
	return Global_1312736;
}

int func_9(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2535519[iParam0 /*3*/][func_7(iParam1)];
	if (STATS::STAT_GET_INT(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_10()
{
	func_11();
	return Global_106070.f_2355.f_539.f_4301;
}

void func_11()
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_15(Global_106070.f_2355.f_539.f_4301) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_14(PLAYER::PLAYER_PED_ID());
			if (func_13(iVar0) && (!func_12(14) || Global_105021))
			{
				if (Global_106070.f_2355.f_539.f_4301 != iVar0 && func_13(Global_106070.f_2355.f_539.f_4301))
				{
					Global_106070.f_2355.f_539.f_4302 = Global_106070.f_2355.f_539.f_4301;
				}
				Global_106070.f_2355.f_539.f_4303 = iVar0;
				Global_106070.f_2355.f_539.f_4301 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_106070.f_2355.f_539.f_4301 != 145)
			{
				Global_106070.f_2355.f_539.f_4303 = Global_106070.f_2355.f_539.f_4301;
			}
			return;
		}
	}
	Global_106070.f_2355.f_539.f_4301 = 145;
}

bool func_12(int iParam0)
{
	return Global_36117 == iParam0;
}

bool func_13(int iParam0)
{
	return iParam0 < 3;
}

int func_14(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(uParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_15(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_15(int iParam0)
{
	if (func_13(iParam0))
	{
		return Global_106070.f_28022[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_16(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		ENTITY::IS_ENTITY_DEAD(*iParam0, 0);
		if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(*iParam0) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*iParam0, 1))
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(iParam0);
		}
	}
}

void func_17(int iParam0, bool bParam1)
{
	if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
	{
		if (!CAM::IS_SCREEN_FADING_IN())
		{
			CAM::DO_SCREEN_FADE_IN(iParam0);
		}
	}
	if (bParam1)
	{
		while (!CAM::IS_SCREEN_FADED_IN())
		{
			SYSTEM::WAIT(0);
		}
	}
}

int func_18()
{
	if (Global_15822 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

int func_19()
{
	int iVar0;
	
	iVar0 = joaat("peyote");
	if (iLocal_301 == 2)
	{
		iVar0 = joaat("rocoto");
	}
	if (func_20(1000))
	{
		if (VEHICLE::HAS_VEHICLE_ASSET_LOADED(iVar0))
		{
			CAM::SET_CAM_ACTIVE(uLocal_79, 0);
			CAM::DO_SCREEN_FADE_OUT(500);
			while (CAM::IS_SCREEN_FADING_OUT())
			{
				UI::HIDE_HUD_AND_RADAR_THIS_FRAME();
				SYSTEM::WAIT(0);
			}
			bLocal_342 = true;
			return 1;
		}
	}
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		if (VEHICLE::HAS_VEHICLE_ASSET_LOADED(iVar0))
		{
			bLocal_342 = true;
			return 1;
		}
	}
	return 0;
}

int func_20(int iParam0)
{
	if (CAM::IS_SCREEN_FADED_IN())
	{
		if ((GAMEPLAY::GET_GAME_TIMER() - Global_28) > iParam0)
		{
			Global_27 = GAMEPLAY::GET_GAME_TIMER();
		}
		Global_28 = GAMEPLAY::GET_GAME_TIMER();
		if ((GAMEPLAY::GET_GAME_TIMER() - Global_27) > iParam0)
		{
			if (func_21())
			{
				Global_27 = GAMEPLAY::GET_GAME_TIMER();
				return 1;
			}
		}
	}
	return 0;
}

int func_21()
{
	if (UI::IS_PAUSE_MENU_ACTIVE())
	{
		return 0;
	}
	if (CONTROLS::IS_CONTROL_JUST_PRESSED(0, 18) || CONTROLS::IS_CONTROL_JUST_PRESSED(2, 18))
	{
		return 1;
	}
	return 0;
}

float func_22(int iParam0, vector3 vParam1, int iParam4)
{
	vector3 vVar0;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
	}
	else
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, 0) };
	}
	return GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(vVar0, vParam1, iParam4);
}

void func_23(int iParam0)
{
	if (func_28())
	{
		return;
	}
	if (!Global_14513.f_1 == 1)
	{
		if (func_27(0))
		{
			func_24(iParam0);
		}
		GAMEPLAY::SET_BIT(&Global_2384, 2);
	}
}

void func_24(int iParam0)
{
	if (func_28())
	{
		return;
	}
	if (Global_14681)
	{
		func_26(0, 0);
	}
	if (Global_14513.f_1 == 10 || Global_14513.f_1 == 9)
	{
		GAMEPLAY::SET_BIT(&Global_2384, 16);
	}
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(0);
	}
	Global_15822 = 5;
	if (iParam0 == 1)
	{
		GAMEPLAY::SET_BIT(&Global_2383, 30);
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&Global_2383, 30);
	}
	if (!func_25())
	{
		Global_14513.f_1 = 3;
	}
}

int func_25()
{
	if (Global_14513.f_1 == 1 || Global_14513.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_26(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_27(0))
		{
			Global_14681 = 1;
			if (bParam1)
			{
				MOBILE::GET_MOBILE_PHONE_POSITION(&Global_14450);
			}
			Global_14441 = { Global_14459[Global_14458 /*3*/] };
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_14441);
		}
	}
	else if (Global_14681 == 1)
	{
		Global_14681 = 0;
		Global_14441 = { Global_14466[Global_14458 /*3*/] };
		if (bParam1)
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_14450);
		}
		else
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_14441);
		}
	}
}

int func_27(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14513.f_1 > 3)
		{
			if (GAMEPLAY::IS_BIT_SET(Global_2383, 14))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14513.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

bool func_28()
{
	return GAMEPLAY::IS_BIT_SET(Global_1678593, 19);
}

void func_29()
{
	Global_14688 = 0;
	func_30();
}

void func_30()
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_16833 = 0;
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(0);
		Global_15822 = 6;
	}
}

int func_31(var uParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
{
	CONTROLS::DISABLE_CONTROL_ACTION(0, 71, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 72, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 76, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 73, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 59, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 60, 1);
	if (bParam5)
	{
		CONTROLS::DISABLE_CONTROL_ACTION(0, 75, 1);
	}
	CONTROLS::DISABLE_CONTROL_ACTION(0, 80, 1);
	if (!bParam6)
	{
		CONTROLS::DISABLE_CONTROL_ACTION(0, 69, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 70, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 68, 1);
	}
	CONTROLS::DISABLE_CONTROL_ACTION(0, 74, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 86, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 81, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 82, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 138, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 136, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 114, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 107, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 110, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 89, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 89, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 87, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 88, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 113, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 115, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 116, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 117, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 118, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 119, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 131, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 132, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 123, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 126, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 129, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 130, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 133, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 134, 1);
	CAM::_0x17FCA7199A530203();
	func_32(uParam0);
	if ((GAMEPLAY::GET_GAME_TIMER() - Global_29) > 500)
	{
		VEHICLE::BRING_VEHICLE_TO_HALT(uParam0, fParam1, iParam2, iParam4);
	}
	Global_29 = GAMEPLAY::GET_GAME_TIMER();
	if (!ENTITY::IS_ENTITY_DEAD(uParam0, 0))
	{
		if (GAMEPLAY::ABSF(ENTITY::GET_ENTITY_SPEED(uParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_32(var uParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(uParam0, 0))
	{
		if (unk_0x36D782F68B309BDA(uParam0))
		{
			if (unk_0x3D34E80EED4AE3BE(uParam0))
			{
				unk_0x81E1552E35DC3839(uParam0, 0);
			}
		}
	}
}

void func_33(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam0)
	{
		PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID());
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 1);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 1);
		func_40(1);
		UI::_0xA8FDB297A8D25FBA();
		UI::_0xFDB423997FA30340();
		if (Global_14513.f_1 > 3)
		{
			if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
			{
				AUDIO::STOP_SCRIPTED_CONVERSATION(0);
			}
			if (!func_25())
			{
				Global_14513.f_1 = 3;
			}
			Global_15822 = 5;
		}
		func_39(1, iParam3, iParam2, 0);
		Global_56187 = 1;
		Global_68497 = 1;
		Global_71203 = 1;
	}
	else
	{
		func_40(0);
		UI::_0xE1CD1E48E025E661();
		Global_56187 = 0;
		if (bParam1)
		{
			GRAPHICS::_0x03FC694AE06C5A20();
		}
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 0);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 0);
		func_39(0, iParam3, iParam2, 0);
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if ((((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_37(PLAYER::PLAYER_ID())) && !func_35(PLAYER::PLAYER_ID(), 0)) && !func_34()) && !bParam4)
			{
				ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 0);
			}
		}
		else if ((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_37(PLAYER::PLAYER_ID())) && !bParam4)
		{
			ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 0);
		}
		Global_71203 = 0;
	}
}

bool func_34()
{
	return GAMEPLAY::IS_BIT_SET(Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_39.f_18, 14);
}

bool func_35(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_36(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1589747[iParam0 /*790*/].f_211 == 8;
	}
	if (iParam1 == 1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			bVar0 = PLAYER::GET_PLAYER_TEAM(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_36(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_8();
	}
	if (Global_1312837[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312730[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_37(int iParam0)
{
	if (func_35(iParam0, 0))
	{
		return 1;
	}
	if (func_38())
	{
		if (iParam0 == PLAYER::PLAYER_ID())
		{
			return 1;
		}
	}
	if (GAMEPLAY::IS_BIT_SET(Global_2423801[iParam0 /*413*/].f_195, 2))
	{
		return 1;
	}
	return 0;
}

bool func_38()
{
	return GAMEPLAY::IS_BIT_SET(Global_2359302, 3);
}

int func_39(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (GAMEPLAY::IS_PC_VERSION())
	{
		if (CUTSCENE::_0xA0FE76168A189DDB() != iParam0 && uParam2)
		{
			CUTSCENE::_0x20746F7B1032A3C7(iParam0, uParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_40(int iParam0)
{
	if (iParam0 == 1)
	{
		GAMEPLAY::SET_BIT(&Global_2383, 13);
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&Global_2383, 13);
	}
}

void func_41(vector3 vParam0, float fParam3, float fParam4)
{
	bool bVar0;
	vector3 vVar1;
	float fVar4;
	
	bVar0 = false;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		vVar1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) - vParam0 };
		fVar4 = GAMEPLAY::GET_HEADING_FROM_VECTOR_2D(vVar1.x, vVar1.y);
		if (func_42(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), fVar4, 15f))
		{
			bVar0 = true;
		}
		vVar1 = { vParam0 - ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
		fVar4 = GAMEPLAY::GET_HEADING_FROM_VECTOR_2D(vVar1.x, vVar1.y);
		if (func_42(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), fVar4, 15f))
		{
			bVar0 = true;
		}
	}
	if (bVar0)
	{
		if (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) > 30f)
		{
			*fParam3 = (6f * 4f);
		}
		else if (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) > 20f)
		{
			*fParam3 = (6f * 3f);
		}
		else if (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) > 10f)
		{
			*fParam3 = (6f * 2f);
		}
		else
		{
			*fParam3 = 6f;
		}
		*fParam4 = ((*fParam3 / 1.33f) - 1f);
	}
	else
	{
		*fParam3 = 6f;
		*fParam4 = ((*fParam3 / 1.33f) - 1f);
	}
}

int func_42(var uParam0, float fParam1, float fParam2)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0, 0))
	{
		fVar0 = ENTITY::GET_ENTITY_HEADING(uParam0);
		fVar2 = (fParam1 - fParam2);
		if (fVar2 < 0f)
		{
			fVar2 = (fVar2 + 360f);
		}
		fVar1 = (fParam1 + fParam2);
		if (fVar1 >= 360f)
		{
			fVar1 = (fVar1 - 360f);
		}
		if (fVar1 > fVar2)
		{
			if (fVar0 < fVar1 && fVar0 > fVar2)
			{
				return 1;
			}
		}
		else if (fVar0 < fVar1 || fVar0 > fVar2)
		{
			return 1;
		}
	}
	return 0;
}

int func_43(float fParam0, float fParam1, float fParam2)
{
	float fVar0;
	float fVar1;
	
	fVar1 = (fParam1 - fParam2);
	if (fVar1 < 0f)
	{
		fVar1 = (fVar1 + 360f);
	}
	fVar0 = (fParam1 + fParam2);
	if (fVar0 >= 360f)
	{
		fVar0 = (fVar0 - 360f);
	}
	if (fVar0 > fVar1)
	{
		if (fParam0 < fVar0 && fParam0 > fVar1)
		{
			return 1;
		}
	}
	else if (fParam0 < fVar0 || fParam0 > fVar1)
	{
		return 1;
	}
	return 0;
}

int func_44(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (GAMEPLAY::IS_MINIGAME_IN_PROGRESS())
	{
		return 0;
	}
	if (bParam0)
	{
		if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
		{
			return 0;
		}
	}
	iVar0 = 0;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
		{
			return 0;
		}
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
		if (bParam0)
		{
			if (ENTITY::IS_ENTITY_DEAD(iVar0, 0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!ENTITY::IS_ENTITY_DEAD(iVar0, 0))
			{
				if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, 0) != PLAYER::PLAYER_PED_ID())
				{
					return 0;
				}
			}
		}
		if (!ENTITY::IS_ENTITY_DEAD(iVar0, 0))
		{
			if (ENTITY::GET_ENTITY_UPRIGHT_VALUE(iVar0) < 0.95f || ENTITY::GET_ENTITY_UPRIGHT_VALUE(iVar0) > 1.011f)
			{
				return 0;
			}
		}
	}
	else if (bParam1)
	{
		return 0;
	}
	if (!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (!PLAYER::CAN_PLAYER_START_MISSION(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	return 1;
}

bool func_45(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_54(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_15829 = 0;
	Global_15831 = 0;
	Global_15836 = 0;
	Global_16813 = 0;
	Global_16815 = 0;
	Global_16819 = 0;
	Global_2621441 = 0;
	return func_46(sParam2, iParam3, 0);
}

int func_46(char* sParam0, int iParam1, bool bParam2)
{
	Global_15823 = 0;
	if (Global_15822 == 0 || Global_15824 == 2)
	{
		if (Global_15822 != 0)
		{
			if (iParam1 > Global_15824)
			{
				if (Global_15829 == 0)
				{
					AUDIO::STOP_SCRIPTED_CONVERSATION(0);
					Global_14513.f_1 = 3;
					Global_15822 = 0;
					Global_15823 = 1;
					Global_15875 = 0;
					Global_15818 = 0;
					Global_15819 = 0;
					Global_15833 = 0;
					Global_15832 = 0;
					Global_14512 = 0;
				}
				else
				{
					func_53();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
		{
			return 0;
		}
		if (func_52(8, -1))
		{
			return 0;
		}
		Global_15898 = { Global_15892 };
		func_51();
		Global_15111 = { Global_15276 };
		Global_15828 = Global_15829;
		Global_15835 = Global_15836;
		Global_2621442 = Global_2621441;
		Global_15837 = { Global_15853 };
		Global_15830 = Global_15831;
		Global_16812 = Global_16813;
		Global_16820 = { Global_16826 };
		Global_16814 = Global_16815;
		Global_16816 = Global_16817;
		Global_16818 = Global_16819;
		Global_15441.f_370 = Global_16811;
		Global_15441.f_368 = Global_16809;
		Global_15441.f_369 = Global_16810;
		Global_15818 = Global_15819;
		if (Global_15828)
		{
			GAMEPLAY::CLEAR_BIT(&Global_2383, 20);
			GAMEPLAY::CLEAR_BIT(&Global_2384, 17);
			GAMEPLAY::CLEAR_BIT(&Global_2385, 0);
			if (bParam2)
			{
				func_50();
				if (Global_3188[Global_14513 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14513.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14479 == 1)
			{
				return 0;
			}
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (func_49())
				{
					return 0;
				}
				if (AI::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (PED::IS_PED_IN_PARACHUTE_FREE_FALL(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (WEAPON::GET_IS_PED_GADGET_EQUIPPED(PLAYER::PLAYER_PED_ID(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_71205)
				{
					if (ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
					{
						return 0;
					}
					if (PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()))
					{
						return 0;
					}
					if (PED::IS_PED_PLANTING_BOMB(PLAYER::PLAYER_PED_ID()))
					{
						return 0;
					}
					if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID()))
					{
						return 0;
					}
				}
			}
			if (func_25())
			{
				return 0;
			}
			else
			{
				switch (Global_14513.f_1)
				{
					case 7:
						return 0;
						break;
					
					case 8:
						return 0;
						break;
					
					case 9:
						break;
					
					case 10:
						break;
					
					default:
						break;
				}
				if (GAMEPLAY::IS_BIT_SET(Global_2383, 9))
				{
					return 0;
				}
			}
			func_48();
			Global_15832 = bParam2;
		}
		Global_15824 = iParam1;
		StringCopy(&Global_15441, sParam0, 24);
		Global_14688 = 0;
		func_47();
		return 1;
	}
	if (Global_15822 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_15824 || iParam1 == Global_15824)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_53();
	}
	return 0;
}

void func_47()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14690[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	AUDIO::STOP_SCRIPTED_CONVERSATION(0);
	Global_15822 = 1;
}

void func_48()
{
	Global_15875 = Global_15874;
	Global_15869 = Global_15870;
	Global_15916 = { Global_15904 };
	Global_15922 = { Global_15910 };
	Global_15877 = Global_15876;
	Global_15946 = { Global_15928 };
	Global_15952 = { Global_15934 };
	Global_15958 = { Global_15940 };
	Global_15964 = { Global_15970 };
	Global_1698 = Global_1699;
	Global_1700 = Global_1701;
	Global_15833 = Global_15834;
	Global_15835 = Global_15836;
	Global_15837 = { Global_15853 };
	Global_15826 = Global_15827;
	Global_16838 = 0;
	Global_15871 = 0;
	Global_15872 = 0;
	GAMEPLAY::CLEAR_BIT(&Global_2384, 16);
}

int func_49()
{
	int iVar0;
	int iVar1;
	
	if (Global_71205)
	{
		iVar0 = 0;
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar1, 1);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (CAM::IS_AIM_CAM_ACTIVE() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (PED::GET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 78, 1))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_50()
{
	if (func_12(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_106070.f_28022[0 /*29*/])
			{
				Global_14513 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_106070.f_28022[1 /*29*/])
			{
				Global_14513 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_106070.f_28022[2 /*29*/])
			{
				Global_14513 = 2;
			}
			else
			{
				Global_14513 = 0;
			}
		}
	}
	else
	{
		Global_14513 = func_10();
		if (Global_14513 == 145)
		{
			Global_14513 = 3;
		}
		if (Global_71205)
		{
			Global_14513 = 3;
		}
		if (Global_14513 > 3)
		{
			Global_14513 = 3;
		}
	}
}

void func_51()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_15111[iVar0 /*10*/] = 0;
		StringCopy(&(Global_15111[iVar0 /*10*/].f_1), "", 24);
		Global_15111[iVar0 /*10*/].f_7 = 0;
		Global_15111[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_15111.f_161 = -99;
	Global_15111.f_162 = { 0f, 0f, 0f };
}

bool func_52(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1368245.f_203[iParam1];
			}
			break;
	}
	return GAMEPLAY::IS_BIT_SET(Global_1368245.f_1048, iParam0);
}

void func_53()
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_16833 = 0;
	if ((AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() || Global_14513.f_1 == 9) || Global_14512 == 1)
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(0);
		Global_15822 = 6;
		Global_14513.f_1 = 3;
		return;
	}
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(1);
		Global_15822 = 6;
		return;
	}
}

void func_54(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
{
	Global_15276 = { *uParam0 };
	Global_1699 = iParam1;
	StringCopy(&Global_15892, sParam2, 24);
	Global_16811 = uParam5;
	if (iParam3 == 0)
	{
		Global_16809 = 1;
		Global_16807 = 0;
	}
	else
	{
		Global_16809 = 0;
		Global_16807 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16810 = 1;
		Global_16808 = 0;
	}
	else
	{
		Global_16810 = 0;
		Global_16808 = 1;
	}
}

int func_55()
{
	if (PED::IS_PED_INJURED(uLocal_76))
	{
		return 1;
	}
	else if (func_162(iLocal_77))
	{
		if (!ENTITY::IS_ENTITY_AT_ENTITY(uLocal_76, iLocal_77, 10f, 10f, 10f, 0, 1, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_56()
{
	float fVar0;
	int iVar1;
	bool bVar2;
	
	if (func_162(iLocal_77))
	{
		fVar0 = VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iLocal_77);
		if (fVar0 > 0f && fVar0 < 650f)
		{
			bVar2 = true;
		}
		else if (fVar0 > 650f && fVar0 < 950f)
		{
		}
		else
		{
			iVar1 = 1;
		}
		if (iVar1 && VEHICLE::ARE_ALL_VEHICLE_WINDOWS_INTACT(iLocal_77))
		{
			sLocal_121 = sLocal_293;
		}
		else if (bVar2)
		{
			sLocal_121 = sLocal_292;
		}
		else
		{
			sLocal_121 = sLocal_291;
		}
	}
}

void func_57(var uParam0)
{
	*uParam0 = -99;
}

var func_58(var uParam0, bool bParam1, int iParam2)
{
	iParam2 = iParam2;
	return func_59(uParam0, bParam1, 145);
}

var func_59(var uParam0, bool bParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_60(uParam0, !bParam1, 0);
	if ((iParam2 != 145 && UI::DOES_BLIP_EXIST(uVar0)) && UI::DOES_TEXT_LABEL_EXIST(&(Global_106070.f_28022[iParam2 /*29*/].f_3)))
	{
		UI::SET_BLIP_NAME_FROM_TEXT_FILE(uVar0, &(Global_106070.f_28022[iParam2 /*29*/].f_3));
	}
	return uVar0;
}

int func_60(var uParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		return 0;
	}
	uVar0 = UI::ADD_BLIP_FOR_ENTITY(uParam0);
	if (ENTITY::IS_ENTITY_A_VEHICLE(uParam0))
	{
		UI::SET_BLIP_SCALE(uVar0, func_61(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
		if (!bParam2)
		{
			UI::SET_BLIP_AS_FRIENDLY(uVar0, bParam1);
		}
		else
		{
			UI::SET_BLIP_COLOUR(uVar0, 2);
		}
	}
	else if (ENTITY::IS_ENTITY_A_PED(uParam0))
	{
		UI::SET_BLIP_SCALE(uVar0, func_61(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
		UI::SET_BLIP_AS_FRIENDLY(uVar0, bParam1);
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(uParam0))
	{
		UI::SET_BLIP_SCALE(uVar0, func_61(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	}
	return uVar0;
}

float func_61(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_62(var uParam0)
{
	bool bVar0;
	struct<8> Var1;
	
	if (UI::DOES_BLIP_EXIST(*uParam0))
	{
		UI::REMOVE_BLIP(uParam0);
		bVar0 = true;
	}
	if (UI::DOES_BLIP_EXIST(uParam0->f_1))
	{
		UI::REMOVE_BLIP(&(uParam0->f_1));
		bVar0 = true;
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_7))
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_7, 0))
		{
			if (UI::DOES_PED_HAVE_AI_BLIP(uParam0->f_7))
			{
				UI::_SET_PED_AI_BLIP(uParam0->f_7, 0);
			}
		}
		bVar0 = true;
	}
	if (bVar0)
	{
		*uParam0 = { Var1 };
	}
}

int func_63(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, float fParam6, int iParam7, int iParam8, int iParam9, bool bParam10)
{
	if (iParam3 == 0)
	{
		iParam3 = PLAYER::GET_PLAYER_INDEX();
	}
	if (fParam6 < 0f)
	{
		fParam6 = 100f;
	}
	if (!PED::IS_PED_INJURED(uParam0))
	{
		if (!UI::DOES_PED_HAVE_AI_BLIP(uParam0))
		{
			if (iParam8 == -1)
			{
				UI::_SET_PED_AI_BLIP(uParam0, 1);
			}
			else
			{
				unk_0xB13DCB4C6FAAD238(uParam0, 1, iParam8);
			}
			uParam1->f_7 = uParam0;
			UI::_SET_AI_BLIP_TYPE(uParam0, iParam2);
			UI::_SET_AI_BLIP_MAX_DISTANCE(uParam0, fParam6);
			if (UI::DOES_BLIP_EXIST(*uParam1))
			{
				UI::SET_BLIP_PRIORITY(*uParam1, 7);
			}
		}
		if (!iParam9 == -1)
		{
			unk_0xFCFACD0DB9D7A57D(uParam0, iParam9);
		}
		UI::_IS_AI_BLIP_ALWAYS_SHOWN(uParam0, iParam4);
		UI::HIDE_SPECIAL_ABILITY_LOCKON_OPERATION(uParam0, iParam5);
		*uParam1 = UI::_0x7CD934010E115C2C(uParam0);
		if (!iParam9 == -1)
		{
			if (UI::DOES_BLIP_EXIST(*uParam1))
			{
				if (!iParam8 == -1)
				{
					UI::SET_BLIP_COLOUR(*uParam1, iParam8);
				}
				if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(iParam7))
				{
					UI::BEGIN_TEXT_COMMAND_SET_BLIP_NAME("STRING");
					if (bParam10)
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(iParam7);
					}
					else
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(iParam7);
					}
					UI::END_TEXT_COMMAND_SET_BLIP_NAME(*uParam1);
				}
				UI::SET_BLIP_PRIORITY(*uParam1, 7);
			}
		}
		if (!GAMEPLAY::IS_BIT_SET(uParam1->f_6, 2))
		{
			if (UI::DOES_BLIP_EXIST(*uParam1))
			{
				GAMEPLAY::SET_BIT(&(uParam1->f_6), 2);
			}
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(uParam0, 0))
		{
			uParam1->f_1 = UI::_GET_AI_BLIP(uParam0);
			if (!GAMEPLAY::IS_BIT_SET(uParam1->f_6, 3))
			{
				if (UI::DOES_BLIP_EXIST(uParam1->f_1))
				{
					if (!iParam8 == -1)
					{
						UI::SET_BLIP_COLOUR(uParam1->f_1, iParam8);
					}
					if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(iParam7))
					{
						UI::BEGIN_TEXT_COMMAND_SET_BLIP_NAME("STRING");
						if (bParam10)
						{
							UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(iParam7);
						}
						else
						{
							UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(iParam7);
						}
						UI::END_TEXT_COMMAND_SET_BLIP_NAME(uParam1->f_1);
					}
					UI::SET_BLIP_PRIORITY(uParam1->f_1, 7);
					GAMEPLAY::SET_BIT(&(uParam1->f_6), 3);
				}
			}
			else if (!UI::DOES_BLIP_EXIST(uParam1->f_1))
			{
				uParam1->f_1 = 0;
				GAMEPLAY::CLEAR_BIT(&(uParam1->f_6), 3);
			}
		}
		else if (UI::DOES_BLIP_EXIST(uParam1->f_1))
		{
			uParam1->f_1 = 0;
			GAMEPLAY::CLEAR_BIT(&(uParam1->f_6), 3);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_64(var uParam0, int iParam1, int iParam2)
{
	char* sVar0;
	
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (GAMEPLAY::IS_BIT_SET(Global_2524719.f_4577, 26))
		{
			return;
		}
	}
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(iParam2);
		GRAPHICS::ANIMPOSTFX_STOP("FocusIn");
		AUDIO::STOP_AUDIO_SCENE("HINT_CAM_SCENE");
		if (uParam0->f_11)
		{
			GRAPHICS::ANIMPOSTFX_PLAY("FocusOut", 0, 0);
			AUDIO::PLAY_SOUND_FRONTEND(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	CAM::SET_CINEMATIC_BUTTON_ACTIVE(1);
	uParam0->f_1 = 0;
	*uParam0 = 0;
	uParam0->f_2 = -1;
	uParam0->f_8 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	sVar0 = iParam1;
	if (GAMEPLAY::IS_STRING_NULL(sVar0))
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			sVar0 = "CMN_HINT";
		}
		else
		{
			sVar0 = "FM_IHELP_HNT";
		}
	}
	if (!GAMEPLAY::IS_STRING_NULL(uParam0->f_3))
	{
		if (func_65(uParam0->f_3))
		{
			UI::CLEAR_HELP(1);
		}
	}
	if (!GAMEPLAY::IS_STRING_NULL(sVar0))
	{
		if (func_65(sVar0))
		{
			UI::CLEAR_HELP(1);
		}
	}
}

bool func_65(char* sParam0)
{
	UI::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return UI::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_66()
{
	if (!PED::IS_PED_INJURED(uLocal_76))
	{
		PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_76, 2, 0);
		PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_76, 6, 0);
		PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_76, 3, 1);
		PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_76, 1, 0);
		AI::TASK_COMBAT_PED(uLocal_76, PLAYER::PLAYER_PED_ID(), 0, 16);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_76, 0);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(ENTITY::GET_ENTITY_MODEL(uLocal_76));
	}
	else
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(ENTITY::GET_ENTITY_MODEL(uLocal_76));
	}
	if (func_162(iLocal_77))
	{
		VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_77, 1);
	}
}

int func_67()
{
	if (func_162(iLocal_77))
	{
		if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_77, 40f, 40f, 10f, 0, 1, 0))
		{
			if (iLocal_81)
			{
				if (!PED::IS_PED_INJURED(uLocal_76))
				{
					if (!iLocal_298)
					{
						if (!ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(iLocal_77))
						{
							AI::TASK_DRIVE_BY(uLocal_76, PLAYER::PLAYER_PED_ID(), 0, 0f, 0f, 0f, 40f, 100, 1, -753768974);
							iLocal_298 = 1;
						}
					}
					if (GAMEPLAY::GET_GAME_TIMER() > iLocal_303 + 7000)
					{
						if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_77, 20f, 20f, 10f, 0, 1, 0))
						{
							if (func_45(&Local_122, cLocal_294, sLocal_289, 4, 0, 0, 0))
							{
								iLocal_303 = GAMEPLAY::GET_GAME_TIMER();
							}
						}
					}
					ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_77);
					WEAPON::CLEAR_ENTITY_LAST_WEAPON_DAMAGE(iLocal_77);
					iLocal_81 = 0;
				}
			}
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_77, PLAYER::PLAYER_PED_ID(), 1))
			{
				if (!PED::IS_PED_INJURED(uLocal_76))
				{
					func_45(&Local_122, cLocal_294, sLocal_289, 4, 0, 0, 0);
				}
				iLocal_82++;
				iLocal_81 = 1;
			}
			if (iLocal_82 > 10)
			{
				return 1;
			}
		}
		else
		{
			iLocal_298 = 0;
			iLocal_81 = 0;
		}
	}
	return 0;
}

int func_68()
{
	if (func_162(iLocal_77))
	{
		if (((VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_77, 0, 0) || VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_77, 1, 0)) || VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_77, 4, 0)) || VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_77, 5, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_69()
{
	if (func_162(iLocal_77) && UI::DOES_BLIP_EXIST(uLocal_64))
	{
		func_70(&uLocal_330, iLocal_77, 0, 0, 1, 1, 1);
	}
}

void func_70(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	func_71(uParam0, iParam1, 0f, 0f, 0f, sParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_71(var uParam0, var uParam1, vector3 vParam2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)
{
	func_72(uParam0, uParam1, vParam2, sParam5, iParam6, bParam7, uParam8, bParam9);
}

void func_72(var uParam0, var uParam1, vector3 vParam2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)
{
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
	{
		func_64(uParam0, 0, 0);
	}
	uParam0->f_6 = 2;
	func_73(uParam0, uParam1, vParam2, sParam5, iParam6, bParam7, uParam8, bParam9);
}

void func_73(var uParam0, var uParam1, vector3 vParam2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	
	if (uParam0->f_1 && CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		if (GAMEPLAY::GET_GAME_TIMER() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	iVar0 = sParam5;
	if (GAMEPLAY::IS_STRING_NULL(iVar0))
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			iVar0 = "CMN_HINT";
		}
		else
		{
			iVar0 = "FM_IHELP_HNT";
		}
	}
	if (func_65(iVar0))
	{
		func_99();
	}
	if (func_98(uParam1) && ENTITY::IS_ENTITY_VISIBLE(uParam1))
	{
		iVar1 = 0;
		if (ENTITY::IS_ENTITY_A_PED(uParam1))
		{
			PED::_TRACK_PED_VISIBILITY(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1));
			PED::GET_PED_FLOOD_INVINCIBILITY(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1), 1);
			if (PED::IS_TRACKED_PED_VISIBLE(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (ENTITY::IS_ENTITY_A_VEHICLE(uParam1))
		{
			VEHICLE::TRACK_VEHICLE_VISIBILITY(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(uParam1));
			if (VEHICLE::IS_VEHICLE_VISIBLE(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(uParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (ENTITY::IS_ENTITY_AN_OBJECT(uParam1))
		{
			OBJECT::TRACK_OBJECT_VISIBILITY(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(uParam1));
			if (OBJECT::IS_OBJECT_VISIBLE(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(uParam1)))
			{
				iVar1 = 1;
			}
		}
		if (!CAM::IS_GAMEPLAY_HINT_ACTIVE())
		{
			if (func_93(uParam0, bParam7, bParam9, 0))
			{
				func_89(uParam0, uParam1, vParam2, iParam6);
			}
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_78(iVar0))
				{
					if ((GAMEPLAY::IS_STRING_NULL(uParam0->f_3) && !GAMEPLAY::IS_STRING_NULL(iVar0)) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						if ((iVar1 && !UI::IS_HELP_MESSAGE_BEING_DISPLAYED()) && uParam8)
						{
							if (!func_65(iVar0))
							{
								func_77(iVar0, -1);
								uParam0->f_3 = iVar0;
								if (GAMEPLAY::ARE_STRINGS_EQUAL("CMN_HINT", iVar0))
								{
									func_76(1);
								}
							}
						}
					}
				}
			}
			else if (func_78(iVar0))
			{
				if (GAMEPLAY::IS_STRING_NULL(uParam0->f_3) && !GAMEPLAY::IS_STRING_NULL(iVar0))
				{
					if (((ENTITY::IS_ENTITY_ON_SCREEN(uParam1) && iVar1) && !UI::IS_HELP_MESSAGE_BEING_DISPLAYED()) && uParam8)
					{
						if (!func_65(iVar0))
						{
							func_77(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (GAMEPLAY::ARE_STRINGS_EQUAL("CMN_HINT", iVar0))
							{
								func_76(1);
							}
						}
					}
				}
			}
		}
		else
		{
			if (!GAMEPLAY::IS_STRING_NULL(sParam5))
			{
				if (func_65(sParam5))
				{
					UI::CLEAR_HELP(1);
				}
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
			{
				if (PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID()))
				{
					if (CAM::_0xEE778F8C7E1142E2(3) == 3 || CAM::_0xEE778F8C7E1142E2(3) == 4)
					{
						func_64(uParam0, iVar0, 1);
					}
				}
				else if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()))
				{
					if (CAM::_0xEE778F8C7E1142E2(6) == 3 || CAM::_0xEE778F8C7E1142E2(6) == 4)
					{
						func_64(uParam0, iVar0, 1);
					}
				}
				else if (PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
				{
					if (CAM::_0xEE778F8C7E1142E2(4) == 3 || CAM::_0xEE778F8C7E1142E2(4) == 4)
					{
						func_64(uParam0, iVar0, 1);
					}
				}
				else if (PED::IS_PED_IN_ANY_SUB(PLAYER::PLAYER_PED_ID()))
				{
					if (CAM::_0xEE778F8C7E1142E2(5) == 3 || CAM::_0xEE778F8C7E1142E2(5) == 4)
					{
						func_64(uParam0, iVar0, 1);
					}
				}
				else if (PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID()))
				{
					if (CAM::_0xEE778F8C7E1142E2(2) == 3 || CAM::_0xEE778F8C7E1142E2(2) == 4)
					{
						func_64(uParam0, iVar0, 1);
					}
				}
				else if (CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 3 || CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 4)
				{
					func_64(uParam0, iVar0, 1);
				}
			}
			if (!func_93(uParam0, bParam7, bParam9, 0))
			{
				if ((!*uParam0 && !uParam0->f_1) && !func_75(uParam0))
				{
					func_74(uParam0);
				}
			}
		}
	}
	else
	{
		func_64(uParam0, iVar0, 0);
	}
}

void func_74(var uParam0)
{
	if (func_98(PLAYER::PLAYER_PED_ID()))
	{
		AI::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
	}
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::SET_CINEMATIC_BUTTON_ACTIVE(1);
		CAM::STOP_GAMEPLAY_HINT(0);
		AUDIO::STOP_AUDIO_SCENE("HINT_CAM_SCENE");
		GRAPHICS::ANIMPOSTFX_STOP("FocusIn");
		if (uParam0->f_11)
		{
			GRAPHICS::ANIMPOSTFX_PLAY("FocusOut", 0, 0);
			AUDIO::PLAY_SOUND_FRONTEND(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	uParam0->f_2 = -1;
	*uParam0 = 1;
}

int func_75(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_2 > 0)
	{
		iVar0 = (uParam0->f_10 / 2);
		if (uParam0->f_2 + iVar0) > GAMEPLAY::GET_GAME_TIMER()
		{
			return 1;
		}
	}
	return 0;
}

int func_76(bool bParam0)
{
	switch (Global_36117)
	{
		case 0:
		case 3:
			if (bParam0)
			{
				Global_106070.f_10021.f_100++;
			}
			return Global_106070.f_10021.f_100;
			break;
		
		case 4:
			if (bParam0)
			{
				Global_106070.f_10021.f_101++;
			}
			return Global_106070.f_10021.f_101;
			break;
		
		case 5:
		case 15:
			if (bParam0)
			{
				Global_106070.f_10021.f_102++;
			}
			return Global_106070.f_10021.f_102;
			break;
		
		default:
			break;
	}
	return 3;
}

void func_77(char* sParam0, int iParam1)
{
	UI::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	UI::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, iParam1);
}

int func_78(char* sParam0)
{
	if (!func_79(1, 1, 0))
	{
		if ((!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam0) && func_65(sParam0)) || func_65("CMN_HINT"))
		{
			UI::CLEAR_HELP(1);
		}
		return 0;
	}
	switch (Global_36117)
	{
		case 0:
		case 3:
			if (func_76(0) < 3)
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_76(0) < 1)
			{
				return 1;
			}
			break;
		
		case 5:
		case 15:
			if (func_76(0) < 1)
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

int func_79(bool bParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	int iVar1;
	
	if (bParam0)
	{
		if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	if (bParam2)
	{
		return 1;
	}
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		return 0;
	}
	if (func_27(0))
	{
		return 0;
	}
	if (func_88())
	{
		return 0;
	}
	if (NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE())
	{
		return 0;
	}
	if (Global_68494)
	{
		return 0;
	}
	if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appinternet")) > 0)
	{
		return 0;
	}
	if (Global_53362)
	{
		return 0;
	}
	if (bParam1)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
		{
			if (PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::_0xEE778F8C7E1142E2(3) == 3 || CAM::_0xEE778F8C7E1142E2(3) == 4)
				{
					return 0;
				}
			}
			else if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::_0xEE778F8C7E1142E2(6) == 3 || CAM::_0xEE778F8C7E1142E2(6) == 4)
				{
					return 0;
				}
			}
			else if (PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::_0xEE778F8C7E1142E2(4) == 3 || CAM::_0xEE778F8C7E1142E2(4) == 4)
				{
					return 0;
				}
			}
			else if (PED::IS_PED_IN_ANY_SUB(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::_0xEE778F8C7E1142E2(5) == 3 || CAM::_0xEE778F8C7E1142E2(5) == 4)
				{
					return 0;
				}
			}
			else if (PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::_0xEE778F8C7E1142E2(2) == 3 || CAM::_0xEE778F8C7E1142E2(2) == 4)
				{
					return 0;
				}
			}
			else if (CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 3 || CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 4)
			{
				return 0;
			}
			if (CAM::IS_GAMEPLAY_CAM_LOOKING_BEHIND())
			{
				return 0;
			}
		}
	}
	if ((func_87() || func_86(Global_4456448.f_152990)) || func_85())
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			uVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
			iVar1 = func_84(PLAYER::PLAYER_PED_ID(), 0);
			if (((VEHICLE::_0xE33FFA906CE74880(uVar0, iVar1) || (ENTITY::GET_ENTITY_MODEL(uVar0) == joaat("apc") && iVar1 != -1)) || (ENTITY::GET_ENTITY_MODEL(uVar0) == joaat("akula") && iVar1 != -1)) || (((ENTITY::GET_ENTITY_MODEL(uVar0) == joaat("riot2") && iVar1 == 0) && func_83(uVar0, 10)) && VEHICLE::GET_VEHICLE_MOD(uVar0, 10) != -1))
			{
				return 0;
			}
		}
	}
	if (func_80(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	return 1;
}

int func_80(int iParam0)
{
	if (iParam0 != func_82())
	{
		if (func_81(iParam0, 1, 1))
		{
			return Global_2423801[iParam0 /*413*/].f_309.f_4 != -1;
		}
		else if ((Global_1312857 && iParam0 == PLAYER::PLAYER_ID()) && func_81(iParam0, 1, 0))
		{
			return Global_2423801[iParam0 /*413*/].f_309.f_4 != -1;
		}
	}
	return 0;
}

int func_81(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			if (bParam1)
			{
				if (!PLAYER::IS_PLAYER_PLAYING(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2437022.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_82()
{
	return -1;
}

int func_83(var uParam0, int iParam1)
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0, 0))
	{
		if (VEHICLE::GET_NUM_MOD_KITS(uParam0) > 0)
		{
			switch (iParam1)
			{
				case 17:
				case 18:
				case 19:
				case 20:
				case 21:
				case 22:
					return 1;
					break;
				
				default:
					if (VEHICLE::GET_NUM_VEHICLE_MODS(uParam0, iParam1) > 0)
					{
						return 1;
					}
					break;
				}
			}
	}
	return 0;
}

int func_84(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, iParam1))
		{
			uVar0 = PED::GET_VEHICLE_PED_IS_IN(iParam0, iParam1);
			if (ENTITY::DOES_ENTITY_EXIST(uVar0))
			{
				iVar1 = VEHICLE::GET_VEHICLE_MODEL_NUMBER_OF_SEATS(ENTITY::GET_ENTITY_MODEL(uVar0));
				if (iVar1 == 1)
				{
					iVar3 = -1;
					return iVar3;
				}
				iVar2 = 0;
				while (iVar2 < iVar1)
				{
					iVar3 = (iVar2 - 1);
					if (!VEHICLE::IS_VEHICLE_SEAT_FREE(uVar0, iVar3, 0))
					{
						if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(uVar0, iVar3, 0) == iParam0)
						{
							return iVar3;
						}
					}
					iVar2++;
				}
			}
		}
	}
	return iVar3;
}

var func_85()
{
	return Global_2448386.f_16;
}

bool func_86(int iParam0)
{
	return iParam0 == 51;
}

var func_87()
{
	return Global_2448386.f_15;
}

bool func_88()
{
	return GAMEPLAY::GET_GAME_TIMER() <= Global_17367.f_5873 + 100;
}

void func_89(var uParam0, var uParam1, vector3 vParam2, int iParam5)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (Global_1316807 == 1)
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(uParam1, 0))
	{
		func_64(uParam0, 0, 0);
	}
	if (func_92(vParam2, 0f, 0f, 0f, 0))
	{
		if (ENTITY::IS_ENTITY_A_PED(uParam1))
		{
			uVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1);
			if (!PED::IS_PED_IN_ANY_VEHICLE(uVar0, 0))
			{
				if (PED::IS_PED_A_PLAYER(uVar0))
				{
					if (!func_90())
					{
						vParam2 = { 0f, 0f, 1f };
					}
				}
				else if (PED::IS_PED_MALE(uVar0))
				{
					vParam2 = { 0f, 0f, 1f };
				}
			}
		}
	}
	CAM::SET_CINEMATIC_BUTTON_ACTIVE(0);
	iVar1 = uParam0->f_9;
	iVar2 = uParam0->f_10;
	if (iParam5 == 1726668277)
	{
		if (iVar1 < 1500)
		{
			iVar1 = 1500;
		}
		if (iVar2 < 1500)
		{
			iVar2 = 1500;
		}
	}
	CAM::SET_GAMEPLAY_ENTITY_HINT(uParam1, vParam2, 1, -1, iVar1, iVar2, iParam5);
	iVar3 = 2048;
	iVar4 = 3;
	AI::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), uParam1, -1, iVar3, iVar4);
	GRAPHICS::ANIMPOSTFX_PLAY("FocusIn", 0, 0);
	AUDIO::START_AUDIO_SCENE("HINT_CAM_SCENE");
	AUDIO::PLAY_SOUND_FRONTEND(-1, "FocusIn", "HintCamSounds", 1);
	uParam0->f_11 = 1;
	uParam0->f_8 = GAMEPLAY::GET_GAME_TIMER();
	uParam0->f_1 = 1;
	*uParam0 = 0;
}

bool func_90()
{
	return func_91(PLAYER::PLAYER_ID());
}

int func_91(var uParam0)
{
	if (ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYER_PED(uParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

bool func_92(vector3 vParam0, vector3 vParam3, bool bParam6)
{
	if (bParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

int func_93(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (uParam0->f_1)
	{
		if (GAMEPLAY::GET_GAME_TIMER() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	switch (uParam0->f_5)
	{
		case 0:
			uParam0->f_7 = 0;
			if (uParam0->f_6 == 0)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
				{
					if (func_97(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = GAMEPLAY::GET_GAME_TIMER();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_96(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = GAMEPLAY::GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_96(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = GAMEPLAY::GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_97(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = GAMEPLAY::GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_75(uParam0))
			{
				uParam0->f_7 = 1;
				uParam0->f_5 = 4;
			}
			break;
		
		case 1:
			if ((GAMEPLAY::GET_GAME_TIMER() - uParam0->f_4) <= 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
					{
						if (!func_97(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = GAMEPLAY::GET_GAME_TIMER();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_96(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = GAMEPLAY::GET_GAME_TIMER();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_96(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = GAMEPLAY::GET_GAME_TIMER();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_97(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = GAMEPLAY::GET_GAME_TIMER();
						uParam0->f_5 = 3;
					}
				}
			}
			else
			{
				uParam0->f_5 = 2;
			}
			break;
		
		case 2:
			if (uParam0->f_6 == 0)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
				{
					if (!func_97(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_96(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_96(bParam1, bParam2, bParam3) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1) || AI::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2))
				{
					uParam0->f_5 = 0;
				}
				else if (!func_97(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			break;
		
		case 3:
			if ((GAMEPLAY::GET_GAME_TIMER() - uParam0->f_4) > 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
					{
						if (func_95(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_94(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1) || func_94(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1) || AI::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2))
					{
						uParam0->f_5 = 0;
					}
					else if (func_95(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_75(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_79(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_99();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_94(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_79(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (!PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID()))
		{
			CONTROLS::DISABLE_CONTROL_ACTION(0, 140, 1);
			CONTROLS::DISABLE_CONTROL_ACTION(0, 80, 1);
			if (CONTROLS::IS_DISABLED_CONTROL_JUST_RELEASED(0, 80))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_95(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_79(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		CONTROLS::DISABLE_CONTROL_ACTION(0, 80, 1);
		if (CAM::IS_FOLLOW_VEHICLE_CAM_ACTIVE())
		{
			if (CONTROLS::IS_DISABLED_CONTROL_JUST_RELEASED(0, 80))
			{
				CAM::SET_CINEMATIC_BUTTON_ACTIVE(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_96(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_79(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (!PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID()))
		{
			CONTROLS::DISABLE_CONTROL_ACTION(0, 140, 1);
			CONTROLS::DISABLE_CONTROL_ACTION(0, 80, 1);
			if (CONTROLS::IS_DISABLED_CONTROL_PRESSED(0, 80) && GAMEPLAY::GET_GAME_TIMER() > Global_116)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_97(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_79(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		CONTROLS::DISABLE_CONTROL_ACTION(0, 80, 1);
		if (CAM::IS_FOLLOW_VEHICLE_CAM_ACTIVE())
		{
			if (CONTROLS::IS_DISABLED_CONTROL_PRESSED(0, 80) && GAMEPLAY::GET_GAME_TIMER() > Global_116)
			{
				CAM::SET_CINEMATIC_BUTTON_ACTIVE(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_98(var uParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		if (ENTITY::IS_ENTITY_A_VEHICLE(uParam0))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(uParam0), 0))
			{
				return 1;
			}
		}
		else if (ENTITY::IS_ENTITY_A_PED(uParam0))
		{
			if (!PED::IS_PED_INJURED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0)))
			{
				return 1;
			}
		}
		else if (ENTITY::IS_ENTITY_AN_OBJECT(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_99()
{
	GAMEPLAY::SET_BIT(&Global_2384, 4);
}

int func_100(int iParam0, bool bParam1, int iParam2)
{
	iParam2 = iParam2;
	return func_101(iParam0, bParam1, 0);
}

int func_101(var uParam0, bool bParam1, bool bParam2)
{
	return func_60(uParam0, !bParam1, bParam2);
}

int func_102()
{
	float fVar0;
	
	fVar0 = 300f;
	if (iLocal_301 == 1)
	{
		fVar0 = 220f;
	}
	if (func_162(iLocal_77))
	{
		func_103(uLocal_64, iLocal_77, fVar0, 1061158912, 0);
		if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_77, fVar0, fVar0, 100f, 0, 1, 0))
		{
			return 1;
		}
		else if (!ENTITY::IS_ENTITY_OCCLUDED(iLocal_77))
		{
			return 1;
		}
	}
	return 0;
}

void func_103(var uParam0, int iParam1, float fParam2, float fParam3, int iParam4)
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = (fParam2 * fParam3);
	if (UI::DOES_BLIP_EXIST(uParam0))
	{
		if ((ENTITY::DOES_ENTITY_EXIST(iParam1) && ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (ENTITY::IS_ENTITY_A_VEHICLE(iParam1))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam1), 0))
				{
					fVar1 = GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iParam1, 1), 1);
					if (fVar1 >= fVar2 || iParam4)
					{
						iVar0 = SYSTEM::ROUND((255f * ((fVar1 - fVar2) / (fParam2 - fVar2))));
						if (iVar0 <= 0)
						{
							iVar0 = 0;
						}
						if (iVar0 >= 255)
						{
							iVar0 = 255;
						}
						UI::SET_BLIP_FLASHES(uParam0, 1);
						UI::SET_BLIP_ALPHA(uParam0, (255 - iVar0));
					}
					else
					{
						UI::SET_BLIP_FLASHES(uParam0, 0);
						UI::SET_BLIP_ALPHA(uParam0, 255);
					}
				}
			}
			else if (ENTITY::IS_ENTITY_A_PED(iParam1))
			{
				if (!PED::IS_PED_INJURED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1)))
				{
					fVar1 = GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iParam1, 1), 1);
					if (fVar1 >= fVar2 || iParam4)
					{
						iVar0 = SYSTEM::ROUND(((255f * (fVar1 - fVar2)) / (fParam2 - fVar2)));
						if (iVar0 <= 0)
						{
							iVar0 = 0;
						}
						if (iVar0 >= 255)
						{
							iVar0 = 255;
						}
						UI::SET_BLIP_FLASHES(uParam0, 1);
						UI::SET_BLIP_ALPHA(uParam0, (255 - iVar0));
					}
					else
					{
						UI::SET_BLIP_FLASHES(uParam0, 0);
						UI::SET_BLIP_ALPHA(uParam0, 255);
					}
				}
			}
		}
	}
}

int func_104()
{
	if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_77, 0) && VEHICLE::IS_VEHICLE_STUCK_ON_ROOF(iLocal_77))
	{
		return 1;
	}
	return 0;
}

void func_105()
{
	if (!PED::IS_PED_INJURED(uLocal_75) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		switch (iLocal_50)
		{
			case 0:
				iLocal_58 = iLocal_58;
				if (!PED::IS_PED_IN_ANY_VEHICLE(uLocal_75, 0))
				{
					if (iLocal_301 == 1)
					{
						if (func_112())
						{
							iLocal_50 = 1;
						}
					}
					else if (!PED::IS_PED_RAGDOLL(uLocal_75) && !AI::IS_PED_GETTING_UP(uLocal_75))
					{
						AI::TASK_LOOK_AT_ENTITY(uLocal_75, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -539.4566f, -2094.491f, 6.967173f, -468.4296f, -2152.549f, 18.99127f, 26.75f, 0, 1, 0))
						{
							AI::TASK_ACHIEVE_HEADING(uLocal_75, 345f, 0);
							iLocal_50 = 1;
						}
						else
						{
							AI::OPEN_SEQUENCE_TASK(&uLocal_78);
							AI::TASK_PLAY_ANIM(0, sLocal_84, "arms_waving", 2f, -8f, -1, 0, 0, 0, 0, 0);
							AI::TASK_PLAY_ANIM(0, sLocal_84, "arms_waving", 8f, -8f, -1, 0, 0, 0, 0, 0);
							AI::TASK_PLAY_ANIM(0, sLocal_84, "arms_waving", 8f, -2f, -1, 0, 0, 0, 0, 0);
							AI::CLOSE_SEQUENCE_TASK(uLocal_78);
							AI::TASK_PERFORM_SEQUENCE(uLocal_75, uLocal_78);
							AI::CLEAR_SEQUENCE_TASK(&uLocal_78);
							iLocal_304 = GAMEPLAY::GET_GAME_TIMER();
							iLocal_50 = 2;
						}
					}
				}
				break;
			
			case 1:
				if (iLocal_301 == 1)
				{
					AI::TASK_LOOK_AT_ENTITY(uLocal_75, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
					if (AI::GET_SCRIPT_TASK_STATUS(uLocal_75, 242628503) != 1)
					{
						AI::OPEN_SEQUENCE_TASK(&uLocal_78);
						AI::TASK_PLAY_ANIM(0, sLocal_84, sLocal_86, 4f, -2f, -1, 0, 0, 0, 0, 0);
						AI::CLOSE_SEQUENCE_TASK(uLocal_78);
						AI::TASK_PERFORM_SEQUENCE(uLocal_75, uLocal_78);
						AI::CLEAR_SEQUENCE_TASK(&uLocal_78);
						iLocal_50 = 2;
					}
				}
				else if (PED::IS_PED_FACING_PED(uLocal_75, PLAYER::PLAYER_PED_ID(), 60f))
				{
					if (AI::GET_SCRIPT_TASK_STATUS(uLocal_75, 242628503) != 1)
					{
						AI::OPEN_SEQUENCE_TASK(&uLocal_78);
						AI::TASK_PLAY_ANIM(0, sLocal_84, "arms_waving", 2f, -8f, -1, 0, 0, 0, 0, 0);
						if (bLocal_61 == 0)
						{
							AI::TASK_PLAY_ANIM(0, sLocal_84, "pointing", 8f, -4f, -1, 0, 0, 0, 0, 0);
						}
						AI::CLOSE_SEQUENCE_TASK(uLocal_78);
						AI::TASK_PERFORM_SEQUENCE(uLocal_75, uLocal_78);
						AI::CLEAR_SEQUENCE_TASK(&uLocal_78);
						iLocal_50 = 2;
					}
				}
				if (func_112())
				{
					if (func_111())
					{
					}
				}
				break;
			
			case 2:
				if (func_112())
				{
					if (func_111())
					{
					}
				}
				if (iLocal_301 == 2)
				{
					if (!PED::IS_PED_FACING_PED(uLocal_75, PLAYER::PLAYER_PED_ID(), 60f) && !func_109(uLocal_75, -875674219))
					{
						AI::TASK_TURN_PED_TO_FACE_ENTITY(uLocal_75, PLAYER::PLAYER_PED_ID(), 0);
					}
					if (func_108(uLocal_75, PLAYER::PLAYER_PED_ID(), 1) < 25f)
					{
						if (!func_18())
						{
							if ((GAMEPLAY::GET_GAME_TIMER() - iLocal_304) > 6000)
							{
								func_107();
							}
						}
					}
				}
				if (AI::GET_SCRIPT_TASK_STATUS(uLocal_75, 242628503) != 1 && !func_109(uLocal_75, -875674219))
				{
					if (iLocal_301 == 1)
					{
						vLocal_93 = { -2260.1f, 4274.24f, 44.9f };
						if (!ENTITY::IS_ENTITY_AT_COORD(uLocal_75, vLocal_93, 1.5f, 1.5f, 1.5f, 0, 1, 0))
						{
							if (AI::GET_SCRIPT_TASK_STATUS(uLocal_75, 242628503) == 7)
							{
								AI::OPEN_SEQUENCE_TASK(&uLocal_78);
								AI::TASK_GO_STRAIGHT_TO_COORD(0, vLocal_93, 1f, 20000, fLocal_106, 1056964608);
								AI::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
								AI::CLOSE_SEQUENCE_TASK(uLocal_78);
								AI::TASK_PERFORM_SEQUENCE(uLocal_75, uLocal_78);
								AI::CLEAR_SEQUENCE_TASK(&uLocal_78);
							}
						}
						else if (!ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_75, sLocal_83, "waiting", 3))
						{
							AI::TASK_PLAY_ANIM(uLocal_75, sLocal_83, "waiting", 4f, -4f, -1, 0, 0, 0, 0, 0);
							if (func_108(uLocal_75, PLAYER::PLAYER_PED_ID(), 1) < 25f)
							{
								func_107();
							}
						}
					}
					else if (!ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_75, sLocal_83, "waiting", 3))
					{
						AI::TASK_PLAY_ANIM(uLocal_75, sLocal_83, "waiting", 4f, -4f, -1, 0, 0, 0, 0, 0);
					}
				}
				break;
			
			case 3:
				if (!PED::IS_PED_HEADTRACKING_PED(uLocal_75, PLAYER::PLAYER_PED_ID()))
				{
					AI::TASK_LOOK_AT_ENTITY(uLocal_75, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
				}
				if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), uLocal_75, 40f, 40f, 10f, 0, 1, 0) && !ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), uLocal_75, 9f, 9f, 9f, 0, 1, 0))
				{
					if (func_106())
					{
						if (iLocal_59)
						{
							if (iLocal_301 == 1)
							{
								AI::OPEN_SEQUENCE_TASK(&uLocal_78);
								AI::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
								AI::TASK_PLAY_ANIM(0, "RANDOM@CAR_THIEF@WAITING_IG_4", "idle_a", 2f, -2f, -1, 0, 0, 0, 0, 0);
								AI::CLOSE_SEQUENCE_TASK(uLocal_78);
								AI::TASK_PERFORM_SEQUENCE(uLocal_75, uLocal_78);
								AI::CLEAR_SEQUENCE_TASK(&uLocal_78);
								iLocal_59 = 0;
								iLocal_304 = GAMEPLAY::GET_GAME_TIMER();
							}
							else
							{
								AI::OPEN_SEQUENCE_TASK(&uLocal_78);
								AI::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
								AI::TASK_PLAY_ANIM(0, "RANDOM@CAR_THIEF@WAITING_IG_4", "idle_a", 2f, -2f, -1, 0, 0, 0, 0, 0);
								AI::CLOSE_SEQUENCE_TASK(uLocal_78);
								AI::TASK_PERFORM_SEQUENCE(uLocal_75, uLocal_78);
								AI::CLEAR_SEQUENCE_TASK(&uLocal_78);
								iLocal_59 = 0;
								iLocal_304 = GAMEPLAY::GET_GAME_TIMER();
							}
						}
						else if (!ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_75, "RANDOM@CAR_THIEF@WAITING_IG_4", "idle_a", 3))
						{
							if (AI::GET_SCRIPT_TASK_STATUS(uLocal_75, 242628503) == 7)
							{
								if (!PED::IS_PED_FACING_PED(uLocal_75, PLAYER::PLAYER_PED_ID(), 45f))
								{
									AI::OPEN_SEQUENCE_TASK(&uLocal_78);
									AI::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
									AI::CLOSE_SEQUENCE_TASK(uLocal_78);
									AI::TASK_PERFORM_SEQUENCE(uLocal_75, uLocal_78);
									AI::CLEAR_SEQUENCE_TASK(&uLocal_78);
								}
								else if ((GAMEPLAY::GET_GAME_TIMER() - iLocal_304) > 6000)
								{
									iLocal_59 = 1;
								}
							}
						}
						else if (!PED::IS_PED_FACING_PED(uLocal_75, PLAYER::PLAYER_PED_ID(), 70f))
						{
							AI::CLEAR_PED_TASKS(uLocal_75);
							AI::OPEN_SEQUENCE_TASK(&uLocal_78);
							AI::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
							AI::CLOSE_SEQUENCE_TASK(uLocal_78);
							AI::TASK_PERFORM_SEQUENCE(uLocal_75, uLocal_78);
							AI::CLEAR_SEQUENCE_TASK(&uLocal_78);
							iLocal_304 += 4000;
						}
					}
					if (!PED::IS_PED_INJURED(uLocal_76))
					{
						AI::TASK_SMART_FLEE_PED(uLocal_76, PLAYER::PLAYER_PED_ID(), 150f, -1, 0, 0);
						PED::SET_PED_KEEP_TASK(uLocal_76, 1);
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&uLocal_76);
					}
				}
				else
				{
					if (iLocal_301 == 1)
					{
						vLocal_93 = { -2260.1f, 4274.24f, 44.9f };
					}
					else if (bLocal_61)
					{
						vLocal_93 = { -483.4162f, -2160.874f, 8.359f };
					}
					else
					{
						vLocal_93 = { -485.9905f, -2153.542f, 8.1999f };
					}
					if (!ENTITY::IS_ENTITY_AT_COORD(uLocal_75, vLocal_93, 4f, 4f, 4f, 0, 1, 0))
					{
						if (AI::GET_SCRIPT_TASK_STATUS(uLocal_75, 2106541073) == 7)
						{
							AI::TASK_GO_STRAIGHT_TO_COORD(uLocal_75, vLocal_93, 1f, 20000, fLocal_106, 1056964608);
						}
					}
					else if (!PED::IS_PED_FACING_PED(uLocal_75, PLAYER::PLAYER_PED_ID(), 50f))
					{
						AI::TASK_TURN_PED_TO_FACE_ENTITY(uLocal_75, PLAYER::PLAYER_PED_ID(), -1);
					}
					iLocal_59 = 1;
				}
				break;
			
			case 4:
				break;
			}
	}
	if (func_161(1))
	{
		if (!PED::IS_PED_INJURED(uLocal_75))
		{
			AI::TASK_SMART_FLEE_PED(uLocal_75, PLAYER::PLAYER_PED_ID(), 150f, -1, 0, 0);
			PED::SET_PED_KEEP_TASK(uLocal_75, 1);
			SYSTEM::WAIT(0);
		}
		func_231();
	}
}

bool func_106()
{
	if (!bLocal_296)
	{
		if (func_45(&Local_122, cLocal_294, sLocal_290, 4, 0, 0, 0))
		{
			bLocal_296 = true;
		}
	}
	return bLocal_296;
}

int func_107()
{
	if (!iLocal_297)
	{
		if (func_45(&Local_122, cLocal_294, sLocal_288, 4, 0, 0, 0))
		{
			iLocal_297 = 1;
		}
	}
	return iLocal_297;
}

float func_108(var uParam0, var uParam1, int iParam2)
{
	vector3 vVar0;
	vector3 vVar3;
	
	if (!ENTITY::IS_ENTITY_DEAD(uParam0, 0))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(uParam0, 1) };
	}
	else
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(uParam0, 0) };
	}
	if (!ENTITY::IS_ENTITY_DEAD(uParam1, 0))
	{
		vVar3 = { ENTITY::GET_ENTITY_COORDS(uParam1, 1) };
	}
	else
	{
		vVar3 = { ENTITY::GET_ENTITY_COORDS(uParam1, 0) };
	}
	return GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(vVar0, vVar3, iParam2);
}

int func_109(var uParam0, int iParam1)
{
	if (func_110(uParam0))
	{
		if (AI::GET_SCRIPT_TASK_STATUS(uParam0, iParam1) == 1 || AI::GET_SCRIPT_TASK_STATUS(uParam0, iParam1) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_110(var uParam0)
{
	if (func_3(uParam0))
	{
		if (!PED::IS_PED_INJURED(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_111()
{
	if (!iLocal_295)
	{
		if (SYSTEM::TIMERA() > 2000)
		{
			if (func_45(&Local_122, cLocal_294, sLocal_287, 4, 0, 0, 0))
			{
				iLocal_295 = 1;
			}
		}
	}
	return iLocal_295;
}

int func_112()
{
	if (!PED::IS_PED_INJURED(uLocal_76) && !PED::IS_PED_INJURED(uLocal_75))
	{
		if (func_162(iLocal_77))
		{
			if (PED::IS_PED_SITTING_IN_VEHICLE(uLocal_76, iLocal_77))
			{
				return 1;
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_113(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

void func_114(bool bParam0)
{
	int iVar0;
	
	if (iLocal_301 == 2)
	{
		iVar0 = func_10();
		switch (iVar0)
		{
			case 0:
				while (!func_137(319357731, 6, 1, 144, 7200000, 10000, -1, 199, -1, 0))
				{
					if (func_3(uLocal_75))
					{
						PED::SET_PED_RESET_FLAG(uLocal_75, 310, 1);
					}
					SYSTEM::WAIT(0);
				}
				break;
			
			case 1:
				while (!func_137(-423103492, 6, 2, 144, 7200000, 10000, -1, 199, -1, 0))
				{
					if (func_3(uLocal_75))
					{
						PED::SET_PED_RESET_FLAG(uLocal_75, 310, 1);
					}
					SYSTEM::WAIT(0);
				}
				break;
			
			case 2:
				while (!func_137(801546988, 6, 4, 144, 7200000, 10000, -1, 199, -1, 0))
				{
					if (func_3(uLocal_75))
					{
						PED::SET_PED_RESET_FLAG(uLocal_75, 310, 1);
					}
					SYSTEM::WAIT(0);
				}
				break;
			}
	}
	if (bParam0)
	{
		func_136(8);
	}
	func_118(17, iLocal_301);
	func_115();
	func_231();
}

void func_115()
{
	func_116();
}

int func_116()
{
	if (func_117(0))
	{
		return 0;
	}
	if (Global_93271.f_8)
	{
		if (Global_93271.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_93271.f_10 > 1)
	{
		return 0;
	}
	Global_93271.f_10++;
	return 1;
}

int func_117(bool bParam0)
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return GAMEPLAY::IS_BIT_SET(Global_71453, 0);
}

void func_118(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_134();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_133(iParam0))
	{
		func_132(iParam0, iParam1);
		if (!func_131(51))
		{
			func_127("RE_REWARD", 1, 0, 4000, 10000, func_130(), 0, 138, 0);
			func_126(51);
		}
		if (func_125(iParam0))
		{
			Global_106070.f_24967.f_2 = 3;
		}
		if (func_124(iParam0, iParam1) != 322)
		{
			func_119(func_124(iParam0, iParam1), vLocal_45.x, vLocal_45.y);
		}
		Global_106058 = iParam1;
		if (Global_106056 == 0)
		{
			if (((Global_106059 == 1 || Global_106059 == 5) || Global_106059 == 11) || Global_106059 == 25)
			{
				func_136(2);
			}
			else if ((Global_106059 == 26 || Global_106059 == 8) || Global_106059 == 17)
			{
				func_136(7);
			}
			else
			{
				func_136(1);
			}
		}
	}
}

void func_119(int iParam0, var uParam1, var uParam2)
{
	bool bVar0;
	
	if (iParam0 < 0)
	{
	}
	if (iParam0 == 321 || iParam0 > 321)
	{
	}
	else
	{
		func_123((891 + iParam0), 1, -1, 1);
	}
	bVar0 = true;
	if (Global_106070.f_10166[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_106070.f_10166[iParam0 /*12*/].f_6 == 11 || Global_106070.f_10166[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_106070.f_10166[iParam0 /*12*/].f_5 = 1;
		Global_106070.f_10166[iParam0 /*12*/].f_10 = uParam1;
		Global_106070.f_10166[iParam0 /*12*/].f_11 = uParam2;
		if (iParam0 == 287)
		{
			STATS::_0x11FF1C80276097ED(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			STATS::_0x11FF1C80276097ED(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			STATS::_0x11FF1C80276097ED(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_120();
	}
}

void func_120()
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	
	iVar0 = 0;
	Global_105806 = 0;
	Global_105807 = 0;
	Global_105808 = 0;
	Global_105809 = 0;
	Global_105810 = 0;
	Global_105811 = 0;
	Global_105812 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_106070.f_10166.f_3853;
	Global_106070.f_10166.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_106070.f_10166[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_106070.f_10166[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_105806++;
					fVar1 = (fVar1 + Global_106070.f_10166[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_105807++;
					fVar2 = (fVar2 + Global_106070.f_10166[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_105808++;
					fVar3 = (fVar3 + Global_106070.f_10166[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_105809++;
					fVar4 = (fVar4 + Global_106070.f_10166[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_105810++;
					fVar5 = (fVar5 + (Global_106070.f_10166[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_105811++;
					fVar6 = (fVar6 + Global_106070.f_10166[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_105812++;
					fVar7 = (fVar7 + Global_106070.f_10166[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_105789 > 0)
	{
		if (Global_105806 == Global_105789)
		{
			fVar1 = 55f;
		}
	}
	if (Global_105790 > 0)
	{
		if (Global_105807 == Global_105790)
		{
			fVar2 = 10f;
		}
	}
	if (Global_105791 > 0)
	{
		if (Global_105808 == Global_105791)
		{
			fVar3 = 0f;
		}
	}
	if (Global_105792 > 0)
	{
		if (Global_105809 == Global_105792)
		{
			fVar4 = 10f;
		}
	}
	if (Global_105793 > 0)
	{
		if (((Global_105810 == Global_105793 || (Global_105793 * 10 / Global_105810) < 41) || Global_105810 > Global_105796) || Global_105810 == Global_105796)
		{
			if (!GAMEPLAY::IS_BIT_SET(Global_106070.f_10166.f_3856, 14))
			{
				if (Global_105810 == Global_105793)
				{
					STATS::_0x11FF1C80276097ED(joaat("num_rndevents_completed"), Global_105793, 0);
					GAMEPLAY::SET_BIT(&(Global_106070.f_10166.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_105794 > 0)
	{
		if (Global_105811 == Global_105794)
		{
			fVar6 = 15f;
		}
	}
	if (Global_105795 > 0)
	{
		if (Global_105812 == Global_105795)
		{
			fVar7 = 5f;
		}
	}
	Global_106070.f_10166.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_105810 > Global_105796 || Global_105810 == Global_105796)
	{
		iVar9 = Global_105796;
	}
	else
	{
		iVar9 = Global_105810;
	}
	STATS::STAT_SET_INT(joaat("num_missions_completed"), Global_105806, 1);
	STATS::STAT_SET_INT(joaat("num_missions_available"), Global_105789, 1);
	STATS::STAT_SET_INT(joaat("num_minigames_completed"), Global_105807, 1);
	STATS::STAT_SET_INT(joaat("num_minigames_available"), Global_105790, 1);
	STATS::STAT_SET_INT(joaat("num_oddjobs_completed"), Global_105808, 1);
	STATS::STAT_SET_INT(joaat("num_oddjobs_available"), Global_105791, 1);
	STATS::STAT_SET_INT(joaat("num_rndpeople_completed"), Global_105809, 1);
	STATS::STAT_SET_INT(joaat("num_rndpeople_available"), Global_105792, 1);
	STATS::STAT_SET_INT(joaat("num_rndevents_completed"), iVar9, 1);
	STATS::STAT_SET_INT(joaat("num_rndevents_available"), Global_105796, 1);
	STATS::STAT_SET_INT(joaat("num_misc_completed"), (Global_105812 + Global_105811), 1);
	STATS::STAT_SET_INT(joaat("num_misc_available"), (Global_105795 + Global_105794), 1);
	Global_105813 = (Global_105806 * 100 / Global_105789);
	Global_105815 = ((Global_105808 + Global_105807) * 100 / (Global_105791 + Global_105790));
	Global_105814 = ((Global_105809 + iVar9) * 100 / (Global_105792 + Global_105796));
	Global_105816 = ((Global_105811 + Global_105812) * 100 / (Global_105794 + Global_105795));
	STATS::STAT_SET_FLOAT(joaat("total_progress_made"), Global_106070.f_10166.f_3853, 1);
	STATS::STAT_SET_INT(joaat("percent_story_missions"), Global_105813, 1);
	STATS::STAT_SET_INT(joaat("percent_ambient_missions"), Global_105814, 1);
	STATS::STAT_SET_INT(joaat("percent_oddjobs"), Global_105815, 1);
	if (fVar8 > 0f && SYSTEM::FLOOR(fVar8) < SYSTEM::FLOOR(Global_106070.f_10166.f_3853))
	{
		func_122(13, SYSTEM::FLOOR(Global_106070.f_10166.f_3853));
	}
	if (!DATAFILE::DATAFILE_IS_SAVE_PENDING())
	{
		if (!Global_71205)
		{
			if (func_121() == 2 == 0 && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE())
				{
					Global_105804 = 0;
				}
				if (!Global_56181)
				{
					func_116();
				}
			}
		}
	}
}

int func_121()
{
	return Global_25459;
}

int func_122(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 > 78)
	{
		return 0;
	}
	if (iParam1 <= 0 || iParam1 > 100)
	{
		return 0;
	}
	iVar0 = PLAYER::_GET_ACHIEVEMENT_PROGRESSION(iParam0);
	if (iParam1 > iVar0)
	{
		return PLAYER::_SET_ACHIEVEMENT_PROGRESSION(iParam0, iParam1);
	}
	return 0;
}

int func_123(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	var uVar11;
	var uVar12;
	var uVar13;
	var uVar14;
	var uVar15;
	var uVar16;
	var uVar17;
	var uVar18;
	var uVar19;
	
	if (iParam2 == -1)
	{
		iParam2 = func_8();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = STATS::_GET_PSTAT_BOOL_HASH((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 0)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = STATS::_GET_PSTAT_BOOL_HASH((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 192)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = STATS::_GET_PSTAT_BOOL_HASH((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 513)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = STATS::_GET_PSTAT_BOOL_HASH((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 705)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = STATS::_GET_TUPSTAT_BOOL_HASH((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 3111)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = STATS::_GET_TUPSTAT_BOOL_HASH((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 2919)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 4207)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 4335)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		uVar10 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 6029)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		uVar11 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 7385)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		uVar12 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 7321)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar12, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		uVar13 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 9361)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar13, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		uVar14 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15369), 0, 1, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 15369)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar14, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		uVar15 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15562), 0, 1, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 15562)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar15, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		uVar16 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15946), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 15946) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 15946)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar16, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		uVar17 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 18098), 0, 1, iParam2, "_GANGOPSPSTAT_BOOL");
		iVar1 = ((iParam0 - 18098) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 18098)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar17, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		uVar18 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 22066), 0, 1, iParam2, "_BUSINESSBATPSTAT_BOOL");
		iVar1 = ((iParam0 - 22066) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 22066)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar18, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		uVar19 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 24962), 0, 1, iParam2, "_ARENAWARSPSTAT_BOOL");
		iVar1 = ((iParam0 - 24962) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 24962)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar19, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_124(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 250;
			break;
		
		case 1:
			return 226;
			break;
		
		case 2:
			return 243;
			break;
		
		case 3:
			return 256;
			break;
		
		case 4:
			return 259;
			break;
		
		case 5:
			if (iParam1 == 1)
			{
				return 281;
			}
			if (iParam1 == 2)
			{
				return 282;
			}
			break;
		
		case 6:
			return 265;
			break;
		
		case 7:
			return 218;
			break;
		
		case 9:
			if (iParam1 == 1)
			{
				return 271;
			}
			if (iParam1 == 2)
			{
				return 272;
			}
			if (iParam1 == 3)
			{
				return 273;
			}
			if (iParam1 == 4)
			{
				return 274;
			}
			if (iParam1 == 5)
			{
				return 275;
			}
			if (iParam1 == 6)
			{
				return 276;
			}
			if (iParam1 == 7)
			{
				return 277;
			}
			if (iParam1 == 8)
			{
				return 278;
			}
			if (iParam1 == 9)
			{
				return 279;
			}
			if (iParam1 == 10)
			{
				return 280;
			}
			break;
		
		case 10:
			return 219;
			break;
		
		case 11:
			if (iParam1 == 1)
			{
				return 246;
			}
			if (iParam1 == 2)
			{
				return 247;
			}
			if (iParam1 == 3)
			{
				return 248;
			}
			if (iParam1 == 4)
			{
				return 249;
			}
			break;
		
		case 12:
			return 254;
			break;
		
		case 13:
			if (iParam1 == 1)
			{
				return 260;
			}
			if (iParam1 == 2)
			{
				return 261;
			}
			if (iParam1 == 3)
			{
				return 262;
			}
			if (iParam1 == 4)
			{
				return 264;
			}
			break;
		
		case 14:
			return 283;
			break;
		
		case 15:
			if (iParam1 == 1)
			{
				return 224;
			}
			if (iParam1 == 2)
			{
				return 225;
			}
			break;
		
		case 16:
			return 252;
			break;
		
		case 17:
			if (iParam1 == 1)
			{
				return 244;
			}
			if (iParam1 == 2)
			{
				return 245;
			}
			break;
		
		case 18:
			return 253;
			break;
		
		case 19:
			return 215;
			break;
		
		case 20:
			return 216;
			break;
		
		case 21:
			return 251;
			break;
		
		case 22:
			if (iParam1 == 1)
			{
				return 221;
			}
			if (iParam1 == 2)
			{
				return 222;
			}
			break;
		
		case 23:
			if (iParam1 == 1)
			{
				return 213;
			}
			if (iParam1 == 2)
			{
				return 214;
			}
			break;
		
		case 24:
			return 242;
			break;
		
		case 25:
			if (iParam1 == 1)
			{
				return 267;
			}
			if (iParam1 == 2)
			{
				return 268;
			}
			if (iParam1 == 3)
			{
				return 269;
			}
			break;
		
		case 8:
			return 255;
			break;
		
		case 26:
			if (iParam1 == 1)
			{
				return 227;
			}
			if (iParam1 == 2)
			{
				return 228;
			}
			break;
		
		case 27:
			if (iParam1 == 1)
			{
				return 257;
			}
			if (iParam1 == 2)
			{
				return 258;
			}
			break;
		
		case 28:
			return 217;
			break;
		
		case 29:
			if (iParam1 == 1)
			{
				return 229;
			}
			if (iParam1 == 2)
			{
				return 230;
			}
			if (iParam1 == 3)
			{
				return 231;
			}
			break;
		
		case 30:
			return 285;
			break;
		
		case 31:
			return 318;
			break;
		
		case 32:
			return 319;
			break;
		
		case 33:
			return 320;
			break;
	}
	return 322;
}

int func_125(int iParam0)
{
	switch (iParam0)
	{
		case 29:
		case 30:
		case 2:
		case 18:
			return 0;
			break;
	}
	return 1;
}

void func_126(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		GAMEPLAY::SET_BIT(&(Global_106070.f_20382.f_150[iVar1]), iVar0);
	}
}

void func_127(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_128(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_128(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (GAMEPLAY::ARE_STRINGS_EQUAL(sParam0, ""))
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam5 < 500 && iParam5 != -1)
	{
		return;
	}
	if (iParam4 < 0 && iParam4 != -1)
	{
		return;
	}
	if (iParam6 < 1 || iParam6 > 7)
	{
		return;
	}
	if (iParam7 == 235)
	{
		return;
	}
	if (iParam8 == 235)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_106070.f_20382.f_145)
	{
		if (GAMEPLAY::ARE_STRINGS_EQUAL(&(Global_106070.f_20382[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_106070.f_20382.f_145 < 9)
	{
		StringCopy(&(Global_106070.f_20382[Global_106070.f_20382.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_106070.f_20382[Global_106070.f_20382.f_145 /*16*/].f_4), sParam1, 16);
		Global_106070.f_20382[Global_106070.f_20382.f_145 /*16*/].f_8 = (GAMEPLAY::GET_GAME_TIMER() + iParam3);
		Global_106070.f_20382[Global_106070.f_20382.f_145 /*16*/].f_9 = iParam5;
		Global_106070.f_20382[Global_106070.f_20382.f_145 /*16*/].f_11 = iParam6;
		Global_106070.f_20382[Global_106070.f_20382.f_145 /*16*/].f_12 = uParam2;
		Global_106070.f_20382[Global_106070.f_20382.f_145 /*16*/].f_13 = iParam7;
		Global_106070.f_20382[Global_106070.f_20382.f_145 /*16*/].f_14 = iParam8;
		Global_106070.f_20382[Global_106070.f_20382.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_106070.f_20382[Global_106070.f_20382.f_145 /*16*/].f_10 = ((GAMEPLAY::GET_GAME_TIMER() + iParam3) + iParam4);
		}
		else
		{
			Global_106070.f_20382[Global_106070.f_20382.f_145 /*16*/].f_10 = -1;
		}
		Global_106070.f_20382.f_145++;
		func_129();
	}
}

void func_129()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_106070.f_20382.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_106070.f_20382.f_145)
	{
		if (GAMEPLAY::IS_BIT_SET(Global_106070.f_20382[iVar0 /*16*/].f_11, 0))
		{
			if (Global_106070.f_20382[iVar0 /*16*/].f_12 > Global_106070.f_20382.f_146[0])
			{
				Global_106070.f_20382.f_146[0] = Global_106070.f_20382[iVar0 /*16*/].f_12;
			}
		}
		if (GAMEPLAY::IS_BIT_SET(Global_106070.f_20382[iVar0 /*16*/].f_11, 1))
		{
			if (Global_106070.f_20382[iVar0 /*16*/].f_12 > Global_106070.f_20382.f_146[1])
			{
				Global_106070.f_20382.f_146[1] = Global_106070.f_20382[iVar0 /*16*/].f_12;
			}
		}
		if (GAMEPLAY::IS_BIT_SET(Global_106070.f_20382[iVar0 /*16*/].f_11, 2))
		{
			if (Global_106070.f_20382[iVar0 /*16*/].f_12 > Global_106070.f_20382.f_146[2])
			{
				Global_106070.f_20382.f_146[2] = Global_106070.f_20382[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

int func_130()
{
	func_11();
	switch (Global_106070.f_2355.f_539.f_4301)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			return 2;
			break;
		
		case 2:
			return 4;
			break;
	}
	return 0;
}

int func_131(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		return GAMEPLAY::IS_BIT_SET(Global_106070.f_20382.f_150[iVar1], iVar0);
	}
	return 0;
}

void func_132(int iParam0, int iParam1)
{
	GAMEPLAY::SET_BIT(&(Global_106070.f_24967.f_8[iParam0]), iParam1);
}

int func_133(int iParam0)
{
	int iVar0;
	
	iVar0 = 1;
	switch (iParam0)
	{
		case 1:
			iVar0 = 5;
			break;
		
		case 5:
			iVar0 = 2;
			break;
		
		case 9:
			iVar0 = 10;
			break;
		
		case 11:
			iVar0 = 4;
			break;
		
		case 13:
			iVar0 = 4;
			break;
		
		case 15:
			iVar0 = 2;
			break;
		
		case 17:
			iVar0 = 2;
			break;
		
		case 22:
			iVar0 = 2;
			break;
		
		case 23:
			iVar0 = 2;
			break;
		
		case 25:
			iVar0 = 3;
			break;
		
		case 26:
			iVar0 = 2;
			break;
		
		case 27:
			iVar0 = 2;
			break;
		
		case 29:
			iVar0 = 3;
			break;
	}
	return iVar0;
}

int func_134()
{
	struct<16> Var0;
	var uVar16;
	
	StringCopy(&Var0, SCRIPT::GET_THIS_SCRIPT_NAME(), 64);
	uVar16 = func_135(Var0);
	return uVar16;
}

int func_135(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	switch (GAMEPLAY::GET_HASH_KEY(&cParam0))
	{
		case joaat("re_abandonedcar"):
			return 23;
			break;
		
		case joaat("re_accident"):
			return 0;
			break;
		
		case joaat("re_arrests"):
			return 15;
			break;
		
		case joaat("re_atmrobbery"):
			return 1;
			break;
		
		case joaat("re_bikethief"):
			return 26;
			break;
		
		case joaat("re_border"):
			return 29;
			break;
		
		case joaat("re_burials"):
			return 24;
			break;
		
		case joaat("re_bus_tours"):
			return 2;
			break;
		
		case joaat("re_cartheft"):
			return 17;
			break;
		
		case joaat("re_chasethieves"):
			return 11;
			break;
		
		case joaat("re_crashrescue"):
			return 16;
			break;
		
		case joaat("re_cultshootout"):
			return 18;
			break;
		
		case joaat("re_dealgonewrong"):
			return 12;
			break;
		
		case joaat("re_domestic"):
			return 3;
			break;
		
		case joaat("re_drunkdriver"):
			return 27;
			break;
		
		case joaat("re_gang_intimidation"):
			return 20;
			break;
		
		case joaat("re_gangfight"):
			return 19;
			break;
		
		case joaat("re_getaway_driver"):
			return 4;
			break;
		
		case joaat("re_hitch_lift"):
			return 13;
			break;
		
		case joaat("re_homeland_security"):
			return 28;
			break;
		
		case joaat("re_lured"):
			return 7;
			break;
		
		case joaat("re_muggings"):
			return 25;
			break;
		
		case joaat("re_paparazzi"):
			return 10;
			break;
		
		case joaat("re_prisonerlift"):
			return 22;
			break;
		
		case joaat("re_prisonvanbreak"):
			return 21;
			break;
		
		case joaat("re_securityvan"):
			return 9;
			break;
		
		case joaat("re_shoprobbery"):
			return 5;
			break;
		
		case joaat("re_snatched"):
			return 6;
			break;
		
		case joaat("re_stag_do"):
			return 14;
			break;
		
		case joaat("re_yetarian"):
			return 30;
			break;
		
		case joaat("re_duel"):
			return 31;
			break;
		
		case joaat("re_seaplane"):
			return 32;
			break;
		
		case joaat("re_monkey"):
			return 33;
			break;
	}
	return -1;
}

void func_136(int iParam0)
{
	Global_106056 = iParam0;
}

int func_137(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	struct<10> Var0;
	struct<10> Var10;
	int iVar20;
	int iVar21;
	
	if (func_117(0))
	{
		return 0;
	}
	if (iParam4 < 0)
	{
		return 0;
	}
	if (iParam5 < 0)
	{
		return 0;
	}
	if (iParam6 == 76)
	{
		return 0;
	}
	if (iParam7 == 235)
	{
		return 0;
	}
	if (iParam3 < 3)
	{
		if (GAMEPLAY::IS_BIT_SET(iParam2, iParam3))
		{
			return 0;
		}
	}
	if (iParam2 < 1 || iParam2 > 7)
	{
		return 0;
	}
	if (Global_106070.f_7660.f_866 < 10)
	{
		Var0 = iParam0;
		Var0.f_3 = func_145(iParam1);
		Var0.f_4 = (GAMEPLAY::GET_GAME_TIMER() + iParam4);
		Var0.f_5 = iParam5;
		Var0.f_1 = iParam9;
		Var0.f_2 = iParam2;
		Var0.f_6 = iParam3;
		Var0.f_7 = iParam6;
		Var0.f_8 = iParam7;
		Var0.f_9 = iParam8;
		GAMEPLAY::CLEAR_BIT(&(Var0.f_1), 0);
		Global_106070.f_7660.f_765[Global_106070.f_7660.f_866 /*10*/] = { Var0 };
		Global_106070.f_7660.f_866++;
		return 1;
	}
	else
	{
		Var10 = { func_144(iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9) };
		iVar20 = 0;
		func_143(&iVar20);
		iVar21 = func_142(Var10, Global_106070.f_7660.f_765[iVar20 /*10*/]);
		if (iVar21 == 2)
		{
			func_140(Global_106070.f_7660.f_765[iVar20 /*10*/]);
			Global_106070.f_7660.f_765[iVar20 /*10*/] = { Var10 };
			func_139(&Var10);
			return 1;
		}
		else if (iVar21 == 1)
		{
			if (func_138(Var10))
			{
				func_140(Global_106070.f_7660.f_765[iVar20 /*10*/]);
				Global_106070.f_7660.f_765[iVar20 /*10*/] = { Var10 };
				func_139(&Var10);
				return 1;
			}
			else
			{
				if (!func_138(Global_106070.f_7660.f_765[iVar20 /*10*/]))
				{
					Global_106070.f_7660.f_765[iVar20 /*10*/] = { Var10 };
					func_139(&Var10);
					return 1;
				}
				func_139(&Var10);
				return 1;
			}
		}
		else
		{
			func_140(Var10);
			func_139(&Var10);
			return 1;
		}
	}
	return 0;
}

int func_138(struct<9> Param0, var uParam9)
{
	if (Param0.f_8 == 0)
	{
		return 0;
	}
	return 1;
}

void func_139(var uParam0)
{
	struct<10> Var0;
	
	*uParam0 = { Var0 };
}

void func_140(struct<10> Param0)
{
	if (func_138(Param0))
	{
		func_141(Param0.f_8, 0);
	}
}

void func_141(int iParam0, int iParam1)
{
	if (iParam0 == 235 || iParam0 == 0)
	{
		return;
	}
	Global_106070.f_8585[iParam0] = 1;
	Global_106070.f_8585.f_236[iParam0] = (GAMEPLAY::GET_GAME_TIMER() + iParam1);
}

int func_142(struct<4> Param0, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, struct<4> Param10, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19)
{
	int iVar0;
	int iVar1;
	
	iVar0 = Param0.f_3;
	iVar1 = Param10.f_3;
	if (iVar0 > iVar1)
	{
		return 2;
	}
	if (iVar0 < iVar1)
	{
		return 0;
	}
	return 1;
}

void func_143(int iParam0)
{
	int iVar0;
	
	*iParam0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_106070.f_7660.f_866)
	{
		if (func_142(Global_106070.f_7660.f_765[iVar0 /*10*/], Global_106070.f_7660.f_765[*iParam0 /*10*/]) == 0)
		{
			*iParam0 = iVar0;
		}
		iVar0++;
	}
}

struct<10> func_144(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, var uParam8, var uParam9)
{
	struct<10> Var0;
	
	Var0 = uParam0;
	Var0.f_3 = func_145(iParam1);
	Var0.f_4 = (GAMEPLAY::GET_GAME_TIMER() + iParam4);
	Var0.f_5 = iParam5;
	Var0.f_1 = uParam9;
	Var0.f_2 = iParam2;
	Var0.f_6 = iParam3;
	Var0.f_7 = iParam6;
	Var0.f_8 = iParam7;
	Var0.f_9 = uParam8;
	GAMEPLAY::CLEAR_BIT(&(Var0.f_1), 0);
	return Var0;
}

int func_145(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 4:
			return 5;
			break;
		
		case 7:
			return 4;
			break;
		
		case 2:
			return 3;
			break;
		
		case 1:
			return 2;
			break;
		
		case 3:
			return 1;
			break;
		
		case 5:
		case 6:
			return 0;
			break;
	}
	return 7;
}

void func_146(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_150(iParam0, 2, 1))
		{
			func_149(iParam0, 2, 1);
		}
	}
	else if (func_150(iParam0, 2, 1))
	{
		func_147(iParam0, 2, 1);
	}
}

void func_147(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		GAMEPLAY::CLEAR_BIT(&(Global_93284.f_1336[iParam0]), iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_121() == 0)
		{
			uVar0 = func_9(func_148(iParam0), -1, 0);
			GAMEPLAY::CLEAR_BIT(&uVar0, iParam1);
			func_6(func_148(iParam0), uVar0, -1, 1, 0);
		}
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&(Global_106070.f_668[iParam0]), iParam1);
	}
}

int func_148(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 827;
			break;
		
		case 1:
			return 828;
			break;
		
		case 2:
			return 829;
			break;
		
		case 3:
			return 830;
			break;
		
		case 4:
			return 831;
			break;
		
		case 5:
			return 832;
			break;
		
		case 6:
			return 833;
			break;
		
		case 7:
			return 834;
			break;
		
		case 8:
			return 835;
			break;
		
		case 9:
			return 836;
			break;
		
		case 10:
			return 837;
			break;
		
		case 11:
			return 838;
			break;
		
		case 12:
			return 839;
			break;
		
		case 13:
			return 840;
			break;
		
		case 14:
			return 841;
			break;
		
		case 15:
			return 843;
			break;
		
		case 16:
			return 844;
			break;
		
		case 17:
			return 845;
			break;
		
		case 18:
			return 846;
			break;
		
		case 19:
			return 847;
			break;
		
		case 20:
			return 848;
			break;
		
		case 21:
			return 849;
			break;
		
		case 22:
			return 850;
			break;
		
		case 23:
			return 851;
			break;
		
		case 24:
			return 852;
			break;
		
		case 25:
			return 853;
			break;
		
		case 26:
			return 854;
			break;
		
		case 27:
			return 855;
			break;
		
		case 28:
			return 856;
			break;
		
		case 29:
			return 857;
			break;
		
		case 30:
			return 858;
			break;
		
		case 31:
			return 859;
			break;
		
		case 32:
			return 860;
			break;
		
		case 33:
			return 861;
			break;
		
		case 34:
			return 862;
			break;
		
		case 35:
			return 863;
			break;
		
		case 36:
			return 864;
			break;
		
		case 37:
			return 865;
			break;
		
		case 38:
			return 866;
			break;
		
		case 39:
			return 867;
			break;
		
		case 40:
			return 871;
			break;
		
		case 41:
			return 872;
			break;
		
		case 42:
			return 873;
			break;
		
		case 43:
			return 874;
			break;
		
		case 44:
			return 8488;
			break;
		
		case 45:
			return 3808;
			break;
		
		case 46:
			return 5383;
			break;
		
		case 47:
			return 6155;
			break;
		
		case 48:
			return 7232;
			break;
		
		case 49:
			return 7878;
			break;
		
		default:
			break;
	}
	return 9954;
}

void func_149(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		GAMEPLAY::SET_BIT(&(Global_93284.f_1336[iParam0]), iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_121() == 0)
		{
			uVar0 = func_9(func_148(iParam0), -1, 0);
			GAMEPLAY::SET_BIT(&uVar0, iParam1);
			func_6(func_148(iParam0), uVar0, -1, 1, 0);
		}
	}
	else
	{
		GAMEPLAY::SET_BIT(&(Global_106070.f_668[iParam0]), iParam1);
	}
}

int func_150(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	if (bParam2)
	{
		return GAMEPLAY::IS_BIT_SET(Global_93284.f_1336[iParam0], iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_121() == 0)
		{
			return GAMEPLAY::IS_BIT_SET(func_9(func_148(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return GAMEPLAY::IS_BIT_SET(Global_106070.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_151(int iParam0)
{
	if (func_154())
	{
		Global_106060 = 1;
		Global_106057 = GAMEPLAY::GET_GAME_TIMER();
		if (func_125(Global_106059))
		{
			func_152(0);
		}
		UI::SET_MISSION_NAME(1, "RE_TITLE");
		if (iParam0 && func_125(Global_106059))
		{
			UI::FLASH_MINIMAP_DISPLAY();
		}
		return 1;
	}
	return 0;
}

void func_152(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_106070.f_24967.f_2 < 3)
			{
				if (!UI::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_77(func_153(iParam0), -1);
					Global_106070.f_24967.f_2++;
					GAMEPLAY::SET_BIT(&Global_106066, 0);
				}
			}
			break;
		
		case 1:
			if (!GAMEPLAY::IS_BIT_SET(Global_106066, 1))
			{
				if (!UI::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_77(func_153(iParam0), -1);
					Global_106070.f_24967.f_3++;
					GAMEPLAY::SET_BIT(&Global_106066, 1);
				}
			}
			break;
		
		case 2:
			if (!GAMEPLAY::IS_BIT_SET(Global_106066, 2))
			{
				if (!UI::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_77(func_153(iParam0), -1);
					Global_106070.f_24967.f_4++;
					GAMEPLAY::SET_BIT(&Global_106066, 2);
				}
			}
			break;
	}
}

char* func_153(int iParam0)
{
	char* sVar0;
	
	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			sVar0 = "AM_H_REFS";
			break;
		
		case 1:
			sVar0 = "RE_FLASHBLIP";
			break;
		
		case 2:
			sVar0 = "RE_HANDOVER";
			break;
	}
	return sVar0;
}

int func_154()
{
	switch (func_155(&Global_25518, 0, 5, 0, SCRIPT::GET_ID_OF_THIS_THREAD()))
	{
		case 1:
			return 1;
			break;
		
		case 0:
			return 1;
			break;
	}
	return 0;
}

int func_155(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_90805.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_159(0))
		{
			return 0;
		}
		Global_36081++;
		*uParam0 = Global_36081;
		PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::GET_PLAYER_INDEX(), 0);
		Global_17228.f_5 = 0;
		if (iParam2 != 5)
		{
			PLAYER::FORCE_CLEANUP(8);
		}
		Global_36117 = iParam2;
		Global_36079 = *uParam0;
		Global_36080 = iParam4;
		Global_36078 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_36078 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_36078)
			{
				if (Global_36084[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_36079 == *uParam0)
		{
			return 1;
		}
		*uParam0 = -1;
	}
	if (*uParam0 == -1)
	{
		if (!func_157(iParam2))
		{
			return 0;
		}
		if (Global_36078 == 8)
		{
			return 0;
		}
		Global_36081++;
		*uParam0 = Global_36081;
		Global_36084[Global_36078 /*4*/] = Global_36081;
		Global_36084[Global_36078 /*4*/].f_1 = iParam1;
		Global_36084[Global_36078 /*4*/].f_2 = iParam2;
		Global_36084[Global_36078 /*4*/].f_3 = 0;
		Global_36078++;
		if (iParam4 != 0)
		{
			func_156(uParam0, iParam4);
		}
	}
	return 2;
}

void func_156(var uParam0, int iParam1)
{
	int iVar0;
	
	if (Global_36078 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_36078)
	{
		if (Global_36084[iVar0 /*4*/] == *uParam0)
		{
			Global_36084[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

bool func_157(int iParam0)
{
	return func_158(iParam0, Global_36117);
}

int func_158(int iParam0, int iParam1)
{
	if (iParam1 == 15)
	{
		return 1;
	}
	if (iParam0 == 15)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 16:
			switch (iParam1)
			{
				case 9:
				case 10:
				case 7:
				case 13:
				case 14:
					return 0;
					break;
			}
			return 1;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 5:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 2:
		case 3:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 4:
			if (iParam1 == 17)
			{
				return 1;
			}
			break;
		
		case 5:
			break;
		
		case 6:
		case 8:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 7:
			if (iParam1 == 6)
			{
				return 1;
			}
			break;
		
		case 9:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 11:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 17:
				case 12:
				case 5:
					return 1;
					break;
			}
			break;
		
		case 18:
		case 12:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
					return 1;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

int func_159(int iParam0)
{
	if (Global_36117 == 15)
	{
		return 0;
	}
	if (func_157(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_160()
{
	float fVar0;
	
	switch (iLocal_301)
	{
		case 1:
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -2300.317f, 4179.612f, 36.98159f, -2191.317f, 4368.794f, 74.89676f, 70.75f, 0, 1, 0))
			{
				return 1;
			}
			break;
		
		case 2:
			if (bLocal_61)
			{
				fVar0 = 80f;
			}
			else
			{
				fVar0 = 80f;
			}
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -487.5048f, -2157.99f, 8.2627f, fVar0, fVar0, 40f, 0, 1, 0))
			{
				return 1;
			}
			break;
	}
	if (CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
	{
		if (!PED::IS_PED_INJURED(uLocal_75))
		{
			if (ENTITY::IS_ENTITY_ON_SCREEN(uLocal_75))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_161(int iParam0)
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;
	
	vVar1 = { 6f, 6f, 6f };
	vVar4 = { -6f, -6f, -6f };
	if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
	{
		if (!PED::IS_PED_INJURED(uLocal_75))
		{
			if (iParam0 == 0 || func_108(uLocal_75, uLocal_76, 1) > 15f)
			{
				if (GAMEPLAY::IS_BULLET_IN_AREA(PED::GET_PED_BONE_COORDS(uLocal_75, 31086, 0f, 0f, 0f), 4f, 0))
				{
					bVar0 = true;
				}
				vVar1 = { vVar1 + PED::GET_PED_BONE_COORDS(uLocal_75, 31086, 0f, 0f, 0f) };
				vVar4 = { vVar4 + PED::GET_PED_BONE_COORDS(uLocal_75, 31086, 0f, 0f, 0f) };
				if ((GAMEPLAY::IS_PROJECTILE_TYPE_IN_AREA(vVar4, vVar1, joaat("weapon_smokegrenade"), 1) || GAMEPLAY::IS_PROJECTILE_TYPE_IN_AREA(vVar4, vVar1, joaat("weapon_grenade"), 1)) || GAMEPLAY::IS_PROJECTILE_TYPE_IN_AREA(vVar4, vVar1, joaat("weapon_stickybomb"), 1))
				{
					bVar0 = true;
				}
			}
			if (GRAPHICS::_0x2F09F7976C512404(PED::GET_PED_BONE_COORDS(uLocal_75, 31086, 0f, 0f, 0f), 6f))
			{
				bVar0 = true;
			}
			if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, PED::GET_PED_BONE_COORDS(uLocal_75, 31086, 0f, 0f, 0f), 6f))
			{
				bVar0 = true;
			}
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uLocal_75, PLAYER::PLAYER_PED_ID(), 1))
			{
				bVar0 = true;
			}
		}
	}
	if (bVar0)
	{
	}
	return bVar0;
}

int func_162(int iParam0)
{
	if (func_3(iParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
		{
			if (!FIRE::IS_ENTITY_ON_FIRE(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_163()
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	char* sVar10;
	char* sVar11;
	char* sVar12;
	
	vVar3 = { vLocal_99 };
	fVar6 = fLocal_111;
	switch (iLocal_301)
	{
		case 1:
			vLocal_96 = { -2257.482f, 4266.638f, 44.5095f };
			fLocal_110 = 293.9091f;
			vLocal_99 = { -2253.763f, 4273.17f, 44.977f };
			fLocal_111 = 185.5212f;
			iVar7 = joaat("a_f_y_vinewood_04");
			iVar9 = joaat("peyote");
			iVar8 = joaat("g_m_y_salvagoon_01");
			sVar10 = "CThiefVictim";
			sVar11 = "A_F_Y_VINEWOOD_04_WHITE_MINI_02";
			sLocal_287 = "RECT1_ATTR";
			sLocal_288 = "RECT1_HELP";
			sLocal_289 = "RECT1_FYOU";
			sLocal_290 = "RECT1_JOY";
			sLocal_291 = "RECT1_OK";
			sLocal_292 = "RECT1_BAD";
			sLocal_293 = "RECT1_GOOD";
			cLocal_294 = "RECT1AU";
			sLocal_83 = "RANDOM@CAR_THIEF@waiting_ig_4";
			sLocal_85 = "random@car_thief@waving_ig_1";
			vLocal_102 = { -2270.632f, 4287.437f, 44.9008f };
			fLocal_57 = 3f;
			if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), vLocal_96) < SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), vLocal_99))
			{
				vVar3 = { vLocal_96 };
				fVar6 = fLocal_110;
				bLocal_61 = true;
				sLocal_84 = "random@car_thief@waving_ig_2";
				sLocal_86 = "waving_l";
			}
			else
			{
				sLocal_86 = "waving";
				sLocal_84 = "random@car_thief@waving_ig_1";
				vVar3 = { vLocal_99 };
				fVar6 = fLocal_111;
			}
			break;
		
		case 2:
			vLocal_99 = { -538.6718f, -2183.442f, 5.2336f };
			vLocal_96 = { -365.7f, -2179.26f, 9.3184f };
			iVar7 = joaat("a_f_y_indian_01");
			iVar9 = joaat("rocoto");
			iVar8 = joaat("a_m_m_soucent_04");
			sVar10 = "CThiefGolfer";
			sVar12 = "A_M_M_SOUCENT_04_BLACK_MINI_01";
			sLocal_287 = "RECT2_ATTR";
			sLocal_288 = "RECT2_HELP";
			sLocal_289 = "RECT2_FYOU";
			sLocal_290 = "RECT2_JOY";
			sLocal_291 = "RECT2_OK";
			sLocal_292 = "RECT2_BAD";
			sLocal_293 = "RECT2_GOOD";
			cLocal_294 = "RECT2AU";
			sLocal_83 = "RANDOM@CAR_THIEF@waiting_ig_4";
			sLocal_84 = "RANDOM@CAR_THIEF@VICTIMPOINTS_IG_3";
			sLocal_85 = "RANDOM@CAR_THIEF@VICTIMPOINTS_IG_3";
			vLocal_102 = { -505.1966f, -2159.228f, 7.6466f };
			fLocal_56 = 15f;
			fLocal_57 = 3f;
			if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), vLocal_96) < SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), vLocal_99))
			{
				bLocal_61 = true;
			}
			break;
	}
	STREAMING::REQUEST_MODEL(iVar7);
	STREAMING::REQUEST_MODEL(iVar8);
	STREAMING::REQUEST_MODEL(iVar9);
	STREAMING::REQUEST_ANIM_DICT(sLocal_83);
	STREAMING::REQUEST_ANIM_DICT(sLocal_84);
	STREAMING::REQUEST_ANIM_DICT(sLocal_85);
	STREAMING::REQUEST_ANIM_DICT("RANDOM@CAR_THIEF@WAITING_IG_4");
	STREAMING::REQUEST_PTFX_ASSET();
	if (((((((STREAMING::HAS_MODEL_LOADED(iVar7) && STREAMING::HAS_MODEL_LOADED(iVar8)) && STREAMING::HAS_MODEL_LOADED(iVar9)) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_83)) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_84)) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_85)) && STREAMING::HAS_ANIM_DICT_LOADED("RANDOM@CAR_THIEF@WAITING_IG_4")) && STREAMING::HAS_PTFX_ASSET_LOADED())
	{
		if (iLocal_301 == 1)
		{
			func_177("re_cartheft - Distance to vTop = ", SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), vLocal_96));
			func_177("re_cartheft - Distance to vBottom = ", SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), vLocal_99));
			iLocal_77 = VEHICLE::CREATE_VEHICLE(iVar9, vVar3, fVar6, 1, 1, 0);
			VEHICLE::_SET_VEHICLE_DOOR_CAN_BREAK(iLocal_77, 0, 0);
			VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iLocal_77, 0);
			VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_77, 1);
			VEHICLE::_0x51BB2D88D31A914B(iLocal_77, 0);
			VEHICLE::_0x192547247864DFDD(iLocal_77, 0);
			VEHICLE::SET_VEHICLE_EXTRA(iLocal_77, 2, 0);
			uLocal_76 = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_77, 22, iVar8, -1, 1, 1);
			PED::SET_PED_CONFIG_FLAG(uLocal_76, 42, 1);
			PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_76, 3, 1);
			WEAPON::GIVE_WEAPON_TO_PED(uLocal_76, joaat("weapon_pistol"), -1, 1, 1);
			PED::SET_PED_ACCURACY(uLocal_76, 10);
			PED::SET_DRIVER_ABILITY(uLocal_76, 1f);
			PED::SET_DRIVER_RACING_MODIFIER(uLocal_76, 1f);
			VEHICLE::SET_VEHICLE_COLOURS(iLocal_77, 135, 135);
			PED::ADD_RELATIONSHIP_GROUP("re_cartheft relGroupThief", &uLocal_329);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, uLocal_329, 1862763509);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, uLocal_329, 45677184);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, 45677184, uLocal_329);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_76, uLocal_329);
			ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_77, 1);
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				vVar0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) - vLocal_52 };
				uLocal_55 = GAMEPLAY::GET_HEADING_FROM_VECTOR_2D(vVar0.x, vVar0.y);
			}
			uLocal_75 = PED::CREATE_PED(5, iVar7, vLocal_52, uLocal_55, 1, 1);
			AUDIO::SET_AMBIENT_VOICE_NAME(uLocal_75, sVar11);
			AI::TASK_LOOK_AT_ENTITY(uLocal_75, PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
			PED::SET_PED_COMPONENT_VARIATION(uLocal_75, 0, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(uLocal_75, 2, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uLocal_75, 3, 1, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(uLocal_75, 4, 1, 1, 0);
			AUDIO::STOP_PED_SPEAKING(uLocal_75, 1);
			if (bLocal_61)
			{
				vLocal_90 = { -2254.413f, 4270.227f, 44.8028f };
				fLocal_105 = 124.6557f;
				vLocal_87 = { -2252.683f, 4274.16f, 45.0612f };
				vLocal_93 = { -2257.825f, 4269.189f, 44.6334f };
				fLocal_106 = 272.8688f;
				vLocal_113 = { -2258.04f, 4272.244f, 45.75466f };
				vLocal_116 = { 1.729481f, 0f, -114.9352f };
			}
			else
			{
				vLocal_90 = { -2253.634f, 4269.119f, 44.7686f };
				fLocal_105 = 336.143f;
				vLocal_93 = { -2255.733f, 4271.32f, 44.8166f };
				fLocal_106 = 179.4774f;
				vLocal_87 = { -2257.088f, 4268.938f, 44.6456f };
				vLocal_113 = { -2254.886f, 4273.539f, 46.2282f };
				vLocal_116 = { -7.492095f, 0f, -168.1909f };
			}
		}
		else
		{
			if (bLocal_61)
			{
				iLocal_77 = VEHICLE::CREATE_VEHICLE(iVar9, -488.7506f, -2159.325f, 8.2581f, 15.0886f, 1, 1, 0);
			}
			else
			{
				iLocal_77 = VEHICLE::CREATE_VEHICLE(iVar9, -486.3563f, -2159.942f, 8.2887f, 288.8187f, 1, 1, 0);
			}
			VEHICLE::_SET_VEHICLE_DOOR_CAN_BREAK(iLocal_77, 0, 0);
			VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iLocal_77, 0);
			VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(iLocal_77, 3);
			VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_77, 1);
			VEHICLE::SET_VEHICLE_MOD_KIT(iLocal_77, 0);
			VEHICLE::SET_VEHICLE_MOD(iLocal_77, 11, 2, 0);
			VEHICLE::SET_VEHICLE_MOD(iLocal_77, 16, 3, 0);
			VEHICLE::SET_VEHICLE_MOD(iLocal_77, 12, 1, 0);
			VEHICLE::SET_VEHICLE_MOD(iLocal_77, 13, 1, 0);
			VEHICLE::SET_VEHICLE_WHEEL_TYPE(iLocal_77, 3);
			VEHICLE::SET_VEHICLE_MOD(iLocal_77, 23, 6, 0);
			VEHICLE::SET_VEHICLE_WINDOW_TINT(iLocal_77, 3);
			VEHICLE::TOGGLE_VEHICLE_MOD(iLocal_77, 18, 1);
			VEHICLE::TOGGLE_VEHICLE_MOD(iLocal_77, 22, 1);
			VEHICLE::SET_VEHICLE_COLOURS(iLocal_77, 143, 0);
			VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iLocal_77, 31, 2);
			VEHICLE::_0x51BB2D88D31A914B(iLocal_77, 0);
			VEHICLE::_0x192547247864DFDD(iLocal_77, 0);
			if (bLocal_61)
			{
				uLocal_75 = PED::CREATE_PED(5, iVar7, -490.4008f, -2160.755f, 8.2498f, 314.0037f, 1, 1);
			}
			else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -583.0884f, -2234.249f, 4.523423f, -685.1817f, -2350.904f, 17.07073f, 178f, 0, 1, 0))
			{
				uLocal_75 = PED::CREATE_PED(5, iVar7, -486.81f, -2156.99f, 8.27f, -172.34f, 1, 1);
			}
			else
			{
				uLocal_75 = PED::CREATE_PED(5, iVar7, -486.2511f, -2161.808f, 8.3041f, 353.4264f, 1, 1);
			}
			PED::SET_PED_COMPONENT_VARIATION(uLocal_75, 0, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uLocal_75, 2, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uLocal_75, 3, 1, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(uLocal_75, 4, 1, 2, 0);
			uLocal_76 = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_77, 22, iVar8, -1, 1, 1);
			WEAPON::GIVE_WEAPON_TO_PED(uLocal_76, joaat("weapon_pistol"), -1, 1, 1);
			PED::SET_PED_ACCURACY(uLocal_76, 10);
			PED::SET_DRIVER_ABILITY(uLocal_76, 1f);
			PED::SET_DRIVER_RACING_MODIFIER(uLocal_76, 1f);
			PED::SET_PED_CONFIG_FLAG(uLocal_76, 42, 1);
			AUDIO::SET_AMBIENT_VOICE_NAME(uLocal_76, sVar12);
			vLocal_90 = { -501.9105f, -2148.019f, 8.0392f };
			fLocal_105 = 294.4744f;
			vLocal_87 = { -501.0442f, -2150.799f, 8.139f };
			vLocal_93 = { -493.8062f, -2156.036f, 8.1978f };
			vLocal_113 = { -504.365f, -2144.534f, 9.8585f };
			vLocal_116 = { -6.6935f, 0f, -127.8147f };
		}
		PED::SET_PED_CAN_BE_TARGETTED(uLocal_75, 0);
		PED::SET_PED_CONFIG_FLAG(uLocal_75, 185, 1);
		VEHICLE::SET_CAN_RESPRAY_VEHICLE(iLocal_77, 0);
		VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_77, 1, 1, 0);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_75, 1);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_76, 1);
		AI::TASK_LOOK_AT_ENTITY(uLocal_75, uLocal_76, -1, 0, 2);
		VEHICLE::ADD_VEHICLE_UPSIDEDOWN_CHECK(iLocal_77);
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_77, 1);
		VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(iLocal_77, 0, 0);
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iVar9, 1);
		AUDIO::START_AUDIO_SCENE("RE_CAR_STEAL_SCENE");
		AUDIO::_DYNAMIC_MIXER_RELATED_FN(iLocal_77, "RE_CAR_STEAL_STOLEN_VEHICLE", 0);
		VEHICLE::_0x25367DE49D64CF16(iLocal_77, 1);
		PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_75, 17, 0);
		PED::SET_PED_FLEE_ATTRIBUTES(uLocal_75, 512, 1);
		switch (func_10())
		{
			case 0:
				sLocal_120 = "MICHAEL";
				break;
			
			case 1:
				sLocal_120 = "FRANKLIN";
				break;
			
			case 2:
				sLocal_120 = "TREVOR";
				break;
		}
		func_176(&Local_122, 0, PLAYER::PLAYER_PED_ID(), sLocal_120, 0, 1);
		func_176(&Local_122, 1, uLocal_75, sVar10, 0, 1);
		func_176(&Local_122, 2, uLocal_76, "CThief", 0, 1);
		return 1;
	}
	else if (func_164())
	{
		func_231();
	}
	return 0;
}

int func_164()
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), vLocal_45) < (75f * 75f))
		{
			return 1;
		}
		if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_175())
		{
			return 0;
		}
	}
	if (func_171())
	{
		return 1;
	}
	if (func_165(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_165(float fParam0, bool bParam1)
{
	struct<27> Var0;
	int iVar32;
	int iVar33;
	float fVar34;
	float fVar35;
	int iVar36;
	int iVar37;
	bool bVar38;
	
	iVar33 = -1;
	fVar34 = fParam0;
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (func_13(func_10()))
		{
			iVar36 = func_130();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (GAMEPLAY::IS_BIT_SET(Global_106070.f_18546[iVar32 /*6*/], 2) && !GAMEPLAY::IS_BIT_SET(Global_106070.f_18546[iVar32 /*6*/], 3))
				{
					func_166(iVar32, &Var0);
					fVar35 = GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), Var0.f_6, 1);
					if (fVar35 < fVar34)
					{
						bVar38 = true;
						if (bParam1)
						{
							if (iVar36 != Var0.f_26)
							{
								bVar38 = false;
							}
						}
						if (bVar38)
						{
							iVar33 = iVar32;
							fVar34 = fVar35;
						}
					}
				}
				iVar37++;
			}
		}
	}
	return iVar33;
}

void func_166(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_167(uParam1, "Abigail1", func_169(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_168(iParam0), 1, 0);
			break;
		
		case 1:
			func_167(uParam1, "Abigail2", func_169(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_168(iParam0), 1, 0);
			break;
		
		case 2:
			func_167(uParam1, "Barry1", func_169(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_168(iParam0), 1, 0);
			break;
		
		case 3:
			func_167(uParam1, "Barry2", func_169(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_168(iParam0), 1, 1);
			break;
		
		case 4:
			func_167(uParam1, "Barry3", func_169(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_168(iParam0), 0, 0);
			break;
		
		case 5:
			func_167(uParam1, "Barry3A", func_169(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_168(iParam0), 0, 1);
			break;
		
		case 6:
			func_167(uParam1, "Barry3C", func_169(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_168(iParam0), 0, 1);
			break;
		
		case 7:
			func_167(uParam1, "Barry4", func_169(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_168(iParam0), 0, 0);
			break;
		
		case 8:
			func_167(uParam1, "Dreyfuss1", func_169(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_168(iParam0), 0, 0);
			break;
		
		case 9:
			func_167(uParam1, "Epsilon1", func_169(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_168(iParam0), 0, 0);
			break;
		
		case 10:
			func_167(uParam1, "Epsilon2", func_169(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_168(iParam0), 1, 0);
			break;
		
		case 11:
			func_167(uParam1, "Epsilon3", func_169(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_168(iParam0), 0, 0);
			break;
		
		case 12:
			func_167(uParam1, "Epsilon4", func_169(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_168(iParam0), 0, 0);
			break;
		
		case 13:
			func_167(uParam1, "Epsilon5", func_169(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_168(iParam0), 1, 0);
			break;
		
		case 14:
			func_167(uParam1, "Epsilon6", func_169(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_168(iParam0), 0, 1);
			break;
		
		case 15:
			func_167(uParam1, "Epsilon7", func_169(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_168(iParam0), 0, 0);
			break;
		
		case 16:
			func_167(uParam1, "Epsilon8", func_169(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_168(iParam0), 1, 0);
			break;
		
		case 17:
			func_167(uParam1, "Extreme1", func_169(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_168(iParam0), 0, 1);
			break;
		
		case 18:
			func_167(uParam1, "Extreme2", func_169(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_168(iParam0), 0, 1);
			break;
		
		case 19:
			func_167(uParam1, "Extreme3", func_169(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_168(iParam0), 0, 1);
			break;
		
		case 20:
			func_167(uParam1, "Extreme4", func_169(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_168(iParam0), 0, 0);
			break;
		
		case 21:
			func_167(uParam1, "Fanatic1", func_169(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_168(iParam0), 1, 0);
			break;
		
		case 22:
			func_167(uParam1, "Fanatic2", func_169(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_168(iParam0), 1, 0);
			break;
		
		case 23:
			func_167(uParam1, "Fanatic3", func_169(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_168(iParam0), 0, 1);
			break;
		
		case 24:
			func_167(uParam1, "Hao1", func_169(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_168(iParam0), 0, 1);
			break;
		
		case 25:
			func_167(uParam1, "Hunting1", func_169(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_168(iParam0), 0, 1);
			break;
		
		case 26:
			func_167(uParam1, "Hunting2", func_169(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_168(iParam0), 0, 1);
			break;
		
		case 27:
			func_167(uParam1, "Josh1", func_169(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_168(iParam0), 1, 0);
			break;
		
		case 28:
			func_167(uParam1, "Josh2", func_169(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_168(iParam0), 1, 1);
			break;
		
		case 29:
			func_167(uParam1, "Josh3", func_169(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_168(iParam0), 1, 1);
			break;
		
		case 30:
			func_167(uParam1, "Josh4", func_169(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_168(iParam0), 1, 0);
			break;
		
		case 31:
			func_167(uParam1, "Maude1", func_169(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_168(iParam0), 0, 1);
			break;
		
		case 32:
			func_167(uParam1, "Minute1", func_169(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_168(iParam0), 0, 1);
			break;
		
		case 33:
			func_167(uParam1, "Minute2", func_169(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_168(iParam0), 0, 1);
			break;
		
		case 34:
			func_167(uParam1, "Minute3", func_169(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_168(iParam0), 0, 1);
			break;
		
		case 35:
			func_167(uParam1, "MrsPhilips1", func_169(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_168(iParam0), 0, 0);
			break;
		
		case 36:
			func_167(uParam1, "MrsPhilips2", func_169(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_168(iParam0), 0, 0);
			break;
		
		case 37:
			func_167(uParam1, "Nigel1", func_169(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_168(iParam0), 1, 0);
			break;
		
		case 38:
			func_167(uParam1, "Nigel1A", func_169(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_168(iParam0), 1, 1);
			break;
		
		case 39:
			func_167(uParam1, "Nigel1B", func_169(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_168(iParam0), 1, 1);
			break;
		
		case 40:
			func_167(uParam1, "Nigel1C", func_169(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_168(iParam0), 1, 1);
			break;
		
		case 41:
			func_167(uParam1, "Nigel1D", func_169(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_168(iParam0), 1, 1);
			break;
		
		case 42:
			func_167(uParam1, "Nigel2", func_169(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_168(iParam0), 1, 1);
			break;
		
		case 43:
			func_167(uParam1, "Nigel3", func_169(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_168(iParam0), 1, 1);
			break;
		
		case 44:
			func_167(uParam1, "Omega1", func_169(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_168(iParam0), 0, 0);
			break;
		
		case 45:
			func_167(uParam1, "Omega2", func_169(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_168(iParam0), 0, 0);
			break;
		
		case 46:
			func_167(uParam1, "Paparazzo1", func_169(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_168(iParam0), 0, 1);
			break;
		
		case 47:
			func_167(uParam1, "Paparazzo2", func_169(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_168(iParam0), 0, 1);
			break;
		
		case 48:
			func_167(uParam1, "Paparazzo3", func_169(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_168(iParam0), 0, 0);
			break;
		
		case 49:
			func_167(uParam1, "Paparazzo3A", func_169(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_168(iParam0), 0, 1);
			break;
		
		case 50:
			func_167(uParam1, "Paparazzo3B", func_169(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_168(iParam0), 0, 1);
			break;
		
		case 51:
			func_167(uParam1, "Paparazzo4", func_169(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_168(iParam0), 0, 0);
			break;
		
		case 52:
			func_167(uParam1, "Rampage1", func_169(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_168(iParam0), 0, 0);
			break;
		
		case 54:
			func_167(uParam1, "Rampage3", func_169(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_168(iParam0), 1, 0);
			break;
		
		case 55:
			func_167(uParam1, "Rampage4", func_169(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_168(iParam0), 1, 0);
			break;
		
		case 56:
			func_167(uParam1, "Rampage5", func_169(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_168(iParam0), 0, 0);
			break;
		
		case 53:
			func_167(uParam1, "Rampage2", func_169(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_168(iParam0), 1, 0);
			break;
		
		case 57:
			func_167(uParam1, "TheLastOne", func_169(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_168(iParam0), 0, 1);
			break;
		
		case 58:
			func_167(uParam1, "Tonya1", func_169(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_168(iParam0), 0, 1);
			break;
		
		case 59:
			func_167(uParam1, "Tonya2", func_169(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_168(iParam0), 0, 1);
			break;
		
		case 60:
			func_167(uParam1, "Tonya3", func_169(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_168(iParam0), 0, 1);
			break;
		
		case 61:
			func_167(uParam1, "Tonya4", func_169(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_168(iParam0), 0, 1);
			break;
		
		case 62:
			func_167(uParam1, "Tonya5", func_169(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_168(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_167(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, vector3 vParam7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)
{
	uParam0->f_4 = iParam5;
	*uParam0 = sParam1;
	uParam0->f_1 = { Param2 };
	uParam0->f_3 = iParam4;
	uParam0->f_5 = iParam6;
	uParam0->f_6 = { vParam7 };
	uParam0->f_9 = iParam10;
	StringCopy(&(uParam0->f_10), sParam11, 16);
	uParam0->f_14 = iParam12;
	uParam0->f_15 = iParam13;
	StringCopy(&(uParam0->f_16), sParam14, 24);
	uParam0->f_22 = iParam15;
	uParam0->f_23 = iParam16;
	uParam0->f_24 = iParam17;
	uParam0->f_25 = iParam18;
	uParam0->f_26 = iParam19;
	uParam0->f_27 = iParam20;
	uParam0->f_28 = iParam21;
	uParam0->f_29 = uParam22;
	uParam0->f_30 = iParam23;
	uParam0->f_31 = iParam24;
}

int func_168(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 1;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 1;
			break;
		
		case 6:
			return 1;
			break;
		
		case 7:
			return 0;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 0;
			break;
		
		case 10:
			return 0;
			break;
		
		case 11:
			return 0;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 0;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 0;
			break;
		
		case 16:
			return 1;
			break;
		
		case 17:
			return 1;
			break;
		
		case 18:
			return 1;
			break;
		
		case 19:
			return 1;
			break;
		
		case 20:
			return 1;
			break;
		
		case 21:
			return 1;
			break;
		
		case 22:
			return 1;
			break;
		
		case 23:
			return 1;
			break;
		
		case 24:
			return 1;
			break;
		
		case 25:
			return 1;
			break;
		
		case 26:
			return 1;
			break;
		
		case 27:
			return 0;
			break;
		
		case 28:
			return 1;
			break;
		
		case 29:
			return 1;
			break;
		
		case 30:
			return 1;
			break;
		
		case 31:
			return 0;
			break;
		
		case 32:
			return 1;
			break;
		
		case 33:
			return 1;
			break;
		
		case 34:
			return 1;
			break;
		
		case 35:
			return 0;
			break;
		
		case 36:
			return 0;
			break;
		
		case 37:
			return 0;
			break;
		
		case 38:
			return 1;
			break;
		
		case 39:
			return 1;
			break;
		
		case 40:
			return 1;
			break;
		
		case 41:
			return 1;
			break;
		
		case 42:
			return 1;
			break;
		
		case 43:
			return 1;
			break;
		
		case 44:
			return 0;
			break;
		
		case 45:
			return 0;
			break;
		
		case 46:
			return 1;
			break;
		
		case 47:
			return 1;
			break;
		
		case 48:
			return 0;
			break;
		
		case 49:
			return 1;
			break;
		
		case 50:
			return 1;
			break;
		
		case 51:
			return 1;
			break;
		
		case 52:
			return 1;
			break;
		
		case 54:
			return 1;
			break;
		
		case 55:
			return 1;
			break;
		
		case 56:
			return 1;
			break;
		
		case 53:
			return 1;
			break;
		
		case 57:
			return 1;
			break;
		
		case 58:
			return 1;
			break;
		
		case 59:
			return 1;
			break;
		
		case 60:
			return 1;
			break;
		
		case 61:
			return 1;
			break;
		
		case 62:
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

struct<2> func_169(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_170(iParam0) };
	if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_170(int iParam0)
{
	struct<2> Var0;
	
	StringCopy(&Var0, "", 8);
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "ABI1", 8);
			break;
		
		case 1:
			StringCopy(&Var0, "ABI2", 8);
			break;
		
		case 2:
			StringCopy(&Var0, "BA1", 8);
			break;
		
		case 3:
			StringCopy(&Var0, "BA2", 8);
			break;
		
		case 4:
			StringCopy(&Var0, "BA3", 8);
			break;
		
		case 5:
			StringCopy(&Var0, "BA3A", 8);
			break;
		
		case 6:
			StringCopy(&Var0, "BA3C", 8);
			break;
		
		case 7:
			StringCopy(&Var0, "BA4", 8);
			break;
		
		case 8:
			StringCopy(&Var0, "DRE1", 8);
			break;
		
		case 9:
			StringCopy(&Var0, "EPS1", 8);
			break;
		
		case 10:
			StringCopy(&Var0, "EPS2", 8);
			break;
		
		case 11:
			StringCopy(&Var0, "EPS3", 8);
			break;
		
		case 12:
			StringCopy(&Var0, "EPS4", 8);
			break;
		
		case 13:
			StringCopy(&Var0, "EPS5", 8);
			break;
		
		case 14:
			StringCopy(&Var0, "EPS6", 8);
			break;
		
		case 15:
			StringCopy(&Var0, "EPS7", 8);
			break;
		
		case 16:
			StringCopy(&Var0, "EPS8", 8);
			break;
		
		case 17:
			StringCopy(&Var0, "EXT1", 8);
			break;
		
		case 18:
			StringCopy(&Var0, "EXT2", 8);
			break;
		
		case 19:
			StringCopy(&Var0, "EXT3", 8);
			break;
		
		case 20:
			StringCopy(&Var0, "EXT4", 8);
			break;
		
		case 21:
			StringCopy(&Var0, "FAN1", 8);
			break;
		
		case 22:
			StringCopy(&Var0, "FAN2", 8);
			break;
		
		case 23:
			StringCopy(&Var0, "FAN3", 8);
			break;
		
		case 24:
			StringCopy(&Var0, "HAO1", 8);
			break;
		
		case 25:
			StringCopy(&Var0, "HUN1", 8);
			break;
		
		case 26:
			StringCopy(&Var0, "HUN2", 8);
			break;
		
		case 27:
			StringCopy(&Var0, "JOS1", 8);
			break;
		
		case 28:
			StringCopy(&Var0, "JOS2", 8);
			break;
		
		case 29:
			StringCopy(&Var0, "JOS3", 8);
			break;
		
		case 30:
			StringCopy(&Var0, "JOS4", 8);
			break;
		
		case 31:
			StringCopy(&Var0, "MAU1", 8);
			break;
		
		case 32:
			StringCopy(&Var0, "MIN1", 8);
			break;
		
		case 33:
			StringCopy(&Var0, "MIN2", 8);
			break;
		
		case 34:
			StringCopy(&Var0, "MIN3", 8);
			break;
		
		case 35:
			StringCopy(&Var0, "MRS1", 8);
			break;
		
		case 36:
			StringCopy(&Var0, "MRS2", 8);
			break;
		
		case 37:
			StringCopy(&Var0, "NI1", 8);
			break;
		
		case 38:
			StringCopy(&Var0, "NI1A", 8);
			break;
		
		case 39:
			StringCopy(&Var0, "NI1B", 8);
			break;
		
		case 40:
			StringCopy(&Var0, "NI1C", 8);
			break;
		
		case 41:
			StringCopy(&Var0, "NI1D", 8);
			break;
		
		case 42:
			StringCopy(&Var0, "NI2", 8);
			break;
		
		case 43:
			StringCopy(&Var0, "NI3", 8);
			break;
		
		case 44:
			StringCopy(&Var0, "OME1", 8);
			break;
		
		case 45:
			StringCopy(&Var0, "OME2", 8);
			break;
		
		case 46:
			StringCopy(&Var0, "PA1", 8);
			break;
		
		case 47:
			StringCopy(&Var0, "PA2", 8);
			break;
		
		case 48:
			StringCopy(&Var0, "PA3", 8);
			break;
		
		case 49:
			StringCopy(&Var0, "PA3A", 8);
			break;
		
		case 50:
			StringCopy(&Var0, "PA3B", 8);
			break;
		
		case 51:
			StringCopy(&Var0, "PA4", 8);
			break;
		
		case 52:
			StringCopy(&Var0, "RAM1", 8);
			break;
		
		case 53:
			StringCopy(&Var0, "RAM2", 8);
			break;
		
		case 54:
			StringCopy(&Var0, "RAM3", 8);
			break;
		
		case 55:
			StringCopy(&Var0, "RAM4", 8);
			break;
		
		case 56:
			StringCopy(&Var0, "RAM5", 8);
			break;
		
		case 57:
			StringCopy(&Var0, "SAS1", 8);
			break;
		
		case 58:
			StringCopy(&Var0, "TON1", 8);
			break;
		
		case 59:
			StringCopy(&Var0, "TON2", 8);
			break;
		
		case 60:
			StringCopy(&Var0, "TON3", 8);
			break;
		
		case 61:
			StringCopy(&Var0, "TON4", 8);
			break;
		
		case 62:
			StringCopy(&Var0, "TON5", 8);
			break;
		
		default:
			break;
	}
	return Var0;
}

int func_171()
{
	if (func_174() && !func_175())
	{
		return 1;
	}
	if (func_173() && func_172())
	{
		return 1;
	}
	return 0;
}

bool func_172()
{
	return Global_105788 > 0;
}

int func_173()
{
	if (Global_90249 != -1)
	{
		return 1;
	}
	return 0;
}

int func_174()
{
	if (Global_90249 != -1)
	{
		return GAMEPLAY::IS_BIT_SET(Global_84115[Global_90249 /*34*/].f_15, 20);
	}
	return 0;
}

int func_175()
{
	if (GAMEPLAY::IS_PC_VERSION())
	{
		if (GAMEPLAY::_0xD10282B6E3751BA0() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

void func_176(var uParam0, int iParam1, var uParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = uParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_71205)
	{
		if (!PED::IS_PED_INJURED(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(uParam2, 0);
			}
			else
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(uParam2, 1);
			}
		}
		if (!PED::IS_PED_INJURED(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(uParam2, 0);
			}
			else
			{
				PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(uParam2, 1);
			}
		}
	}
}

void func_177(char* sParam0, float fParam1)
{
	func_179(sParam0);
	func_178(fParam1);
}

void func_178(float fParam0)
{
	if (fParam0 != 0f)
	{
	}
}

void func_179(var uParam0)
{
	if (GAMEPLAY::ARE_STRINGS_EQUAL(uParam0, uParam0))
	{
	}
}

int func_180()
{
	if (!func_157(5))
	{
		return 1;
	}
	if (func_171())
	{
		return 1;
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_175())
		{
			return 0;
		}
	}
	if (func_165(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_181()
{
	if ((Global_106059 == func_134() && GAMEPLAY::GET_RANDOM_EVENT_FLAG()) && Global_106060)
	{
		return 1;
	}
	return 0;
}

void func_182()
{
	if (func_110(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0) != iLocal_77 && PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0) != iLocal_80)
			{
				iLocal_80 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
			}
		}
	}
}

void func_183(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	if (*uParam1 == -99)
	{
		*uParam1 = GAMEPLAY::GET_GAME_TIMER();
	}
	if (UI::DOES_BLIP_EXIST(uParam0))
	{
		iVar0 = (GAMEPLAY::GET_GAME_TIMER() - *uParam1);
		if (iVar0 < 5000)
		{
			iVar1 = SYSTEM::CEIL((SYSTEM::TO_FLOAT(iVar0) / 1000f));
			if ((iVar1 * 1000 - iVar0) < 500)
			{
				if (UI::GET_BLIP_ALPHA(uParam0) != 255)
				{
					UI::SET_BLIP_ALPHA(uParam0, 255);
				}
			}
			else if (UI::GET_BLIP_ALPHA(uParam0) != 0)
			{
				UI::SET_BLIP_ALPHA(uParam0, 0);
			}
		}
		else if (*uParam1 != -100)
		{
			*uParam1 = -100;
			if (UI::GET_BLIP_ALPHA(uParam0) != 255)
			{
				UI::SET_BLIP_ALPHA(uParam0, 255);
			}
		}
	}
}

void func_184()
{
}

void func_185(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_134();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_187(iParam0);
	GAMEPLAY::_0x65D2EBB47E1CEC21(0);
	GAMEPLAY::SET_RANDOM_EVENT_FLAG(1);
	Global_106056 = 0;
	func_186();
}

void func_186()
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)), 1);
		}
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, 0);
	}
}

void func_187(int iParam0)
{
	Global_106059 = iParam0;
}

int func_188(vector3 vParam0, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	vector3 vVar1;
	int iVar4;
	vector3 vVar5;
	int iVar8;
	
	if (!Global_144510)
	{
		return 0;
	}
	if (iParam3 == -1)
	{
		iParam3 = func_134();
	}
	if (iParam3 == -1)
	{
		return 0;
	}
	if (iParam3 == 31 || iParam3 == 32)
	{
		if (!func_228())
		{
			return 0;
		}
	}
	vLocal_45 = { vParam0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			vVar1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
			if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_175())
			{
				return 0;
			}
		}
		if (!Global_106070.f_9057)
		{
			return 0;
		}
		if (func_117(0))
		{
			return 0;
		}
		if (func_171())
		{
			return 0;
		}
		if (func_227())
		{
			return 0;
		}
		if (Global_106059 != -1)
		{
			return 0;
		}
		if (func_13(func_10()))
		{
			if (func_165(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !bParam6)
		{
			if ((vVar1.z - vLocal_45.z) > 50f)
			{
				return 0;
			}
		}
		if (!func_226(iParam3))
		{
			return 0;
		}
		if (func_13(func_10()))
		{
			if (func_225(func_10()) == 4 || func_225(func_10()) == 5)
			{
				return 0;
			}
		}
		if (func_13(func_10()))
		{
			if (!func_224(iParam3, iParam4, 145))
			{
				return 0;
			}
		}
		if (!func_223(Global_106070.f_24967.f_43[iParam3]))
		{
			return 0;
		}
		if ((GAMEPLAY::GET_GAME_TIMER() - Global_106061) < 150000)
		{
			if (iParam3 != 30)
			{
				return 0;
			}
		}
		if (func_222())
		{
			return 0;
		}
		if (GAMEPLAY::GET_MISSION_FLAG())
		{
			return 0;
		}
		if (GAMEPLAY::GET_RANDOM_EVENT_FLAG())
		{
			return 0;
		}
		if (!func_213(4))
		{
			return 0;
		}
		if (!func_157(5))
		{
			return 0;
		}
		if (func_212(iParam3, iParam4) && !bParam5)
		{
			return 0;
		}
		if (Global_3 && iParam3 != 10)
		{
			return 0;
		}
		if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID())))
		{
			if ((INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(377.153f, -717.567f, 10.0536f) || INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(320.9934f, 265.2515f, 82.1221f)) || INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(-1425.564f, -244.3f, 15.8053f))
			{
				return 0;
			}
		}
		if ((iParam3 == 9 && (iParam4 == 2 || iParam4 == 5)) && !func_212(0, 0))
		{
			return 0;
		}
		if (Global_25605)
		{
			return 0;
		}
		if (func_226(30) && !func_212(30, 0))
		{
			if (iParam3 != 30)
			{
				if (SYSTEM::VDIST2(vVar1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_13(func_10()))
		{
			iVar4 = 0;
			while (iVar4 < 3)
			{
				vVar5 = { Global_106070.f_2355.f_539.f_2280[iVar4 /*3*/] };
				iVar8 = Global_106070.f_2355.f_539.f_2276[iVar4];
				if (func_211(iVar8))
				{
					if (func_189(iVar4))
					{
						if (!func_92(vVar5, 0f, 0f, 0f, 0))
						{
							if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), vVar5) < (210f * 210f))
							{
								if (func_10() != iVar4)
								{
									return 0;
								}
							}
						}
					}
				}
				iVar4++;
			}
		}
	}
	return 1;
}

bool func_189(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_106070.f_2355.f_539.f_2276[iParam0];
	return func_190(iVar0);
}

int func_190(int iParam0)
{
	return func_191(iParam0, 1);
}

int func_191(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_211(iParam0))
	{
		return 0;
	}
	func_192(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_192(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_193(func_204(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_193(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_203(iParam0, iParam1))
	{
		iVar0 = func_202(iParam1);
		iVar1 = func_200(iParam0);
		iVar2 = (func_200(iParam0) - func_200(iParam1));
		iVar3 = (func_202(iParam0) - func_202(iParam1));
		iVar4 = (func_199(iParam0) - func_199(iParam1));
		iVar5 = (func_198(iParam0) - func_198(iParam1));
		iVar6 = (func_197(iParam0) - func_197(iParam1));
		iVar7 = (func_196(iParam0) - func_196(iParam1));
	}
	else
	{
		iVar0 = func_202(iParam0);
		iVar1 = func_200(iParam1);
		iVar2 = (func_200(iParam1) - func_200(iParam0));
		iVar3 = (func_202(iParam1) - func_202(iParam0));
		iVar4 = (func_199(iParam1) - func_199(iParam0));
		iVar5 = (func_198(iParam1) - func_198(iParam0));
		iVar6 = (func_197(iParam1) - func_197(iParam0));
		iVar7 = (func_196(iParam1) - func_196(iParam0));
	}
	while (iVar7 < 0)
	{
		iVar7 += 60;
		iVar6 = (iVar6 - 1);
	}
	while (iVar7 > 59)
	{
		iVar7 = (iVar7 - 60);
		iVar6++;
	}
	while (iVar6 < 0)
	{
		iVar6 += 60;
		iVar5 = (iVar5 - 1);
	}
	while (iVar6 > 59)
	{
		iVar6 = (iVar6 - 60);
		iVar5++;
	}
	while (iVar5 < 0)
	{
		iVar5 += 24;
		iVar4 = (iVar4 - 1);
	}
	while (iVar5 > 23)
	{
		iVar5 = (iVar5 - 24);
		iVar4++;
	}
	while (iVar4 < 0)
	{
		while (iVar3 < 0)
		{
			iVar3 += 12;
			iVar2 = (iVar2 - 1);
		}
		iVar4 = (iVar4 + func_195(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = SYSTEM::ROUND(func_194(SYSTEM::TO_FLOAT(iVar0 + 1), 0f, 12f));
	}
	while (iVar3 < 0)
	{
		iVar3 += 12;
		iVar2 = (iVar2 - 1);
	}
	while (iVar3 > 12)
	{
		iVar3 = (iVar3 - 12);
		iVar2++;
	}
	*uParam2 = iVar7;
	*uParam3 = iVar6;
	*uParam4 = iVar5;
	*uParam5 = iVar4;
	*uParam6 = iVar3;
	*uParam7 = iVar2;
}

float func_194(float fParam0, float fParam1, float fParam2)
{
	float fVar0;
	
	if (fParam1 == fParam2)
	{
		return fParam1;
	}
	fVar0 = (fParam2 - fParam1);
	fParam0 = (fParam0 - (IntToFloat(SYSTEM::ROUND(((fParam0 - fParam1) / fVar0))) * fVar0));
	if (fParam0 < fParam1)
	{
		fParam0 = (fParam0 + fVar0);
	}
	return fParam0;
}

int func_195(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
			break;
		
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
			break;
		
		case 1:
			if ((iParam1 % 4) == 0)
			{
				if ((iParam1 % 100) != 0)
				{
					return 29;
				}
				else if ((iParam1 % 400) == 0)
				{
					return 29;
				}
			}
			return 28;
			break;
	}
	return 30;
}

int func_196(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_197(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_198(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_199(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 4) & 31;
}

int func_200(int iParam0)
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_201(GAMEPLAY::IS_BIT_SET(iParam0, 31), -1, 1)) + 2011;
}

int func_201(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_202(int iParam0)
{
	return iParam0 & 15;
}

int func_203(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_211(iParam1) || !func_211(iParam0))
	{
		return 1;
	}
	iVar0 = func_200(iParam0);
	iVar1 = func_200(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_202(iParam0);
	iVar1 = func_202(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_199(iParam0);
	iVar1 = func_199(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_198(iParam0);
	iVar1 = func_198(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_197(iParam0);
	iVar1 = func_197(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_196(iParam0);
	iVar1 = func_196(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_204()
{
	var uVar0;
	
	func_210(&uVar0, TIME::GET_CLOCK_SECONDS());
	func_209(&uVar0, TIME::GET_CLOCK_MINUTES());
	func_208(&uVar0, TIME::GET_CLOCK_HOURS());
	func_207(&uVar0, TIME::GET_CLOCK_DAY_OF_MONTH());
	func_206(&uVar0, TIME::GET_CLOCK_MONTH());
	func_205(&uVar0, TIME::GET_CLOCK_YEAR());
	return uVar0;
}

void func_205(var uParam0, int iParam1)
{
	if (iParam1 <= 0)
	{
		return;
	}
	if (iParam1 > 2043 || iParam1 < 1979)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 2080374784);
	if (iParam1 < 2011)
	{
		*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT((2011 - iParam1), 26));
		*uParam0 |= -2147483648;
	}
	else
	{
		*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT((iParam1 - 2011), 26));
		*uParam0 = (*uParam0 - *uParam0 & -2147483648);
	}
}

void func_206(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_207(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_202(*uParam0);
	iVar1 = func_200(*uParam0);
	if (iParam1 < 1 || iParam1 > func_195(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

void func_208(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_209(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_210(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

int func_211(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (iParam0 == -15)
	{
		return 0;
	}
	iVar0 = func_196(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_197(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_198(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_200(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_202(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_199(iParam0);
	if (iVar5 < 1 || iVar5 > func_195(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_212(int iParam0, int iParam1)
{
	if (GAMEPLAY::IS_BIT_SET(Global_106070.f_24967.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_213(int iParam0)
{
	int iVar0;
	
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				iVar0 = func_10();
				if (!func_13(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_221()) || Global_105117) || Global_25461) || func_220()) || func_52(8, -1)) || func_219()) || func_218()) || func_217()) || func_216()) || Global_106070.f_7660.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1) || func_221()) || Global_25461) || func_220()) || func_52(8, -1)) || func_217()) || func_219()) || func_218()) || func_216()) || Global_106070.f_7660.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_221()) || Global_105117) || Global_25461) || func_220()) || func_52(8, -1)) || func_217()) || func_219()) || func_218()) || func_216()) || Global_106070.f_7660.f_919[iVar0] == 5) || Global_36664 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_221()) || Global_105117) || Global_25461) || func_220()) || func_52(8, -1)) || func_219()) || func_218()) || func_216()) || Global_106070.f_7660.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_221() || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || func_52(8, -1)) || func_216()) || func_215()) || Global_106070.f_7660.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_52(8, -1) || func_219()) || func_218()) || func_215()) || func_214())
						{
							return 0;
						}
						if ((STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && STREAMING::GET_PLAYER_SWITCH_TYPE() != 3) && STREAMING::GET_PLAYER_SWITCH_STATE() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
						{
							if ((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_221()) || Global_25461) || func_220()) || func_52(8, -1)) || func_218()) || func_217()) || func_216()) || Global_106070.f_7660.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || func_221()) || func_218()) || Global_105117) || Global_25461) || func_220()) || Global_37271) || func_52(8, -1)) || func_217()) || func_215()) || func_216()) || Global_106070.f_7660.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1)) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_221()) || Global_105117) || Global_25461) || func_220()) || func_52(8, -1)) || func_217()) || func_215()) || func_219()) || func_218()) || func_216())
						{
							return 0;
						}
						break;
				}
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	else
	{
		return 0;
	}
	return 1;
}

var func_214()
{
	return Global_93271.f_1;
}

int func_215()
{
	if (Global_90249 != -1)
	{
		return GAMEPLAY::IS_BIT_SET(Global_84115[Global_90249 /*34*/].f_15, 13);
	}
	return 0;
}

int func_216()
{
	if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_217()
{
	if (Global_71465)
	{
		return 1;
	}
	else if (Global_56175 && !Global_56181)
	{
		return 1;
	}
	return 0;
}

bool func_218()
{
	return Global_93284.f_328 > 0;
}

bool func_219()
{
	return Global_93284.f_327 > 0;
}

var func_220()
{
	return Global_1312857;
}

int func_221()
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return Global_90805.f_44 == 1;
	}
	return 0;
}

int func_222()
{
	func_50();
	if (Global_3188[Global_14513 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_223(int iParam0)
{
	return func_203(func_204(), iParam0);
}

int func_224(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_10();
	if (iParam2 != 145 && ((iParam2 == 0 || iParam2 == 1) || iParam2 == 2))
	{
		iVar1 = iParam2;
	}
	switch (iParam0)
	{
		case 18:
			if (iVar1 == 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 19:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 20:
			if (iVar1 != 1)
			{
				iVar0 = 1;
			}
			break;
		
		case 28:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 13:
			if (iVar1 == 0)
			{
				if (iParam1 == 2)
				{
					iVar0 = 0;
				}
				else
				{
					iVar0 = 1;
				}
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 22:
			if (iParam1 == 2 || iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 30:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 1;
			break;
	}
	return iVar0;
}

int func_225(int iParam0)
{
	if (!func_13(iParam0))
	{
		return 7;
	}
	return Global_106070.f_7660.f_919[iParam0];
}

int func_226(int iParam0)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_228())
		{
			return 0;
		}
	}
	iVar0 = iParam0;
	if (iVar0 < 31)
	{
		uVar1 = GAMEPLAY::IS_BIT_SET(Global_106070.f_24967, iVar0);
	}
	else
	{
		iVar0 = (iVar0 - 31);
		uVar1 = GAMEPLAY::IS_BIT_SET(Global_106070.f_24967.f_1, iVar0);
	}
	return uVar1;
}

int func_227()
{
	var uVar0;
	
	if (Global_25609)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			uVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(uVar0, 0))
			{
				if (!PED::IS_PED_INJURED(VEHICLE::GET_PED_IN_VEHICLE_SEAT(uVar0, 0, 0)))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_228()
{
	var uVar0;
	
	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		if (NETWORK::_NETWORK_ARE_ROS_AVAILABLE())
		{
			if (NETWORK::_0x91B87C55093DE351())
			{
				STATS::STAT_GET_INT(joaat("sp_unlock_exclus_content"), &uVar0, -1);
				GAMEPLAY::SET_BIT(&uVar0, 2);
				GAMEPLAY::SET_BIT(&uVar0, 4);
				GAMEPLAY::SET_BIT(&uVar0, 6);
				GAMEPLAY::SET_BIT(&Global_25, 2);
				GAMEPLAY::SET_BIT(&Global_25, 4);
				GAMEPLAY::SET_BIT(&Global_25, 6);
				STATS::STAT_SET_INT(joaat("sp_unlock_exclus_content"), uVar0, 1);
				if (GAMEPLAY::_0x5AA3BEFA29F03AD4())
				{
					uVar0 = GAMEPLAY::GET_PROFILE_SETTING(866);
					GAMEPLAY::SET_BIT(&uVar0, 0);
					STATS::_0xDAC073C7901F9E15(uVar0);
				}
				return 1;
			}
		}
	}
	if (Global_144765 == 2)
	{
		return 1;
	}
	else if (Global_144765 == 3)
	{
		return 0;
	}
	if (GAMEPLAY::_0x5AA3BEFA29F03AD4())
	{
		if (GAMEPLAY::IS_BIT_SET(GAMEPLAY::GET_PROFILE_SETTING(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_229(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	if (Global_87312[iParam0 /*2*/])
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < Global_84079)
	{
		if (Global_84079[iVar0 /*5*/] != -1)
		{
			if (Global_71474.f_109[Global_84079[iVar0 /*5*/] /*4*/] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_230()
{
	if (SYSTEM::VDIST(vLocal_52, -2255.21f, 4271.04f, 44.875f) < 5f)
	{
		iLocal_301 = 1;
	}
	else if (SYSTEM::VDIST(vLocal_52, -500.924f, -2165.36f, 7.6988f) < 5f)
	{
		iLocal_301 = 2;
	}
}

void func_231()
{
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_76) && !ENTITY::IS_ENTITY_DEAD(uLocal_76, 0))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_76, 0);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(ENTITY::GET_ENTITY_MODEL(uLocal_76));
		func_243(&uLocal_76, 1, 0, 1);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_75) && !ENTITY::IS_ENTITY_DEAD(uLocal_75, 0))
	{
		PED::SET_PED_RESET_FLAG(uLocal_75, 310, 1);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_75, 0);
	}
	if (UI::DOES_BLIP_EXIST(uLocal_64))
	{
		UI::REMOVE_BLIP(&uLocal_64);
	}
	func_62(&uLocal_67);
	if (UI::DOES_BLIP_EXIST(uLocal_65))
	{
		UI::REMOVE_BLIP(&uLocal_65);
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("RE_CAR_STEAL_SCENE"))
	{
		if (func_162(iLocal_77))
		{
			AUDIO::_0x18EB48CFC41F2EA0(iLocal_77, 0);
		}
		AUDIO::STOP_AUDIO_SCENE("RE_CAR_STEAL_SCENE");
	}
	if (iLocal_301 == 2)
	{
		VEHICLE::REMOVE_VEHICLE_ASSET(joaat("rocoto"));
	}
	else
	{
		VEHICLE::REMOVE_VEHICLE_ASSET(joaat("peyote"));
	}
	func_16(&iLocal_77);
	if (func_162(iLocal_80))
	{
		VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iLocal_80, 1);
	}
	GAMEPLAY::_SET_UNK_MAP_FLAG(0);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	func_146(39, 0);
	func_146(40, 0);
	func_146(41, 0);
	func_146(42, 0);
	func_146(43, 0);
	func_146(44, 0);
	func_232(-1);
	func_64(&uLocal_330, 0, 0);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_232(int iParam0)
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_134();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_181())
	{
		func_236(iParam0);
		UI::SET_MISSION_NAME(0, 0);
		Global_106061 = GAMEPLAY::GET_GAME_TIMER();
		func_235(30000);
		StringCopy(&cVar0, func_234(Global_106059, 1), 64);
		if (func_133(Global_106059) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_106058, 64);
		}
		STATS::PLAYSTATS_RANDOM_MISSION_DONE(&cVar0, Global_106056, (GAMEPLAY::GET_GAME_TIMER() - Global_106057), 0);
	}
	else if (GAMEPLAY::IS_BIT_SET(Global_106066, 0) && Global_106070.f_24967.f_2 < 3)
	{
		GAMEPLAY::CLEAR_BIT(&Global_106066, 0);
	}
	func_233(&Global_25518);
	Global_106060 = 0;
	func_187(-1);
}

void func_233(var uParam0)
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_36079)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_36078 = 0;
	Global_36080 = 0;
	Global_36117 = 15;
	Global_56178 = 0;
	Global_56179 = 0;
}

char* func_234(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return "RE_ACCIDENT";
			break;
		
		case 1:
			return "RE_ATMROBBERY";
			break;
		
		case 2:
			return "RE_BUSTOUR";
			break;
		
		case 3:
			return "RE_DOMESTIC";
			break;
		
		case 4:
			return "RE_GETAWAYDRIVER";
			break;
		
		case 5:
			return "RE_SHOPROBBERY";
			break;
		
		case 6:
			return "RE_SNATCHED";
			break;
		
		case 7:
			return "RE_LURED";
			break;
		
		case 8:
			return "RE_BIKETHIEFSTAMP";
			break;
		
		case 9:
			return "RE_SECURITYVAN";
			break;
		
		case 10:
			return "RE_PAPARAZZI";
			break;
		
		case 11:
			return "RE_CHASETHIEVES";
			break;
		
		case 12:
			return "RE_DEALGONEWRONG";
			break;
		
		case 13:
			return "RE_HITCHLIFT";
			break;
		
		case 14:
			return "RE_STAG";
			break;
		
		case 15:
			return "RE_ARREST";
			break;
		
		case 16:
			return "RE_CRASHRESCUE";
			break;
		
		case 17:
			return "RE_CARTHEFT";
			break;
		
		case 18:
			return "RE_CULTSHOOTOUT";
			break;
		
		case 19:
			return "RE_GANGFIGHT";
			break;
		
		case 20:
			return "RE_GANGINTIMIDATION";
			break;
		
		case 21:
			return "RE_PRISONVANBREAK";
			break;
		
		case 22:
			return "RE_PRISONERLIFT";
			break;
		
		case 23:
			return "RE_ABANDONEDCAR";
			break;
		
		case 24:
			return "RE_BURIAL";
			break;
		
		case 25:
			return "RE_MUGGING";
			break;
		
		case 26:
			return "RE_BIKETHIEF";
			break;
		
		case 27:
			return "RE_DRUNKDRIVER";
			break;
		
		case 28:
			return "RE_HOMELANDSECURITY";
			break;
		
		case 29:
			return "RE_BORDERPATROL";
			break;
		
		case 30:
			return "RE_SIMEONYETARIAN";
			break;
		
		case 31:
			return "RE_DUEL";
			break;
		
		case 32:
			return "RE_SEAPLANE";
			break;
		
		case 33:
			return "RE_MONKEYPHOTO";
			break;
		
		case -1:
			return "RE_NONE";
			break;
	}
	if (!bParam1)
	{
	}
	return "UNKNOWN";
}

void func_235(int iParam0)
{
	Global_36668 = (GAMEPLAY::GET_GAME_TIMER() + iParam0);
}

void func_236(int iParam0)
{
	func_237(iParam0, 0, func_242(iParam0));
}

void func_237(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_204();
	func_240(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_239(iParam0, &uVar0);
	Var1 = { func_238(&uVar0) };
}

struct<16> func_238(var uParam0)
{
	struct<16> Var0;
	int iVar16;
	
	StringCopy(&Var0, "", 64);
	iVar16 = func_198(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_197(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_196(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "  ", 64);
	iVar16 = func_199(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "/", 64);
	iVar16 = func_202(*uParam0);
	if (iVar16 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_200(*uParam0), 64);
	return Var0;
}

void func_239(int iParam0, var uParam1)
{
	Global_106070.f_24967.f_43[iParam0] = *uParam1;
}

void func_240(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_200(*uParam0);
	iVar1 = func_202(*uParam0);
	iVar2 = func_199(*uParam0);
	iVar3 = func_198(*uParam0);
	iVar4 = func_197(*uParam0);
	iVar5 = func_196(*uParam0);
	if (((((iParam6 == 0 && iParam5 == 0) && iParam4 == 0) && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam2 < 0)
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam4 < 0)
	{
		return;
	}
	if (iParam5 < 0)
	{
		return;
	}
	if (iParam6 < 0)
	{
		return;
	}
	iVar5 = (iVar5 + iParam1);
	while (iVar5 >= 60)
	{
		iParam2++;
		iVar5 = (iVar5 - 60);
	}
	iVar4 = (iVar4 + iParam2);
	while (iVar4 >= 60)
	{
		iParam3++;
		iVar4 = (iVar4 - 60);
	}
	iVar3 = (iVar3 + iParam3);
	while (iVar3 >= 24)
	{
		iParam4++;
		iVar3 = (iVar3 - 24);
	}
	iVar2 = (iVar2 + iParam4);
	iVar6 = func_195(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_195(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_241(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_241(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_210(uParam0, iParam1);
	func_209(uParam0, iParam2);
	func_208(uParam0, iParam3);
	func_206(uParam0, iParam5);
	func_207(uParam0, iParam4);
	func_205(uParam0, iParam6);
}

int func_242(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 23:
			iVar0 = 30;
			break;
		
		case 0:
			iVar0 = 30;
			break;
		
		case 15:
			iVar0 = 30;
			break;
		
		case 1:
			iVar0 = 200;
			break;
		
		case 26:
			iVar0 = 30;
			break;
		
		case 8:
			iVar0 = 30;
			break;
		
		case 29:
			iVar0 = 30;
			break;
		
		case 24:
			iVar0 = 30;
			break;
		
		case 2:
			iVar0 = 0;
			break;
		
		case 17:
			iVar0 = 30;
			break;
		
		case 11:
			iVar0 = 30;
			break;
		
		case 16:
			iVar0 = 30;
			break;
		
		case 18:
			iVar0 = 30;
			break;
		
		case 12:
			iVar0 = 120;
			break;
		
		case 3:
			iVar0 = 60;
			break;
		
		case 27:
			iVar0 = 60;
			break;
		
		case 19:
			iVar0 = 30;
			break;
		
		case 20:
			iVar0 = 30;
			break;
		
		case 4:
			iVar0 = 60;
			break;
		
		case 28:
			iVar0 = 30;
			break;
		
		case 13:
			iVar0 = 35;
			break;
		
		case 7:
			iVar0 = 30;
			break;
		
		case 25:
			iVar0 = 40;
			break;
		
		case 10:
			iVar0 = 30;
			break;
		
		case 22:
			iVar0 = 30;
			break;
		
		case 21:
			iVar0 = 30;
			break;
		
		case 5:
			iVar0 = 30;
			break;
		
		case 30:
			iVar0 = 60;
			break;
		
		case 9:
			iVar0 = 60;
			break;
		
		case 6:
			iVar0 = 40;
			break;
		
		case 14:
			iVar0 = 40;
			break;
	}
	return iVar0;
}

void func_243(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (!PED::IS_PED_INJURED(*uParam0))
		{
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*uParam0, 0, 1);
			if (iParam3 == 0)
			{
				AI::CLEAR_PED_SECONDARY_TASK(*uParam0);
			}
			PED::SET_PED_KEEP_TASK(*uParam0, iParam1);
			if (iParam2 == 1)
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, 0);
			}
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(uParam0);
	}
}

