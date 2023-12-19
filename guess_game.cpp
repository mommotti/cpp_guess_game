#include <iostream>
#include <string>
using namespace std;

bool playGame(int guesses)
{
	cout << "Playing Game...\n";
	int correct = 42;
	int guessCount = 0;
	while(guessCount < guesses)
	{

	
	cout << "Guess a number...";
	cout << "You get " << guesses << " guesses.\n";
	int guess;
    cin >> guess;
	if (guess == correct)
	{
		return true;
	}
	guessCount++;
	cout << "You've guessed " << guessCount << " times.\n"
}
    return false;

}

int main()
{
	cout << "Do you want to play a game? (y/n) ";
	char response = tolower(getchar());
	cout << "You entered: " << response << endl;

	if(response == 'y')
	{
		cout << "Let's play a game, then...\n";
		cout << "Have you beaten the game?\n0: no.\n1: yes.\n";
		bool beatGame;
		cin >> beatGame;

		bool won;
		if (beatGame)
		{
		  cout << "Because you beat the game, you can now play IMPOSSIBLE mode.\n";
			won = playGame(1);
			 if (won)
		   {
				cout << "Congrats, you won!\n";
		   }
		   else
		   {
				cout << "You lost. Try again later.\n";
		   }
		}  else
		{
			cout << "What difficulty?\n";
			cout << "0: easy\n";
			cout << "1: medium\n";
			cout << "2: hard\n";
			int difficulty;
			cin >> difficulty;

			switch(difficulty)
			{
				case 0: //easy
					won = playGame(10);
					break;
				case 1: //medium
					won = playGame(5);
					break;
				case 2: //hard
					won = playGame(3);
					break;
				default:
					cout << "Invalid selection\n";
					break;
			}
		   if (won)
		   {
				cout << "Congrats, you won!\n";
		   }
		   else
		   {
				cout << "You lost. Try again later.\n";
		   }
		}
	}
	else if(response == 'n')
	{
		cout << "Maybe next time. Goodbye. \n";
	}
	else
	{
		cout << "What? Either yes or no, please. \n";
	}
	system("pause");
	return 0;
}