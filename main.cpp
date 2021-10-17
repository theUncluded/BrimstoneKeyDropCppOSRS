#include <iostream>
#include "BrimHeader.h"
using namespace std;

int main(){
	monster slayerMonster;
	int monstLvl;

	

	char userAnswer='y';

	while (userAnswer == 'y') {
		std::cout << "Enter the monster level: " << std::endl;
		std::cin >> monstLvl;
		cout << "You have a " << slayerMonster.decimalToPercent(slayerMonster.brimstoneDropCalc(monstLvl)) << "% chance of obtaining a brimstone key from each monster kill this slayer task." << endl;
		
		cout << "Would you like to calculate the brimstone drop % from another monster's combat level?" << endl;
		cin >> userAnswer;
	}
	
	cout << "Thanks! Enjoy the grind!" << endl;
	return 0;
}