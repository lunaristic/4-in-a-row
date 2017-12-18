//four in a row
#include <iostream>
using namespace std;

int mapping ();
int user1 ();
int user2 ();
int gamePlay ();

int main()
{
	cout << "Four in a row" << endl;
	cout << endl;
	
	mapping();
	cout << endl;
	
	user1();
	user2();
}

int mapping ()
{
	int map[6][7];
	
	for ( int x = 1; x <= 7; x++)
	{
		cout << " " << x;
	}	
	cout << endl;
	
	for ( int i = 0; i < 6; i++ )
	{
		for ( int j = 0; j < 7; j++ )
		{
			map[i][j] = 0;
			cout << " " << map[i][j];	
		}
		cout << endl; 
	}
}

int user1 ()
{
	int  userInput1;
	cout << "Player 1" << endl;
	cout << "Masukkan angka (1~7)" << endl;
	cout << "Angka : ";
	cin >> userInput1;  
	
	for ( int a = 1; a <= 7; a++ )
	{
		if ( userInput1 == a )
		{
			system ("cls");
		}
	}             
}     

int user2 ()
{
	int userInput2;
	cout << "Player 2" << endl;
	cout << "Masukkan angka (1~7)" << endl;
	cout << "Angka : ";
	cin >> userInput2;
	
	for ( int b = 1; b <= 7; b++ )
	{
		if ( userInput2 == b )
		{
			system ("cls");
		}
	}
}

int gamePlay ()
{
	
}

  
