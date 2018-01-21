#include <iostream>

using namespace std;

int main()
{
	char again;
	do
	{
		cout << "**Played an exciting game**" << endl;
		cout << "Do you want to play again? (y/n): " << endl;
		cin >> again;
	}
	while (again == 'y');
	{
		cout << "Okay, bye." << endl;
	}
}
