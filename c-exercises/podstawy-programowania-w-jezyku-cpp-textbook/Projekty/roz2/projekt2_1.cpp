#include <iostream>

using namespace std;

int main(){             //program sprawdza podzielnosc danej liczby przez 7
    long n;
    cout<<"n = ", cin>>n;
    if (!(n%7)) cout<<"jest podzielna przez 7";
        else cout<<"nie jest podzielna przez 7";
    cin.get(), cin.get();
    return 0;
}