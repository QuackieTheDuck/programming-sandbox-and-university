#include <iostream>

using namespace std;

int main (void){
	int n;
	enum {Mon=1, Tue, Wed, Thu, Fri, Sat, Sun};
	cout<<"n=", cin>>n;
	switch (n){
		case Mon: cout<<"Monday \n"; break;
		case Tue: cout<<"Tuesday \n"; break;
		case Wed: cout<<"Wednesday \n"; break;
		case Thu: cout<<"Thursday \n"; break;
		case Fri: cout<<"Friday \n"; break;
		case Sat: cout<<"Saturday \n"; break;
		case Sun: cout<<"Sunday \n"; break;
		default: cout<<"Niewlasciwa liczba \n";
	}
	cin.get(), cin.get();
	return 0;
}