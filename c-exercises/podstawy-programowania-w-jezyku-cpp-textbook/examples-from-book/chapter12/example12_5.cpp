#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
double S, V;
int r, wr=5, wS=15, wV=16;
cout<<setw(wr)<<'r'<<setw(wS)<<"S   "<<setw(wV)<<"V     "<<'\n';
for(r=0;r<=100;r+=20){
    S=4*M_PI*r*r, V=4/3.*M_PI*r*r*r;
    cout<<fixed<<setw(wr)<<r<<setprecision(3)<<setw(wS)<<S<<setprecision(4)<<setw(wV)<<V<<'\n';
}
    cin.get(), cin.get();
    return 0;
}
// program oblicza pole sfery i objetosc kuli w zaleznosci od zadanego promienia r
// zastosowane manipulatory wymuszaja "schludnie" czytelnir i estetycznie zapisane dane
// program jest po prostu przykladem formatowania tekstu w cpp