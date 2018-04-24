//Number Generator With Switch
//4-19-18
//Aaron Wessley

#include <iostream>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <string>

using namespace std;
int levelCountTotal = 0;

int randomNumberGenerator(int maxNumber)
{
	srand(time(NULL));
	return rand() % maxNumber + 1;
}
int level1()
{
	int numChoice;
	int secret;
	secret = randomNumberGenerator(10);
	do
	{
		cout << "Please pick a number between 1 - 10" << endl;
		cin >> numChoice;

		if (numChoice > secret)
		{
			cout << "Too high" << endl;
			levelCountTotal++;
		}

		else if (numChoice < secret)
		{
			cout << "Too low" << endl;
			levelCountTotal++;

		}
		else if (numChoice == secret) {
			levelCountTotal++;
			cout << "You got it. The number was " << secret << endl;
		}
	}

	while (numChoice != secret || levelCountTotal == 10);
	return NULL;
}
int level2()
{
	int numChoice;
	int secret;
	secret = randomNumberGenerator(50);
	do
	{
		cout << "Please pick a number between 1 - 50" << endl;
		cin >> numChoice;

		if (numChoice > secret)
		{
			cout << "Too high" << endl;
			levelCountTotal++;
		}

		else if (numChoice < secret)
		{
			cout << "Too low" << endl;
			levelCountTotal++;

		}
		else if (numChoice == secret) {
			levelCountTotal++;
			cout << "You got it. The number was " << secret << endl;
		}
	}

	while (numChoice != secret || levelCountTotal == 50);
	return NULL;
}
int level3()
{
	int numChoice;
	int secret;
	secret = randomNumberGenerator(100);
	do
	{
		cout << "Please pick a number between 1 - 100" << endl;
		cin >> numChoice;

		if (numChoice > secret)
		{
			cout << "Too high" << endl;
			levelCountTotal++;
		}

		else if (numChoice < secret)
		{
			cout << "Too low" << endl;
			levelCountTotal++;

		}
		else if (numChoice == secret) {
			levelCountTotal++;
			cout << "You got it. The number was " << secret << endl;
		}
	}

	while (numChoice != secret || levelCountTotal == 100);
	return NULL;
}
int main()
{
	int level1Count, level2Count, level3Count;
	int levelChoice;

	for (int i = 0; i < 5; ++i)
	{
		cout << "[1] Easy\n[2] Medium\n[3] Hard\n";
		cout << "Choose your level" << endl;
		cin >> levelChoice;

		switch (levelChoice)
		{
		case 1:
			level1();
			break;
		case 2:
			level2();
			break;
		case 3:
			level3();
			break;
		default:
			break;
		}
	}

	cout << "It took you " << levelCountTotal << " times to get the number through 5 rounds of playing" << endl;

	system("pause");
	return 0;
}