/*
#include "Player.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	Player wizard = Player();
	Player knight = Player();
	Player lancer = Player(10, 20.0);

	cout << "Wizard.Power = " << wizard.Power << endl;
	cout << "Wizard.Health = " << wizard.Health << endl;
	cout << "Wizard.Mana = " << wizard.GetMana() << endl; //Accessing a private variable.
	cout << endl;

	wizard.Power = 5;
	cout << "Wizard.Power = " << wizard.Power << endl;
	cout << endl;

	wizard.SetMana(wizard.GetMana() / 2);
	cout << "Wizard.Mana = " << wizard.GetMana() << endl;
	cout << endl;

	wizard.Attack(); //I feel bad for adding the iostream and string libraries to the Player.cpp but whatever for now.  
					 //I'll think of a smart way to do this later, because it's an interesting problem.  
	cout << endl; 

	knight.Health = knight.Health / 2; 
	cout << "The wizard's health is " << wizard.Health << endl;
	cout << "The knight's health is " << knight.Health << endl;
	cout << endl; 

	cout << "The lancer's power is " << lancer.Power << endl;
	cout << "The lancer's health is " << lancer.Health << endl;
}
*/

//VERY BASIC SYNTAX
/*
class Player
{
public:
	int power;
	float health;
	int mana; 

private: 
	int magic; 
};

int main()
{
	Player wizard = Player(); 

	wizard.power = 100;
	wizard.health = 100.0;
	wizard.mana = 100;

	cout << "Wizard power = " << wizard.power << endl;
	cout << "Wizard health = " << wizard.health << endl;
	cout << "Wizard mana = " << wizard.mana << endl;
}
*/




