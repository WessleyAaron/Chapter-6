//Currency Conversion
//4-25-18
//Aaron Wessley

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

double userMoney;
double moneyOutput;

int Canada()
{
	cout << "How much money would you like to convert?" << endl;
	cin >> userMoney;

	moneyOutput = userMoney * 0.9813;

	cout << "You now have " << moneyOutput << " Canadian Dollars" << endl;

	return 0;
}
int Euro()
{
	cout << "How much money would you like to convert?" << endl;
	cin >> userMoney;

	moneyOutput = userMoney * 0.757;

	cout << "You now have " << moneyOutput << " Euros" << endl;

	return 0;
}
int India()
{
	cout << "How much money would you like to convert?" << endl;
	cin >> userMoney;

	moneyOutput = userMoney * 52.53;

	cout << "You now have " << moneyOutput << " Rupees" << endl;

	return 0;
}
int Japan()
{
	cout << "How much money would you like to convert?" << endl;
	cin >> userMoney;

	moneyOutput = userMoney * 80.92;

	cout << "You now have " << moneyOutput << " Yen" << endl;

	return 0;
}
int Mexico()
{
	cout << "How much money would you like to convert?" << endl;
	cin >> userMoney;

	moneyOutput = userMoney * 13.1544;

	cout << "You now have " << moneyOutput << " Pesos" << endl;

	return 0;
}
int SouthAfrica()
{
	cout << "How much money would you like to convert?" << endl;
	cin >> userMoney;

	moneyOutput = userMoney * 7.7522;

	cout << "You now have " << moneyOutput << " Rands" << endl;

	return 0;
}
int British()
{
	cout << "How much money would you like to convert?" << endl;
	cin >> userMoney;

	moneyOutput = userMoney * 0.6178;

	cout << "You now have " << moneyOutput << " Pounds" << endl;

	return 0;
}

int main()
{
	int conversionChoice;

	cout << fixed << showpoint;
	cout << setprecision(2);

	cout << "[1] Canadian Dollar\n[2] Euro\n[3] Indian Rupee\n[4] Japanese Yen\n[5] Mexican Peso\n"
		"[6] South African Rand\n[7] British Pound\n";
	cout << "What would you like to convert your money into?" << endl;
	cin >> conversionChoice;

	switch (conversionChoice)
	{
	case 1:
		Canada();
		break;
	case 2:
		Euro();
		break;
	case 3:
		India();
		break;
	case 4:
		Japan();
		break;
	case 5:
		Mexico();
		break;
	case 6:
		SouthAfrica();
		break;
	case 7:
		British();
		break;
	default:
		break;
	}

	system("pause");
	return 0;
}