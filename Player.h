#pragma once
class Player
{
public:
	Player();
	Player(int _power, float _health);
	~Player();

	int Power;
	float Health; 

	int GetMana();
	void SetMana(int _Mana);

	void Attack();

private:
	int Mana;
};

//Implement stuff here 
//Declare stuff in the .cpp
