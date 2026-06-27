#include <iostream>

using namespace std;

int nwd(int, int);	//deklaracja funkcji

int main(){
	int a, b, c;
	cout<<"a=", cin>>a, cout<<"b=", cin>>b;
	c=a/nwd(a,b)*b;  //wywolanie funkcji
	cout<<"nww("<<a<<','<<b<<")="<<c;
	cin.get(), cin.get();
	return 0;
}

int nwd(int a, int b){		//definiowanie funkcji
	do{
		if (a>b){
			a%=b;
		} else {
			b%=a;
		}
	}while(a&&b);
	return a+b;
}