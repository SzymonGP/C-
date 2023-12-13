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
	int numer,wiersz=5,kolumna=3;
	int wiersz1 = wiersz;
	int kolumna1 = kolumna;
		cout<<"Podaj numer z dziennika: ";
		cin>> numer;
	int numer1=numer+15;
		
 for (numer;numer<=numer1;numer++)
 {		
 		gotoxy(wiersz1,kolumna1);
		cout<<"I="<<numer;
		wiersz1=wiersz1+12;
		gotoxy(wiersz1,kolumna1);
		cout<<"I*I="<<numer*numer;
		wiersz1=wiersz1+12;
		gotoxy(wiersz1,kolumna1);
		cout<<"I*I*I="<<numer*numer*numer;
 		wiersz1=wiersz;
 		kolumna1++;
 	
 }


 cout<<"\n\n\n";
 system("PAUSE");
 return EXIT_SUCCESS;
}
