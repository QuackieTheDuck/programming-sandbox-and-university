#include <iostream>
#include<cstdlib>

using namespace std;

long long Hanoi(int);

int main(){
	int n;
	long long H;
	cout<<"n=",cin>>n;
	if(n<0){
		cout<<"Podano nieprawidlowa liczbe";
		exit(0);
	}
	H=Hanoi(n);
	cout<<H;
	cin.get(), cin.get();
	return 0;
}

long long Hanoi(int n){
	if(n==0)return 0;
	return 2*Hanoi(n-1)+1;
	
}