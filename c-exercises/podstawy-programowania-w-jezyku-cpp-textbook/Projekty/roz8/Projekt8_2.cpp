#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
	const int n=10;
	unsigned int tablica[n],i,Mx,Mn;
	for (i=0;i<n;++i) tablica[i]=rand()%100;
	for (i=0;i<n;++i) cout<<tablica[i]<<'\t';
	Mx=Mn=tablica[0];
	for(i=1;i<n;++i)if (Mx<tablica[i])Mx=tablica[i];
					else if(Mn>tablica[i])Mn=tablica[i];
	cout<<"\nMaximum to: "<<Mx<<"Minimum to: "<<Mn;
	cin.get(),cin.get();
	return 0;
}