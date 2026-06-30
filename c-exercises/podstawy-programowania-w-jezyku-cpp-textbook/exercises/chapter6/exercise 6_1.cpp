#include <iostream>

using namespace std;

int main(void){
	int n;
	cout<<"n=", cin>>n;
	switch (n%360/90){
		case 0: cout<<"I \n"; break;
		case 1: cout<<"IV \n"; break;
		case 2: cout<<"III \n"; break;
		case 3: cout<<"II \n"; break;
	}
	cin.get(), cin.get();
	return 0;
}