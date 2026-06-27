#include <iostream>
#include <cmath>

using namespace std;

int main(){
    double a, b, c, delta, x1, x2, x;
    cout<<" Funkcja kwadratowa ax^2+bx+c=0"<<'\n';
    cout<<" a = ", cin>>a;
    cout<<" b = ", cin>>b;
    cout<<" c = ",cin>>c;
    delta=b*b-4*a*c;
        if (delta>0){
            x1=(-b+sqrt(delta))/(2*a);
            x2=(-b-sqrt(delta))/(2*a);
            cout<<" funkcja ma dwa rowiaznia"<<'\n';
            cout<<" x1 = "<<x1<<'\n';
            cout<<" x2 = "<<x2<<'\n';
        }else if (delta==0){
            x=(-b)/(2*a);
            cout<<" funkcja ma jedno rozwiazanie x= "<<x<<'\n';
        }else if (delta<0){
         cout<<" brak rozwiazan fukcji "<<'\n';
        }
cin.get(), cin.get();
return 0;
}
/*program rozwiazuje funkcje kwadratowa*/