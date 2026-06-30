#include <iostream>

using namespace std;

double Hanoi (int n){
	if(n==0)return 0;
	if(n>0)return(2*Hanoi(n-1)+1);
}

int main(){
	int n;
	cout<<"Podaj wysokosc wiezy Hanoi: ",cin>>n;
	cout<<Hanoi(n);
	
	cin.get(),cin.get();
	return 0;
}