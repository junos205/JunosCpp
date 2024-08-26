#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

//#define DEBUG

using namespace std;


enum class TrumpClass
{
	Clover,
	Dia,
	Heart,
	Spade,
	End
};

enum class Trump
{
	A,
	Two,
	Three,
	Four,
	Five,
	Six,
	Seven,
	Eight,
	Nine,
	Ten,
	Jack,
	Queen,
	King,
	End
};

int trumpDeck[(int)TrumpClass::End][(int)Trump::End] = { {}, {} };
int playerChoice = 0;
int trump[52][2] = { {}, {} };

void TrumpSetting()
{
	int randClass = rand() % (int)TrumpClass::End ;

	int randCard = rand() % (int)Trump::End;

	int temp = 0;

	for (int i = 0; i < (int)TrumpClass::End; i++)
	{
		for (int j = 0; j < (int)Trump::End; j++)
		{
			trumpDeck[i][j] = j;
		}
	}
}

int main()
{
	TrumpSetting();

	cin >> playerChoice;

#ifdef DEBUG





#endif // DEBUG

	for (int i = 0; i < (int)TrumpClass::End * (int)Trump::End; i++)
	{
		trump[i / (int)TrumpClass::End][i / (int)Trump::End] = i % (int)Trump::End;
	}

	for (int i = 0; i < (int)TrumpClass::End; i++)
	{
		for (int j = 0; j < (int)Trump::End; j++)
		{

			if (trumpDeck[i][j] == playerChoice)
			{
				cout << "X" << "\t";
			}
			else
			{

				cout << trumpDeck[i][j] << "\t";
}



		}
		cout << endl;
	}
}