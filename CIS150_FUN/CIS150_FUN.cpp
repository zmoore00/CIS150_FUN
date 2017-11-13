// CIS150_FUN.cpp : Defines the entry point for the console application.
//
//testing
//testing again
//zack moore

#include "stdafx.h"
#include "iostream"
#include "iomanip"
#include "string"
#include <Windows.h>

using namespace std;


int main()
{
	int count = 0;
	int wcount = 5;
	char posOne[5][5] =
	{
		{ ' ' , 'O' , ' ' , ' ' , ' '},
		{ '/' , '|' , '\\' , ' ' , ' ' },
		{ '/' , ' ' , '\\' , ' ' , ' ' },
		{ ' ' , ' ' , ' ' , ' ' , ' ' },
		{ ' ' , ' ' , ' ' , ' ' , ' ' },
	};

	char posTwo[5][5] =
	{
		{ '\\' , 'O' , '/' , ' ' , ' ' },
		{ ' ' , '|' , ' ' , ' ' , ' ' },
		{ '/' , ' ' , '\\' , ' ' , ' ' },
		{ ' ' , ' ' , ' ' , ' ' , ' ' },
		{ ' ' , ' ' , ' ' , ' ' , ' ' },
	};

	char posThree[5][5] =
	{
		{ ' ' , '\\' , 'O' , ' ' , ' ' },
		{ ' ' , '/' , '\\' , ' ' , ' ' },
		{ '|' , ' ' , '\\' , ' ' , ' ' },
		{ ' ' , ' ' , ' ' , ' ' , ' ' },
		{ ' ' , ' ' , ' ' , ' ' , ' ' },
	};

	char posFour[5][5] =
	{
		{ ' ' , ' ' , ' ' , ' ' , ' ' },
		{ ' ' , '_' , '_' , '\\' , 'O' },
		{ '/' , ')' , ' ' , '|' , ' ' },
		{ ' ' , ' ' , ' ' , ' ' , ' ' },
		{ ' ' , ' ' , ' ' , ' ' , ' ' },
	};

	char posFive[5][5] =
	{
		{ '_' , '_' , '/' , ' ' , ' ' },
		{ ' ' , ' ' , '\\' , 'O' , ' ' },
		{ ' ' , ' ' , '(' , '\\' , ' ' },
		{ ' ' , ' ' , ' ' , ' ' , ' ' },
		{ ' ' , ' ' , ' ' , ' ' , ' ' },
	};
	char posSix[5][5] =
	{
		{ '\\' , ' ' , '/' , ' ' , ' ' },
		{ ' ' , '|' , ' ' , ' ' , ' ' },
		{ '/' , 'O' , '\\' , ' ' , ' ' },
		{ ' ' , ' ' , ' ' , ' ' , ' ' },
		{ ' ' , ' ' , ' ' , ' ' , ' ' },
	};
	char posSeven[5][5] =
	{
		{ ' ' , ' ' , '|' , '_' , '_' },
		{ ' ' , 'O' , '/' , ' ' , ' ' },
		{ ' ' , '/' , ')' , ' ' , ' ' },
		{ ' ' , ' ' , ' ' , ' ' , ' ' },
		{ ' ' , ' ' , ' ' , ' ' , ' ' },
	};
	char posEight[5][5] =
	{
		{ ' ' , ' ' , ' ' , ' ' , ' ' },
		{ 'O' , '/' , '_' , '_' , ' ' },
		{ '|' , ' ' , ' ' , '(' , '\\' },
		{ ' ' , ' ' , ' ' , ' ' , ' ' },
		{ ' ' , ' ' , ' ' , ' ' , ' ' },
	};
	char posNine[5][5] =
	{
		{ 'O' , '/' , ' ' , ' ' , ' ' },
		{ '//' , '\\' , ' ' , ' ' , ' ' },
		{ '/' , ' ' , '|' , ' ' , ' ' },
		{ ' ' , ' ' , ' ' , ' ' , ' ' },
		{ ' ' , ' ' , ' ' , ' ' , ' ' },
	};
	char posTen[5][5] =
	{
		{ ' ' , 'O' , '/' , ' ' , ' ' },
		{ '/' , '|' , ' ' , ' ' , ' ' },
		{ '/' , ' ' , '\\' , ' ' , ' ' },
		{ ' ' , ' ' , ' ' , ' ' , ' ' },
		{ ' ' , ' ' , ' ' , ' ' , ' ' },
	};
	while (true)
	{
		
		while (count <= 15)
		{
			system("CLS");
			for (int rows = 0; rows < 5; rows++)
			{
				cout << setw(wcount) << "";
				for (int cols = 0; cols < 5; cols++)
				{
					if (count == 0)
					{
						cout << posOne[rows][cols];
					}
					else if (count == 1)
					{
						cout << posTwo[rows][cols];
					}
					else if (count == 2)
					{
						cout << posThree[rows][cols];
					}
					else if (count == 3)
					{
						cout << posFour[rows][cols];
					}
					else if (count == 4)
					{
						cout << posFive[rows][cols];
					}
					else if (count == 5)
					{
						cout << posSix[rows][cols];
					}
					else if (count == 6)
					{
						cout << posSeven[rows][cols];
					}
					else if (count == 7)
					{
						cout << posEight[rows][cols];
					}
					else if (count == 8)
					{
						cout << posNine[rows][cols];
					}
					else if (count == 9)
					{
						cout << posTwo[rows][cols];
					}
					else if (count == 10)
					{
						cout << posOne[rows][cols];
					}
					else if (count == 11)
					{
						cout << posTen[rows][cols];
					}
					else if (count == 12)
					{
						cout << posOne[rows][cols];
					}
					else if (count == 13)
					{
						cout << posTen[rows][cols];
					}
					else if (count == 14)
					{
						cout << posOne[rows][cols];
					}
					else if (count == 15)
					{
						cout << posTen[rows][cols];
						system("CLS");
						wcount = 5;
						count = 0;
					}

				}
				cout << endl;
			}
			Sleep(1000);
			count++;
			if (count <= 9)
			{
				wcount += 2;
			}
		}
	}

	system("pause");
    return 0;
}

