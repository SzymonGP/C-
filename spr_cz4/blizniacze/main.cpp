#include <cstdlib>
#include <iostream>
#include <windows.h>
#include<cmath>
using namespace std;

int main(int argc, char *argv[])
{
	int liczba,pierwsza=0,pierwsza1=0,dzielnik=2,a,b;
	cout<<"Podaj 1 liczbe = ";
	cin>> a;
	cout<<"Podaj 2 liczbe = ";
	cin>> b;
	
int wait;	
 int k;
 int i;
 pierwsza = a;


cout<<"Znalezione liczby blizniacze to: \n";
 for(a;a<=b;a++)
 {
	
 k=0;
 for( i=2;i<=sqrt(pierwsza);++i)
 {
 if ((pierwsza) % i==0)
 {
 k=1;
 goto koniec;
 }
 }
 if ( k==0)
 {
	if(wait+2==pierwsza)
	{
	cout<<wait<<"  "<<pierwsza<<"\n";
	}
  wait = pierwsza;
 goto koniec;
 }
 koniec:
  pierwsza++;
  }
   




 system("PAUSE");
 return EXIT_SUCCESS;
}
