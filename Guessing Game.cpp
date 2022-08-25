#include <iostream>
#include <string>

using namespace std; 

void PlayGame(bool playerWins, int &attempts);

int main()
{
	//TODO 
	/*
	- Generate a random number between 1 and 10 
	- Use a while loop to ask for and check user input 
	- Get user input (cin) 
	- If that user input is wrong (too high or too low) ask for user input again 
	- If the user input is right 
	- The loop continues as long as the player is wrong (infinite chances) 
	- Player can play again or quit if they get it right 
	- If I'm feeling spicy I can try and only allow ints.  
	- Add a guess counter too, I didn't think of that before I wrote all this.  
	*/

	bool playerWins = false;
	int attempts = 0;

	PlayGame(playerWins, attempts);
	
	return 0;
}

void PlayGame(bool playerWins, int &attempts)
{
	bool playerChoicePass = false;
	int max = 10;
	int min = 1;
	int theAnswer;
	string playerChoice;
	string rightChoices[10] = { "1", "2", "3", "4", "5", "6", "7", "8", "9", "10" };

	theAnswer = rand() % (max - min + 1) + min;

	std::cout << "the answer = " << theAnswer << endl;

	while (!playerWins)
	{
		std::cout << "Pick a number between 1 and 10: ";
		std::cin >> playerChoice;
		
		for (int i = 0; i <= size(rightChoices); i++) //Warning	C4018	'<=': signed / unsigned mismatch	
		{
			if (playerChoice == rightChoices[i])
			{
				playerChoicePass = true; 
				break; 
			}
		}

		if (playerChoicePass == false)
		{
			std::cout << "Try again." << endl;
			attempts += 1;
			PlayGame(playerWins, attempts);
		}
		
		if (stoi(playerChoice) == theAnswer)
		{
			attempts += 1;
			playerWins = true;
		}

		if (stoi(playerChoice) > theAnswer)
		{
			std::cout << "Too high, try again. " << endl;
			attempts += 1;
			PlayGame(playerWins, attempts);
		}

		if (stoi(playerChoice) < theAnswer)
		{
			std::cout << "Too low, try again. " << endl;
			attempts += 1;
			PlayGame(playerWins, attempts);
		}
	}

	std::cout << "You won!" << endl;
	std::cout << "Your tried " << attempts << " times." << endl;
	std::cout << "Play again? (y/n) " << endl;

	std::cin >> playerChoice;

	if (playerChoice == "y")
	{
		theAnswer = rand() % (max - min + 1) + min; 
		attempts = 0;
		playerWins = false;

		PlayGame(playerWins, attempts);
	}
}


