#include <cstdlib>
#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
 system("chcp 1250");
 int n;
 long double fab[100000]; 
 long double wynik=0; 
 cout << "Podaj element, który chcesz sprawdziæ: \n";
 cin>>n;
 int i=2;
 fab[0]=1;
 fab[1]=1;

do{
 fab[i]=fab[i-1]+fab[i-2];
 wynik=fab[i-1];
 i++;
 if(wynik==n)
 {
 	cout<<i-1<<" wyraz ci¹gu wynosi "<<wynik<<"\n";
 	break;
 }
 }while(wynik<=n);
 if(wynik!=n)
 {
 	cout<<"Nie istnieje taki wyraz\n";
 }
 
 system("PAUSE");
 return EXIT_SUCCESS;
}
