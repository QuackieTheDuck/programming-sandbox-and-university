#include <iostream>
#include <cmath>
using namespace std;
int main(void){
	double a,b;
	char znak;
	const char dod='+';
	cout<<"Napisz dzialanie \n";
	cin>>a, cin>>znak, cin>>b;
	switch (znak){
		case dod: cout<<a<<znak<<b<<"="<<a+b;
		break;
		case '-': cout<<a<<znak<<b<<"="<<a-b;
		break;
		case '*': cout<<a<<znak<<b<<"="<<a*b;
		break;
		case '/': cout<<a<<znak<<b<<"="<<a/b;
		break;
		case '^': cout<<a<<znak<<b<<"="<<pow(a,b);
		break;
		case 'P':;
		case 'p': cout<<a<<znak<<b<<"="<<pow(a,1/b);
		break;
		default: cout<<"Nie znam takiego dzialania";	
	}
	cin.get(),cin.get();
	return 0;
}