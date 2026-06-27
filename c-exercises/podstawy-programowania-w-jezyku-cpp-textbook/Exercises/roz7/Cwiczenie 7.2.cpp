#include <iostream>
#include<cmath>

using namespace std;

float Fibonacci(int);

int main (){
	int n;
	float F;
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

float Fibonacci(int n){
	float g, gg, ggg;
	g=((1+pow(5,(1.0/2)))/2);
	gg=((1-pow(5,(1.0/2)))/2);
	ggg=1/pow(5,(1.0/2));
	if(n==0 || n==1)return n;
	else return ggg*(pow(g,n)-pow(gg,n));
	
}