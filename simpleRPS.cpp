#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

void printChoice(int i)
{
	if(i == 1)
		cout << "ROCK";
	else if(i == 2)
		cout << "PAPER";
	else if (i == 3)
		cout << "SCISSORS";
}

int main()
{
	srand(time(0));
	int computerInput;
	int userInput;

	int numTie = 0,
	    numWin = 0,
	    numLoss = 0;

	cout << "Welcome to C++ ROCK, PAPER, SCISSORS!\n-------------------------------------\n\n";
	cout << "0 - TO END GAME\n";
	cout << "1 - ROCK\n";
	cout << "2 - PAPER\n";
	cout << "3 - SCISSORS\n";

	while(1)
	{
		cout <<"\n> ";
		cin >> userInput;
		cout << endl;
		
		if(userInput == 0)
			break;

		computerInput = rand() % 3 + 1;

		cout << "You picked ";
		printChoice(userInput);
		cout << endl;

		cout << "The computer picked ";
		printChoice(computerInput);
		cout << endl;

		if(userInput == computerInput)
		{
			cout << "TIE\n";
			numTie++;
		}
		

		if(userInput == 1 && computerInput == 2)
		{	
			cout << "YOU LOSE\n";
			numLoss++;
		}
		else if(userInput == 1 && computerInput == 3)
		{	
			cout << "YOU WIN\n";
			numWin++;
		}


		if(userInput == 2 && computerInput == 1)
		{
			cout << "YOU WIN\n";
			numWin++;
		}
		else if(userInput == 2 && computerInput == 3)
		{
			cout << "YOU LOSE\n";
			numLoss++;
		}


		if(userInput == 3 && computerInput == 1)
		{
			cout << "YOU LOSE\n";
			numLoss++;
		}
		else if(userInput == 3 && computerInput == 2)
		{
			cout << "YOU WIN\n";	
			numWin++;
		}

		cout << "-----------------\n";
	}

	cout << "TOTAL # of GAMES: " << numTie + numLoss + numWin << endl;
	cout << "NUM WIN: " << numWin << endl;
	cout << "NUM LOSS: " << numLoss << endl;
	cout << "NUM TIE: " << numTie << endl;
 	cout << endl;


	return 0;
}
