#include <iostream>

using namespace std;

int main()
{
	cout << "Difficulty Levels" << endl;
	cout << "1 - Easy" << endl;
	cout << "2 - Normal" << endl;
	cout << "3 - Hard" << endl;
	int choise;
	cin >> choise;
	switch (choise)
	{
		case 1:
			cout << "You picked Easy." << endl;
			break;
		case 2:
			cout << "You picked Normal." << endl;
			break;
		case 3:
			cout << "You picked Hard." << endl;
			break;
		default:
			cout << "You made an illegal choice." << endl;
	}
	return 0;
}

