#include<iostream>
#include<Windows.h>

using namespace std;

const int height = 20;
const int width = 80;
char field[width][height];
char buttons[256];

void create_field()
{
	for(int y=0; y<height; y++)
	{
		for(int x =0; x<width; x++)
		{ 
			cout << field[x][y];
		}
		
		cout << endl;
	}
}

void delete_field()
{
	for(int y=0; y<height; y++)
	{
		for(int x =0; x<width; x++)
		{ 
			field[x][y] = ' ';
		}
		
	}
}

void create_borders()
{
	for(int x = 0; x<width; x++)
	{
		field[x][0] = 219;
		field[x][height-1] = 219 ;
	}
	
	for(int y = 0; y<height ; y++)
	{
		field[0][y] = 219;
		field[width-1][y] = 219;
	}
}

void reader(char buttons[])
{
	for(int x=0; x<256; x++)
	{
		buttons[x] = (char)(GetAsyncKeyState(x) >> 8);
	}
}

void gotoxy(int x, int y)
{
	COORD coord;
	coord.X = x;
	coord.Y = y;
	
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void inviscursor()
{
	HANDLE out = GetStdHandle(STD_OUTPUT_HANDLE);
	
	CONSOLE_CURSOR_INFO		cursorInfo;
	
	GetConsoleCursorInfo(out,&cursorInfo);
	cursorInfo.bVisible = false;
	SetConsoleCursorInfo(out,&cursorInfo);
}

void reader_control()
{	
	reader(buttons);
	if(buttons['A'] != 0)
	{

	}
}

int main ()
{		
	inviscursor();

	while(true)
	{	
		delete_field();
		create_borders();
		reader_control();
			
		
		gotoxy(0,0);
		create_field();
		Sleep(100);
			
	}
	
	
}

