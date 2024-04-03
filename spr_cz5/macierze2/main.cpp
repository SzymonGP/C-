#include <cstdlib>
#include <iostream>
#include <windows.h>
#include<cmath>
using namespace std;

int main(int argc, char *argv[])
{
	int A[2][3];
	int B[2][3];
	int C[2][3];
	int zero=0,plus=0,minus=0;
	cout<<"Podaj liczby"<<endl;
	
	for(int j=0;j<2;j++)
	{
		for(int i=0; i<3;i++)
		{
			cout<<"Liczba A["<<j<<"]["<<i<<"] = ";
			cin>>A[j][i];
		} 
	}
	for(int j=0;j<2;j++)
	{
		for(int i=0; i<3;i++)
		{
			cout<<"Liczba B["<<j<<"]["<<i<<"] = ";
			cin>>B[j][i];
		} 
	}
	cout<<"Macierz A\n";
	for(int j=0;j<2;j++)
	{
		for(int i=0; i<3;i++)
		{
			cout<<A[j][i]<<" ";
		} 
		cout<<"\n";
	}
	cout<<"\n";
	cout<<"Macierz B\n";
	for(int j=0;j<2;j++)
	{
		for(int i=0; i<3;i++)
		{
			cout<<B[j][i]<<" ";
		} 
		cout<<"\n";
	}
	cout<<"Macierz C\n";
	for(int j=0;j<2;j++)
	{
		for(int i=0; i<3;i++)
		{
			C[j][i]=2*A[j][i]-3*B[j][i];
			cout<<C[j][i]<<" ";
			if(C[j][i]==0)
			zero++;
			else if(C[j][i]>0)
			plus++;
			else
			minus++;
		} 
		cout<<"\n";
	}
	cout<<"Liczby rowne zero="<<zero<<endl;
	cout<<"Liczby wieksze od zera="<<plus<<endl;
	cout<<"Liczby mniejsze od zera="<<minus<<endl;
 system("PAUSE");
 return EXIT_SUCCESS;
}
