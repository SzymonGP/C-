#include <cstdlib>
#include <iostream>
#include <windows.h>
#include<cmath>
using namespace std;

int main(int argc, char *argv[])
{
	int liczby[5][5];
	int inna=0;
	cout<<"Podaj liczby"<<endl;
	
	for(int j=0;j<5;j++)
	{
		for(int i=0; i<5;i++)
		{	
			if(i==inna&&j==inna)
			{
			liczby[j][i]=(i+1)*(i+1);
			}else
			liczby[j][i]=0;
		} 
		inna++;
	}
	for(int j=0;j<5;j++)
	{
		for(int i=0; i<5;i++)
		{
			cout<<liczby[j][i]<<" ";
		} 
		cout<<"\n";
	}
 system("PAUSE");
 return EXIT_SUCCESS;
}
