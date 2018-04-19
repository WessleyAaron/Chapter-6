//Number Generator With Switch
//4-19-18
//Aaron Wessley

#include <iostream>
#include <string>
#include <time.h>

using namespace std;

int generateRandomNumber(int maxNumber)
{
	srand(time(NULL));
	int returnNumber = rand() % maxNumber + 1;
	return returnNumber;
}

int LevelEasy()
{
	int userGuess, userChoice, userGuessCounter = 0;
	int randomNumber = generateRandomNumber(100);

	for (int c = 5; c > 0; c--)
	{
		cout << "Number: ";
		cin >> userGuess;

		userGuessCounter++;

		if (userGuess < randomNumber)
		{
			cout << "Higher.\n";
		}

		else if (userGuess > randomNumber)
		{
			cout << "Lower.\n";
		}

		else if (userGuess == randomNumber)
		{
			cout << "Good job. You got it in " << userGuessCounter << " tries." << endl;
			break;
		}
	}

	return 0;
}

int LevelMedium()
{
	return 0;
}

int LevelHard()
{
	return 0;
}

int main()
{
	int levelChoice;

	cout << "Choose your level" << endl;
	cin >> levelChoice;

	switch (levelChoice)
	{
	case 1:
		LevelEasy();
		break;
	case 2:
		LevelMedium();
		break;
	case 3:
		LevelHard();
		break;
	default:
		break;
	}

	system("pause");
	return 0;
}