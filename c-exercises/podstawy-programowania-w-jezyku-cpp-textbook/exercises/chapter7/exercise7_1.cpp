#include <iostream>
#include <cstdlib>

using namespace std;

long long Fibonacci(int);

int main(){
	int n;
	long long F;
	cout<<"n=",cin>>n;
	if(n<0){
	cout<<"Podano nieprawidlowe n";
	exit(0);
	}
	F=Fibonacci(n);
	cout<<F;
	cin.get(), cin.get();
	return 0;
}

long long Fibonacci(int n){
	if(n==1 || n==0)return n;
	return (Fibonacci(n-1)+Fibonacci(n-2)); 
}
