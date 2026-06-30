// uzycie wskaznikow do funkcji


#include <iostream>
#include <cmath>

using namespace std;

double sqr(double);
double (*pf1)(double)=&sqr;
double (*pf2)(double)=sqr;
double (*pf3)(double)=sin;
double (*pf4)(double);

int main (){
    cout<<pf1(0.5)<<'\n';
    cout<<pf2(0.5)<<'\n';
    cout<<pf3(0.5)<<'\n';
    pf4=cos;
    cout<<pf4(0.5)<<'\n';
    cin.get();
    return 0;
}

double sqr(double x){
    return x*x;
}