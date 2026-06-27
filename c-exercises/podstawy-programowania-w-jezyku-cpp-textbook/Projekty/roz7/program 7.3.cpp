#include <iostream>

using namespace std;

long long silnia(int);

int main(){
	int n;
	long long s;
	cout<<"n=", cin>>n;
	s=silnia(n);
	cout<<n<<"!="<<s;
	cin.get(), cin.get();
	return 0;
}

long long silnia(int n){
	if(n==1 || n==0) return 1;
	return n*silnia(n-1);
}