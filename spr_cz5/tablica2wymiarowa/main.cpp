#include <cstdlib>
#include <iostream>
#include <windows.h>
#include<cmath>
using namespace std;

int main(int argc, char *argv[])
{
	int liczby[2][4];
	int suma,dzielnik=0;
	cout<<"Podaj liczby"<<endl;
	
	for(int j=0;j<2;j++)
	{
		for(int i=0; i<4;i++)
		{
			cout<<"Liczba A["<<j<<"]["<<i<<"] = ";
			cin>>liczby[j][i];
		} 
	}
	for(int j=0;j<2;j++)
	{
		for(int i=0; i<4;i++)
		{
			cout<<liczby[j][i]<<" ";
		} 
		cout<<"\n";
	}
 system("PAUSE");
 return EXIT_SUCCESS;
}
