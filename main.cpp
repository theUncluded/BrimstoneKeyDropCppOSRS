#include <iostream>
#include "BrimHeader.h"
using namespace std;

int main(){
	monster slayerMonster;
	double monsterLvl;
	int userInput;
	bool slayerT;
	/*
	while (userAnswer == 'y') {
		cout << "Enter the monster level: " << std::endl;
		cin >> monstLvl;
		cout << "You have a " << slayerMonster.decimalToPercent(slayerMonster.brimstoneDropCalc(monstLvl)) << "% chance of obtaining a brimstone key from each monster kill this slayer task." << endl;
		
		cout << "Would you like to calculate the brimstone drop % from another monster's combat level?" << endl;
		cin >> userAnswer;
	}
	*/
	cout << "Pick the monster on your current slayer task from the list \n (1) Aberrant Spectres     (2)Abyssal Demons     (3)Adamant Dragons     (4)Ankou \n(5)Aviansie     (6)Basilisk     (7)Black Demons      (8)Black Dragons     (9)Bloodveld     \n(10)Blue Dragons      (11)Brine Rats     (12)Bronze Dragons      (13) Cave Kraken     (14)Dagnnoth\n(15)Dark Beasts     (16)Drakes     (17)Dust Devils     (18)Fire Giants     (19)Fossil Island Wyverns\n(20)Gargoyles     (21)Greater Demons     (22)Hellhounds     (23)Hydras     (24)Iron Dragons\n(25)Jellies     (26)Kalphite      (27)Kurasks     (28)Lizardmen     (29)Mithril Dragons\n(30)Mutated Zygomites     (31)Nechryael     (32)Red Dragons      (33)Rune Dragons      (34)Skeletal Wyverns\n(35)Smoke Devils     (36)Steel Dragons     (37)Trolls      (38)Turoth     (39)Vampyre\n(40)Water fiends     (41)Wyrms     " << endl;
	cin >> userInput;

	switch (userInput)
	{
	case 1: // First monster / Aberrant spectres / sreq
		//slayerMonster.slayerLvlReq('t');
		slayerT = true;
		monsterLvl=slayerMonster.monsterLvl(96);
		break;
	case 2: //Abyssal demons / sreq
		//slayerMonster.slayerLvlReq('t');
		slayerT = true;
		monsterLvl = slayerMonster.monsterLvl(124);
		break;
	case 3: //Adamant dragons
		slayerT = false;
		monsterLvl = slayerMonster.monsterLvl(338);
		break;
	case 4: //Ankou
		slayerT = false;
		cout << "Which location are these monsters located at?\n (1) Stronghold of Sec. \n (2) Stronghold Slayer Dung. \n (3) Cat. of Kourend" << endl;
		cin >> userInput;
		switch (userInput)
		{
		case 1:
		case 2:
			monsterLvl = slayerMonster.monsterLvl(86);// represents slaying the highest level ankou in the area
			break;
		case 3:
			monsterLvl = slayerMonster.monsterLvl(95);
			break;
		}
		break;
	case 5: //Aviansie
		slayerT = false;
		monsterLvl = slayerMonster.monsterLvl(148); // represents slaying the highest level aviansie in the area
		break;
	case 6: //Basilisk / sreq
		//slayerMonster.slayerLvlReq('t');
		slayerT = true;
		monsterLvl = slayerMonster.monsterLvl(61);
		break;
	case 7: // Black Demons
		slayerT = false;
		cout << "Which location are these monsters located at?\n (1) Cat. of Kourend \n (2) Chasm of Fire \n (3) Taverly Dung. \n (4) Brimhaven Dung. " << endl;
		cin >> userInput;
		switch (userInput)
		{
		case 1:
			monsterLvl = slayerMonster.monsterLvl(184);// represents slaying the highest level demon in the area
			break;
		case 2:
		case 3:
		case 4:
			monsterLvl = slayerMonster.monsterLvl(172);
			break;
		}
		break;
	case 8: //Black Dragons
		slayerT = false;
		monsterLvl = slayerMonster.monsterLvl(227);
		break;
	case 9: // Bloodveld /sreq
		slayerT = true;
		//slayerMonster.slayerLvlReq('t');
		cout << "Which location are these monsters located at?\n (1) Cat. of Kourend \n (2) God Wars \n (3) Iorwerth Dung. \n (4) Meiyerditch Labs \n(5) Slayer Tower \n(6) Stronghold Slayer Dung." << endl;
		cin >> userInput;
		switch (userInput)
		{
		case 1:
			monsterLvl = slayerMonster.monsterLvl(123);
			break;
		case 2:
			monsterLvl = slayerMonster.monsterLvl(81);
			break;
		case 3:
		case 4:
		case 5:
		case 6:
			monsterLvl = slayerMonster.monsterLvl(76);
			break;
		}
		break;
	case 10: // Blue Drags
		slayerT = false;
		monsterLvl = slayerMonster.monsterLvl(111);
		break;
	case 11: //brine rats /sreq
		slayerT = true;
		//slayerMonster.slayerLvlReq('t');
		monsterLvl = slayerMonster.monsterLvl(70);
		break;
	case 12:// Bronze Drag.
		slayerT = false;
		cout << "Which location are these monsters located at? (1) Cat. of Kourend \n (2) Brimhaven Dung." << endl;
		cin >> userInput;
		switch (userInput)
		{
		case 1:
			monsterLvl = slayerMonster.monsterLvl(143);
			break;
		case 2:
			monsterLvl = slayerMonster.monsterLvl(131);
			break;
		}
		break;
	case 13: //Cave Kraken /sreq
		slayerT = true;
		//slayerMonster.slayerLvlReq('t');
		cout << "Boss drop rate (1) or normal monster (2)?" << endl;
		cin >> userInput;
		switch (userInput) {
		case 1:
			monsterLvl = slayerMonster.monsterLvl(291);
			break;
		case 2:
			monsterLvl = slayerMonster.monsterLvl(127);
			break;
		}
		break;
	case 14://dagnnoth
		slayerT = false;
		monsterLvl = slayerMonster.monsterLvl(92); //represents slaying the highest level in the area
		break;
	case 15: //dark beasts /sreq
		slayerT = true;
		//slayerMonster.slayerLvlReq('t');
		monsterLvl = slayerMonster.monsterLvl(182);
		break;
	case 16: //drakes /sreq
		slayerT = true;
		//slayerMonster.slayerLvlReq('t');
		monsterLvl = slayerMonster.monsterLvl(192);
		break;
	case 17: //dust devils /sreq
		slayerT = true;
		//slayerMonster.slayerLvlReq('t');
		cout << "Which location are these monsters located at? (1) Cat. of Kourend \n (2) Smoke Dung." << endl;
		cin >> userInput;
		switch (userInput)
		{
		case 1:
			monsterLvl = slayerMonster.monsterLvl(110);
			break;
		case 2:
			monsterLvl = slayerMonster.monsterLvl(93);
			break;
		}
		break;
	case 18: //Fire Giants 
		cout << "Which location are these monsters located at? (1) Brimhaven Dung. \n (2)Cat. of Kourend \n (3) Isle of Souls Dung. \n (4) Giant's Den\n (5) Karluum Slayer Dung. \n (6) Stronghold Slayer Dung. \n (7) Waterfall Dung." << endl;
		cin >> userInput;
		slayerT = false;
		switch (userInput)
		{
		case 1:
			monsterLvl = slayerMonster.monsterLvl(86);
			break;
		case 2:
			monsterLvl = slayerMonster.monsterLvl(109); //represents slaying the highest level in the area
			break;
		case 3:
			monsterLvl = slayerMonster.monsterLvl(86);
			break;
		case 4:
			monsterLvl = slayerMonster.monsterLvl(109);//represents slaying the highest level in the area
			break;
		case 5:
		case 6:
		case 7:
			monsterLvl = slayerMonster.monsterLvl(86);
			break;
		}
		break;
	case 19: //Fossil Island Wyverns /sreq
		//slayerMonster.slayerLvlReq('t');
		slayerT = true;
		monsterLvl = slayerMonster.monsterLvl(152);
		break;
	case 20: //Gargoyles /sreq
		//slayerMonster.slayerLvlReq('t');
		slayerT = true;
		monsterLvl = slayerMonster.monsterLvl(111);
		break;
	case 21://greater demons
		slayerT = false;
		cout << "Which location are these monsters located at? (1) Cat. of Kourend \n (2)Chasm of Fire \n (3) Isle of Souls Dung. \n (4) Karuulm Slayer Dung.\n (5) Brimhaven Dung." << endl;
		cin >> userInput;
		switch (userInput)
		{
		case 1:
			monsterLvl = slayerMonster.monsterLvl(113);
			break;
		case 2:
		case 3:
		case 4:
		case 5:
			monsterLvl = slayerMonster.monsterLvl(92);
			break;
		}
		break;
	case 22: //Hellhounds
		slayerT = false;
		monsterLvl = slayerMonster.monsterLvl(122);
		break;
	case 23: //hydras /sreq
		slayerT = true;
		//slayerMonster.slayerLvlReq('t');
		monsterLvl = slayerMonster.monsterLvl(194);
		break;
	case 24: //iron drags 
		slayerT = false;
		cout << "Which location are these monsters located at? (1) Brimhaven Dung.\n (2) Isle of Souls Dung \n (3)Cat. of Kourend" << endl;
		cin >> userInput;
		switch (userInput)
		{
		case 1:
		case 2:
			monsterLvl = slayerMonster.monsterLvl(189);
			break;
		case 3:
			monsterLvl = slayerMonster.monsterLvl(215);
			break;
		}
		break;
	case 25: // Jellies /sreq
		slayerT = true;
		//slayerMonster.slayerLvlReq('t');
		monsterLvl = slayerMonster.monsterLvl(78);
		break;
	case 26: //Kalphite
		slayerT = false;
		cout << "Not avalable!" << endl;
		break;
	case 27://Kurasks
		slayerT = false;
		//slayerMonster.slayerLvlReq('t');
		monsterLvl = slayerMonster.monsterLvl(106);
		break;
	case 28: //Lizardmen 
		slayerT = false;
		cout << "Not avalable!" << endl;
		break;
	case 29: //Mithril Dragons
		slayerT = false;
		monsterLvl = slayerMonster.monsterLvl(304);
		break;
	case 30: //Mutated Zygomites /sreq
		slayerT = true;
		//slayerMonster.slayerLvlReq('t');
		monsterLvl = slayerMonster.monsterLvl(86);
		break;
	case 31: //Nechryael /sreq
		slayerT = true;
		//slayerMonster.slayerLvlReq('t');
		monsterLvl = slayerMonster.monsterLvl(115);
		break;
	case 32:// red dragons
		slayerT = false;
		monsterLvl = slayerMonster.monsterLvl(152);
		break;
	case 33://rune drags
		slayerT = false;
		monsterLvl = slayerMonster.monsterLvl(380);
	case 34://skeletal wyverns /sreq
		slayerT = true;
		//slayerMonster.slayerLvlReq('t');
		monsterLvl = slayerMonster.monsterLvl(140);
		break;
	case 35://smoke devils /sreq
		slayerT = true;
		//slayerMonster.slayerLvlReq('t');
		monsterLvl = slayerMonster.monsterLvl(160);
	case 36://steel drag
		slayerT = false;
		cout << "Which location are these monsters located at? (1) Cat. of Kourend\n (2) Brimhaven Dung. \n" << endl;
		cin >> userInput;
		switch (userInput)
		{
		case 1:
			monsterLvl = slayerMonster.monsterLvl(274);
			break;
		case 2:
			monsterLvl = slayerMonster.monsterLvl(246);
			break;
		}
		break;
	case 37: //trolls
		slayerT = false;
		cout << "currently unavailable!" << endl;
		break;
	case 38: //turoth /sreq
		slayerT = true;
		//slayerMonster.slayerLvlReq('t');
		monsterLvl = slayerMonster.monsterLvl(89);
		break;
	case 39: //vampyre
		slayerT = false;
		cout << "currently unavailable!" << endl;
		break;
	case 40://waterfiends
		slayerT = false;
		monsterLvl = slayerMonster.monsterLvl(115);
		break;
	case 41: //wyrms /sreq
		slayerT = true;
		//slayerMonster.slayerLvlReq('t');
		monsterLvl = slayerMonster.monsterLvl(99);
	default:
		cout << "Not an option! Please restart program." << endl;
		break;
	}

	cout << "You have a " << slayerMonster.brimstoneDropCalc(monsterLvl, slayerT) << "% chance of receiving a brimstone key for each monster slain" << endl;

	cout << "Thanks! Enjoy the grind!" << endl;
	return 0;
}

	
