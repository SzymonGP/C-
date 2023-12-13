#include <cstdlib>
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <cmath>
#include <string>
#include <iomanip>  
using namespace std;

int main(int argc, char** argv)
{

float suma=0,liczba,suma1;

for (liczba=10;liczba<=99;liczba++)
{	
	suma1=liczba;
	suma=suma+suma1;
	cout<<"Suma w "<<liczba<<" petli = "<<suma;
	cout<<"\n";

}	
		
		cout<<"Srednia = ";
		printf("%.2f",suma/99);
	return 0;
}
