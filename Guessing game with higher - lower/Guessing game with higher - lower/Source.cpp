//Guessing game with higher-lower
//4-24-18
//Aaron Wessley

#include <iostream>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
	int numChoice;
	int secret;

	srand(time(NULL));

	secret = rand() % 100 + 1;

	do
	{
		cout << "Please pick a number between 1-100" << endl;
		cin >> numChoice;

		if (numChoice > secret)
		{
			cout << "Lower" << endl;
			//count++
		}

		else if (numChoice < secret)
		{
			cout << "Higher" << endl;
		}

	}

	while (numChoice != secret);

	cout << "You got it. the number was " << secret << endl;

	system("pause");
	return 0;
}