#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

int main()
{
	enum fields {WORD, HINT, NUM_FIELDS};
	const int NUM_WORDS = 10;
	const std::string WORDS[NUM_WORDS][NUM_FIELDS] =
	{
		{"wall", "Do you feel you're banging your head against something?"},
		{"glasses", "These might help you see the answer."},
		{"labored", "Going slowly, is it?"},
		{"persistent", "Keep at it."},
		{"jumble", "It's what the game is all about."},
		{"delighted", "Very pleased, very happy."},
		{"hilarious", "Very funny."},
		{"exhausted", "Very tired."},
		{"filthy", "Very dirty."},
		{"refugee", "Person who moved in another place to live."}
	};
	srand(static_cast <unsigned int> (time(0)));
	int choice = (rand() % NUM_WORDS);
	std::string theWord = WORDS[choice][WORD]; //слово которое нужно угадать
	std::string theHint = WORDS[choice][HINT]; //подсказка для слова
	
	std::string jumble = theWord; //перемешанный вариант слова
	int length = jumble.size();
	for (int i = 0; i < length; ++i)
	{
		int index1 = (rand() % length);
		int index2 = (rand() % length);
		char temp = jumble[index1];
		jumble[index1] = jumble[index2];
		jumble[index2] = temp;
	}
	std::cout << "\t\t\tWelcome to Word Jumble!\n\n";
	std::cout << "Unscramble the letters to make a word.\n";
	std::cout << "Enter 'hint' for a hint.\n";
	std::cout << "Enter 'quit' to quit the game.\n\n";
	std::cout << "The jumble is: " << jumble;
	std::string guess;
	//std::cout << "\n\nYour guess: ";
	//std::cin >> guess;

	while (guess != "quit")
	{
		std::cout << "\n\nYour guess: ";
		std::cin >> guess;
		if (guess == "hint")
		{
			std::cout << theHint << std::endl;
			length = length / 2;
			std::cout << "Your score is: " << length << std::endl;
		}
		else if (guess == theWord)
		{
			std::cout << "\nThat's it! You guessed it!\n" << std::endl;
			length = theWord.size();
			std::cout << "Your score is: " << length << std::endl;
			//std::cout << "\nThanks for playing.\n" << std::endl;
			std::cout << "Do you want to continue the game. yes/no?";
			std::string userInput;
			std::cin >> userInput;
			if ( userInput == "no")
			{
				break;
			}
		}
		else 
		{
			std::cout << "Sorry, that's not it." << std::endl;
		}
	}
}
