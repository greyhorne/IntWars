#include "SummonersRift.h"
#include "Turret.h"
#include "Game.h"

using namespace std;

SummonersRift::SummonersRift(Game* game) : Map(game) {
   vector<string> szTurrets = {
      "@Turret_T1_R_03_A",
      "@Turret_T1_R_02_A",
      "@Turret_T1_C_07_A",
      "@Turret_T2_R_03_A",
      "@Turret_T2_R_02_A",
      "@Turret_T2_R_01_A",
      "@Turret_T1_C_05_A",
      "@Turret_T1_C_04_A",
      "@Turret_T1_C_03_A",
      "@Turret_T1_C_01_A",
      "@Turret_T1_C_02_A",
      "@Turret_T2_C_05_A",
      "@Turret_T2_C_04_A",
      "@Turret_T2_C_03_A",
      "@Turret_T2_C_01_A",
      "@Turret_T2_C_02_A",
      "@Turret_OrderTurretShrine_A",
      "@Turret_ChaosTurretShrine_A",
      "@Turret_T1_L_03_A",
      "@Turret_T1_L_02_A",
      "@Turret_T1_C_06_A",
      "@Turret_T2_L_03_A",
      "@Turret_T2_L_02_A",
      "@Turret_T2_L_01_A"
   };
    
   for(string& s : szTurrets) {
      addObject(new Turret(this, GetNewNetID(), s, 0, 0));
   }

}

void SummonersRift::update(long long diff) {
   Map::update(diff);
   // TODO : add in here minion spawning every X seconds, jungle camp spawning [...]
}