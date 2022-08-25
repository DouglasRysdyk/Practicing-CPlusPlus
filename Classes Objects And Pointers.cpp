/*
#include "Warrior.h"
#include <iostream>
#include <string>

using namespace std; 

int main()
{
	Warrior newWarrior = Warrior(); 

	Warrior* warriorPointer = &newWarrior; 
	Warrior& warriorReference = newWarrior; 

	//Before memory manipulation...
	cout << "Before changes, newWarrior.power is " << newWarrior.Power << endl;
	cout << "Before changes, newWarrior.health is " << newWarrior.Health << endl;
	cout << endl;

	//Accessing variables and functions form a power with -> 
	warriorPointer->Power = 200; //You can still type a "." but it autocorrects to "->" 
	warriorPointer->Attack();
	cout << endl;
	cout << endl;

	//Accessing variables and functions form a power with -> 
	warriorReference.Health = 100000; 

	//After changing the data in memory...
	cout << "AFTER, newWarrior.power is " << newWarrior.Power << endl;
	cout << "AFTER, newWarrior.health is " << newWarrior.Health << endl;
}
*/

