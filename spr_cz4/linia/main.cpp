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
	int dlugosc,wiersz=55,kolumna=10;
	
	do
	{
	
		cout<<"Dlugoœæ od 2 do 20";
		cin>> dlugosc;
	}while(dlugosc<2 || dlugosc>20);



 for (int i = 0;i<dlugosc;i++)
 {
 	gotoxy(wiersz,kolumna);
 	cout<<"**"<<"\n";
	kolumna++;
 }
 
 
 system("PAUSE");
 return EXIT_SUCCESS;
}
