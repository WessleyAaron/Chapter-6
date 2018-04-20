//Number Generator With Switch
//4-19-18
//Aaron Wessley

#include <iostream>
#include <string>
#include <time.h>

int userGuessCounter = 0;
bool userPlaying = NULL;

using namespace std;

int generateRandomNumber(int maxNumber)
{
	srand(time(NULL));
	int rNum = rand() % maxNumber + 1;
	return rNum;
}

int LevelEasy()
{
	if (userPlaying == true)
	{

	}
	int userGuess, currentCounter;
	int randomNumber = generateRandomNumber(10);

	for (int c = 5; c > 0; c--)
	{
		cout << "Number: ";
		cin >> userGuess;

		currentCounter++;

		if (userGuess == randomNumber)
		{
			cout << "Congratulations. it took you " << currentCounter << " tries." << endl;
			break;
		}

		else if (userGuess < randomNumber)
		{
			cout << "Higher.\n";
		}

		else if (userGuess > randomNumber)
		{
			cout << "Lower.\n";
		}		
	}
	userGuessCounter = userGuessCounter + currentCounter;
	return 0;
}

int main()
{
	int userChoice = NULL;

	cout << "Current Count: " << userGuessCounter << "\n[1] Easy\n[2] Medium\n[3] Hard\n";
	cout << "Choose your level" << endl;
	cin >> userChoice;

	switch (userChoice)
	{
	case 1:
		userPlaying = true;
		LevelEasy();
		break;
	case 2:
		break;
	case 3:
		break;
	default:
		break;
	}

	system("pause");
	return 0;
}