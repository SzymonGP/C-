#include <cstdlib>
#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy(int x, int y)
{
 COORD coord;
 coord.X = x;
 coord.Y = y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
int main(int argc, char *argv[])
{
	int dlugosc=9,wiersz=5,kolumna=5;
	int wiersz1=wiersz,kolumna1=kolumna;
	
 for (int i = 0;i<dlugosc;i++)
 {
 	gotoxy(wiersz1,kolumna);
 	cout<<"*";
	wiersz1++;
 }
 for (int i = 0;i<dlugosc;i++)
 {
 	gotoxy(wiersz,kolumna1);
 	cout<<"*";
	kolumna1++;
 }
 
 cout<<"\n\n\n";
 system("PAUSE");
 return EXIT_SUCCESS;
}
