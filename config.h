#pragma once
#include <Windows.h>
#include "libs/utils/memory.h"
#include <map>
#include "SDK.hpp"

typedef bool(*Tick)(SDK::APalPlayerCharacter* m_this,float DeltaSecond);
typedef void(*GetAllPlayer)(SDK::UPalCharacterImportanceManager* i_this, SDK::TArray<SDK::APalCharacter*>* OutArray);

class config
{
public:
	DWORD64 ClientBase = 0;
	DWORD64 offset_Tick = 0x29A4CE0;//APalPlayerCharacter::Tick
	DWORD64 offset_GetAllPlayers = 0x284D1E0;// UPalCharacterImportanceManager::GetAllPlayer
	//�˵��ж�
	bool IsESP = false;
	bool IsAimbot = false;
	bool IsSpeedHack = false;
	bool IsAttackModiler = false;
	bool IsDefuseModiler = false;
	bool IsInfStamina = false;
	bool IsSafe = true;
	bool IsInfinAmmo = false;
	bool IsToggledFly = false;
	bool IsMuteki = false;
	//����
	float SpeedModiflers = 1.0f;
	int DamageUp = 0;
	int DefuseUp = 0;
	int EXP = 0;
	int Item = 0;
	int PalRank = 0;
	float Pos[3] = {0,0,0};
	char ItemName[255];
	char PalName[255];
	int PalLvL = 1;
	SDK::APalPlayerCharacter* localPlayer = NULL;
	
	SDK::TArray<SDK::APalPlayerCharacter*> AllPlayers = {};
	SDK::UPalCharacterImportanceManager* UCIM = NULL;
	SDK::UObject* WorldContextObject = NULL;

	//����
	static SDK::UWorld* GetUWorld();
	static SDK::APalPlayerCharacter* GetPalPlayerCharacter();
	static SDK::TArray<SDK::APalPlayerCharacter*> GetTAllPlayers();
	static void Init();
};
extern config Config;

