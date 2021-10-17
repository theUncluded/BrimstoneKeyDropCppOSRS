#ifndef _COMBATLVL
#define _COMBATLVL
#include <iostream>

/*Will take the monster first, then using a UI will ask the user where the monster is located
Their will be a value assigned to both the monster and the location together to determine the drop rate*/
class monster {
public:
	double brimstoneDropCalc(double i);
	double decimalToPercent(double const & decimal);
	//int monsterLoc();
	int monsterLvl(int monsterLevel);
	

//private:
	//int numOfLoc(const monster monster);
};

double monster::brimstoneDropCalc(double i) {
	double resultInDec;
	
	if (i < 100){
		resultInDec = 1 / (100 + (pow(100 - i, 2) / 5));

		return resultInDec;
	}
	else {
		resultInDec = 1/(120 - (i / 5));

		return resultInDec;
	}
}

double monster::decimalToPercent(double const & decimal) {
	double percent = decimal * 100;
	return percent;
}

int monster::monsterLvl(int monsterLevel) {
	int monstLvl=monsterLevel;
	

	return monstLvl;
}

/*
int monster::monsterLoc() {
	//Long, but this will list all of the possible locations with their respective combat levels

	int CatacombsOfKourend,slayerTower,strongholdSlayerCave,abyss,lithkrenVault,strongholdOfSec,godWarsDung,fremSlayerDung,jormungandPrison,chasmOfFire,tavDungeon,brimhavenDungeon,mythGuildDung,evilChickenLair,iorwerthDung,meiyerditchLab,isleOfSoulsDung,ogreEnclave,brineRat,krakenCove
		, lighthouse, waterbirth,mournerTuns,karuulmDung,smokeDung,waterfallDung,giantDen,wyvernCave,witchhavenDung, kalphiteL,kalphiteC, battlefront, lizardCan, lizardSett,kebosSwamp,molch,ancientCavern,fossilIsl,zanaris,forthosDung,asgarianIceDung,trollStrong,keldagrim,deathPlat,darkmeyer
		, meiyerditch, slepe;
}
*/
#endif
