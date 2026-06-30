#include <iostream>

using namespace std;

int main(){
int a;
cout<<" podaj liczbe: ", cin>>a;
if(!(a % 6)) cout<<"  liczba podzielna przez 2 oraz 3  "<<'6'<<'\n';
    else if(!(a % 2)) cout<<"  liczba podzielna tylko przez 2  "<<'2'<<'\n';
        else if(!(a % 3)) cout<<" liczba podzielna tylko przez 3  "<<'3'<<'\n';
            else cout<<"    liczba nieoodzielna przez 2 ani przez 3     "<<'1'<<'\n';
cin.get(), cin.get();
return 0;
}
/*program sprawdz podzielnosc liczby przez 2 oraz 3*/