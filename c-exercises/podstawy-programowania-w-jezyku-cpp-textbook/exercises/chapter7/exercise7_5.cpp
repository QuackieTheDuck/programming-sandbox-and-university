#include <iostream>
#include<cmath>

using namespace std;

float Hanoi (int n){
	return(pow(2,n)-1);
}

int main(){
	int n;
	cout<<"Podaj ilosc krazkow wiezy Hanoi: ",cin>>n;
	cout<<Hanoi(n);
	
	cin.get(),cin.get();
	return 0;
}