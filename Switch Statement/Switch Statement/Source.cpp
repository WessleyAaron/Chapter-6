//Switch Statement
//4-19-18
//Aaron Wessley

#include <iostream>
#include <string>

using namespace std;

int main()
{
	int bookScanID = 0;
	string bookOwner, repeatChoice;

	do
	{
		cout << "Book ID number please enter here" << endl;
		cin >> bookScanID;

		switch (bookScanID)
		{
		case 277343:
			bookOwner = "Aaron";
			break;
		case 277364:
			bookOwner = "Brosius";
			break;
		case 277362:
			bookOwner = "Brady";
			break;
		case 277346:
			bookOwner = "Shawn";
			break;
		case 277357:
			bookOwner = "Kane";
			break;
		default:
			bookOwner = "Invalid";
			break;
		}
		if (bookOwner == "Invalid")
		{
			cout << "Invalid" << endl;
		}

		else
		{
			cout << bookOwner << endl;

			cout << "Again?" << endl;
			cin >> repeatChoice;
		}
	} while (repeatChoice == "y");

	system("pause");
	return 0;
}