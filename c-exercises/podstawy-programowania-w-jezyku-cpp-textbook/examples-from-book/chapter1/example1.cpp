#include<iostream>
#include<cmath>

using namespace std;
double r, V, S;

int main(){                 // program liczy pole i objetosc kuli
    cout<<"r = ", cin>>r;
    V=4.0/3*M_PI*r*r*r;
    S=4.0*M_PI*r*r*r;
    cout<<"V = "<<V<<" S = "<<S<<endl;
    cin.get(),cin.get();
    return 0;
}