#include <iostream>

using namespace std;

long long silnia (int);

int main (){
	int n;
	long long s;
	cout<<"n=", cin>>n;
	s=silnia(n);
	cout<<n<<"!="<<s;
	cin.get(), cin.get();
	return 0;
}

long long silnia (int n){
	long long s=1;
	for(int i=2; i<=n; ++i) s*=i;
	return s;
}