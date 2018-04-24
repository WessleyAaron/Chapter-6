//Guessing Game
//4-24-18
//Aaron Wessley

#include <iostream>
#include <time.h>
#include <random>

using namespace std;

int main()
{
	int numChoice;
	int secret;
	// initialize random seed
	srand(time(NULL));
	// generate secret number between 1 and 10
	secret = rand() % 10 + 1;

	cout << "Please pick a number between 1-10" << endl;
	cin >> numChoice;

	if (numChoice == secret)
	{
		cout << "Congratulations. You guessed " << secret << " correctly" << endl;
	}

	else
	{
		cout << "You chose ... poorly. The number was " << secret << endl;
	}

	system("pause");
	return 0;
}