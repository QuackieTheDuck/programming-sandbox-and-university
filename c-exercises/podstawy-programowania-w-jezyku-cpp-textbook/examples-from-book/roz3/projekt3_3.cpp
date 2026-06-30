#include <iostream>

using namespace std;

int main (){
    unsigned long long n, m=0;
    cout<<" n = ", cin>>n;
    while (n) m=10*m+n%10, n/=10;
    cout<<m;
    cin.get(), cin.get();
    return 0;
}
/*program odwraca kolejnosc cyfr wprowadzonej liczby*/