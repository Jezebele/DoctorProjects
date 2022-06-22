#include<iostream>
#include<Windows.h>

using namespace std;

const int height = 10;
const int width = 30;

void gotoxy(int x, int y)
{
	COORD coord;
	coord.X = x;
	coord.Y = y;
	
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int main()

{	// left to right
	for(int i=0; i < width; i++)
	{
		cout<<"*";
		
		Sleep(50);
	}
	// Down
	for(int i = 0; i < height; i++)
	{	
		gotoxy(width-1, i);
		
		cout <<"*"<< endl;
		
		Sleep(50);
	}
	// Right to Left
	for(int i=0; i < width; i++)
	{
		cout<<"*";
		gotoxy(width-i-1, height);
		Sleep(50);
	}
	
	// Up
	for(int i = 0; i < height; i++)
	{	
		gotoxy(0,height-1-i);
		
		cout <<"*";
		
		Sleep(50);
	}
	
	cin.get();
}
