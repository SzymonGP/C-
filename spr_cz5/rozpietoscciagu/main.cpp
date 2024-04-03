#include <cstdlib>
#include <iostream>
#include <windows.h>
#include <cmath>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[])
{
	int tab[8];
	int tab2[8];
	int zmienna=0,i=0;
	cout<<"Podaj zmienne"<<endl;
	for(i=0;i<8;i++)
	{
	cin>>zmienna;
	tab[i]=zmienna;
	tab2[i]=zmienna;
	}
	cout<<endl<<"Tablican ktora podales"<<endl;
for(i=0;i<8;i++)
		{
			cout<<tab[i]<<" ";
		}
		cout<<endl;

int temp = 0;

	for(int gl=0;gl<7;gl++)
	{
		for(int zd=0;zd<7;zd++)
	    {
	    	if(tab[zd]>tab[zd+1])
			{
			 temp = tab[zd];
			 tab[zd]=tab[zd+1];
			 tab[zd+1]=temp;
			}
	    }
	}
cout<<endl<<"Wartosc najwieksza="<<tab[7]<<endl;
cout<<endl<<"Wartosc najmniejsza="<<tab[0]<<endl;		
cout<<endl<<"Rozpietosc ciagu="<<tab[7]-tab[0]<<endl<<endl;			
 system("PAUSE");
 return EXIT_SUCCESS;
}
