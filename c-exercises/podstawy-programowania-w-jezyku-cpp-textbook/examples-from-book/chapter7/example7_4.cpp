#include <iostream>

using namespace std;

long long silnia(int);
long long Newton(int, int);

int main(){
	int n, k;
	long long N;
	cout<<"n=", cin>>n, cout<<"k=",cin>>k;
	N=Newton(n,k);
	cout<<N;
	cin.get(), cin.get();
	return 0;
}

long long silnia (int n){
	long long s=1;
	for(long long i=2; i<=n; i++)s*=i;
return s;
}

long long Newton (int n, int k){
	return silnia(n)/(silnia(k)*silnia(n-k));
}