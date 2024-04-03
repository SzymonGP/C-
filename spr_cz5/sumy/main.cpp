#include <cstdlib>
#include <iostream>
#include <windows.h>
#include <cmath>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[])
{
	int liczby[7];
	int zmienna=0,suma=0;
	cout<<"Podaj zmienne"<<endl;
	for(int i=0;i<7;i++)
	{
	cin>>zmienna;
	liczby[i]=zmienna;
	if(i>2)
	{
		suma+=2*liczby[i]-2;
	}
	}
	cout<<"wynik to "<<suma<<endl;
	cout<<"\n";
 system("PAUSE");
 return EXIT_SUCCESS;
}
