#include <iostream>

using namespace std;

int main(){
    double a=0.3, b=0.1, c;
    c=a-b-b-b;
    if (c) cout<<"nie jest rowna zero";
        else cout<<"jest rowna zero";
    cout<<'\n'<<c<<'\n';
    cin.get();
    return 0; 
}
// program sprawdza czy wynik dzielenia z wiersza 7 jest rowny 0