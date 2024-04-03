#include <cstdlib>
#include <iostream>
#include <windows.h>
#include <cmath>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[])
{
	int msc=0;
	cout<<"Podaj miesiac urodzenia"<<endl;
	cin>>msc;
	float liczby[8+msc];
	
		for(int i=0; i<8+msc;i++)
		{
		liczby[i]=i;
		} 
		for(int i=0; i<8+msc;i++)
		{	
			liczby[i]=sqrt(liczby[i]);
			cout<< fixed << setprecision( 2 )<<liczby[i]<<"|||";
		} 
	cout<<"\n";
 system("PAUSE");
 return EXIT_SUCCESS;
}
