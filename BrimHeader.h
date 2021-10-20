#ifndef _COMBATLVL
#define _COMBATLVL
#include <iostream>
using namespace std;

/*Will take the monster first, then using a UI will ask the user where the monster is located
Their will be a value assigned to both the monster and the location together to determine the drop rate*/
class monster {
public:
	double brimstoneDropCalc(double i, bool slayerLvlReq);
	//double decimalToPercent(double const & decimal);
	int monsterLvl(int monsterLevel);
	//bool slayerLvlReq();

private:
	int numOfLoc;
};

double monster::brimstoneDropCalc(double i, bool slayerReq) {
	double resultInDec;
	double twentyPercent;
	//char slayerChar;
	if (i < 100 && slayerReq==false) {
		resultInDec = 1 / (100 + (pow(100 - i, 2) / 5));
		return resultInDec * 100;
	}
	else if (i < 100 && slayerReq == true)
	{
		twentyPercent = (1 / (100 + (pow(100 - i, 2) / 5))) * .2;
		resultInDec = 1 / (100 + (pow(100 - i, 2) / 5)) + twentyPercent;
		return resultInDec * 100;
	}
	else if(i > 100 && slayerReq==false)
	{
		resultInDec = 1 / (120 - (i / 5));
		return resultInDec * 100;
	}	
	else
	{
		twentyPercent = (1 / (120 - (i / 5))) * .2;
		resultInDec= (1 / (120 - (i / 5))) + twentyPercent;
		return resultInDec * 100;
	}
	}

int monster::monsterLvl(int monsterLevel) {
	int monstLvl=monsterLevel;
	

	return monstLvl;
}
#endif

/*int CatacombsOfKourend,slayerTower,strongholdSlayerCave,abyss,lithkrenVault,strongholdOfSec,godWarsDung,fremSlayerDung,jormungandPrison,chasmOfFire,tavDungeon,brimhavenDungeon,mythGuildDung,evilChickenLair,iorwerthDung,meiyerditchLab,isleOfSoulsDung,ogreEnclave,brineRat,krakenCove
		, lighthouse, waterbirth,mournerTuns,karuulmDung,smokeDung,waterfallDung,giantDen,wyvernCave,witchhavenDung, kalphiteL,kalphiteC, battlefront, lizardCan, lizardSett,kebosSwamp,molch,ancientCavern,fossilIsl,zanaris,forthosDung,asgarianIceDung,trollStrong,keldagrim,deathPlat,darkmeyer
		, meiyerditch, slepe;
		*/
