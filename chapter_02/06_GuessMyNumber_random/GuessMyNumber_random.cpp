#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	srand (static_cast <unsigned int> (time(0))); //запускаем генератор случайных чисел
	int secretNumber = rand() % 100 + 1; //случайное число в диапазоне  от 1 до 100
	int tries = 0;
	int guess;
	cout  << "Welcome to Guess My Number\n\n";
	do
	{
		cout <<"Enter a guess: ";
		cin >> guess;
		++tries;
		if (guess > secretNumber)
		{
			cout << "Too high!" << endl;
		}
		else if (guess < secretNumber)
		{
			cout << "Too low!" << endl;
		}
		else
		{
			cout << "\nThat's it! You got in " << tries << " guesses!" << endl;
		}
	}
	while (guess != secretNumber);
}
