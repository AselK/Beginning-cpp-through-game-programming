#include <iostream>

using namespace std;

int main()
{
	char again = 'y';
	while (again == 'y')
	{
		std::cout <<"\n**Played an exciting game**";
		std::cout <<"\nDo you want to play again? (y/n): ";
		std::cin >> again;
	}
	std::cout <<"\nOkay. bye.";
}

