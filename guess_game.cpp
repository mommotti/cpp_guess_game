#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

bool playGame(int guesses)
{
	cout << "Playing Game...\n";
	int correct;
		srand(time(NULL));
	if(guesses == 1)
	{
		correct = rand() % 200;
	}
	else
	{
		correct = rand() % 20;
	}
	cout << correct << endl;
	int guessCount = 0;
		
	cout << "Guess a number...\n";
	cout << "You have " << guesses << " guesses.\n";
	while(guessCount < guesses)
	{
	int guess;
    cin >> guess;
	if (guess == correct)
	{
		return true;
	} 
	else if (guess > correct)
	{
		cout << "Your guess was too high.\n";
	}
	else
	{
		cout << "Your guess was too low.\n";
	}
	guessCount++;
	cout << "You've guessed " << guessCount << " / " << guesses << " times.\n";
	
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