#ifndef _COMBATLVL
#define _COMBATLVL
#include <iostream>
using namespace std;

/*Will take the monster first, then using a UI will ask the user where the monster is located
Their will be a value assigned to both the monster and the location together to determine the drop rate*/
class monster {
public:
	double brimstoneDropCalc(double i);
	//double decimalToPercent(double const & decimal);
	int monsterLvl(int monsterLevel);
	//bool slayerLvlReq(char tOrF);
	//int monsterLoc();
	

private:
	int numOfLoc;
};
/*
bool monster::slayerLvlReq(char tOrF) {
	if (tOrF = 't')
		return true;
	else
		return false;
}
*/
double monster::brimstoneDropCalc(double i) {
	double resultInDec;
	//char slayerChar;


	if (i < 100) {
		resultInDec = 1 / (100 + (pow(100 - i, 2) / 5));
		return resultInDec;
	}
	else
	{
		resultInDec = 1 / (120 - (i / 5));
	}
	return resultInDec * 100;
	//this may be useful later
	/*
	if (i < 100 && slayerLvlReq(slayerChar)==true){
		double twentyPer = (1 / (100 + (pow(100 - i, 2) / 5))) * .2;
		resultInDec = 1 / (100 + (pow(100 - i, 2) / 5)) + twentyPer;
		return resultInDec;
	}
	if (i < 100 && slayerLvlReq(slayerChar)!=true) {
		resultInDec = 1 / (100 + (pow(100 - i, 2) / 5));
	}
	else if (i > 100 && slayerLvlReq(slayerChar) == true) {
		double twentyPer = (1 / (120 - (i / 5))) * .2;
		resultInDec = 1 / (120 - (i / 5))+twentyPer;
	}
	else {
		resultInDec = 1 / (120 - (i / 5));
	}
	*/
		
	}

int monster::monsterLvl(int monsterLevel) {
	int monstLvl=monsterLevel;
	

	return monstLvl;
}

//This will probably get moved to main..
	//Long, but this will list all of the monsters that you can get from konar
	

#endif

/*int CatacombsOfKourend,slayerTower,strongholdSlayerCave,abyss,lithkrenVault,strongholdOfSec,godWarsDung,fremSlayerDung,jormungandPrison,chasmOfFire,tavDungeon,brimhavenDungeon,mythGuildDung,evilChickenLair,iorwerthDung,meiyerditchLab,isleOfSoulsDung,ogreEnclave,brineRat,krakenCove
		, lighthouse, waterbirth,mournerTuns,karuulmDung,smokeDung,waterfallDung,giantDen,wyvernCave,witchhavenDung, kalphiteL,kalphiteC, battlefront, lizardCan, lizardSett,kebosSwamp,molch,ancientCavern,fossilIsl,zanaris,forthosDung,asgarianIceDung,trollStrong,keldagrim,deathPlat,darkmeyer
		, meiyerditch, slepe;
		*/
