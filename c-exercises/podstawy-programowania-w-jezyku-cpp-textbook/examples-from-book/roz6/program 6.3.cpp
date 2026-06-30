#include <iostream>
#include <cmath>

using namespace std;

int main(void){
	double x, y=1;
	int n;
	enum { iks=1, iks_kw, sin_x, cos_x};
	cout<<"x=", cin>>x;
	cout<<"n=", cin>>n;
	switch (n){
		case sin_x: y=sin(x); break;
		case cos_x: y=cos(x); break;
		case iks_kw: y=x*x; break;
		case iks: y*=x; break;
	}
	cout<<"y="<<y;
	cin.get(), cin.get();
	return 0;
}