//Player choose the number and PC try guess the number 
#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
	srand (static_cast <unsigned int> (time(0))); //запускаем генератор случайных чисел
	std::cout  << "Welcome to Guess My Number\n\n";
	int number = 45;
	int secretNumber;
	int tries = 0;
	while (secretNumber != number)
	{
		secretNumber = rand() % 100 + 1;
		std::cout <<"PC guess the number: "<< secretNumber << std::endl; 
		++tries;
		if (secretNumber > number)
		{
			std::cout <<"Too high!" << std::endl;
			std::cout << "Try again!" << std::endl;
		}
		else if (secretNumber < number)
		{
			std::cout <<"Too low!" << std::endl;
			std::cout << "Try again!" << std::endl;
		}
		else if (secretNumber == number)
		{
			std::cout << "You got it!" << std::endl;	
		}
	}
	std::cout << "\nThat's it! You got in " << tries << " guesses!" << std::endl;
}
