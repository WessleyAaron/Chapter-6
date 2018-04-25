//Computer Guess
//4-25-18
//Aaron Wessley

#include <iostream>
#include <string>
#include <time.h>

using namespace std;

int randomNumber(int maxNumber)
{
	int n = rand() % maxNumber + 1;
	return n;
}

int main()
{
	int userNumber, currentNumber, loopTimes;


	cout << "Number: ";
	cin >> userNumber;

	do
	{
		currentNumber = randomNumber(userNumber);
		loopTimes++;
		cout << currentNumber << endl;
	}

	while (userNumber != currentNumber);

	cout << "Took " << loopTimes << " attempts" << endl;

	system("pause");
	return 0;
}