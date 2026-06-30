#include <iostream>

using namespace std;

int main(){
    unsigned long long n, m=0;
    cout<<" n = ", cin>>n;
    while (n) m=m+n%10, n/=10;
    cout<<m;
    cin.get(), cin.get();
    return 0;
}
/*program liczy sume cyfr wprowadzonej liczby*/