#include <iostream>

using namespace std;

int main(){
    char a;
    cout<<"Podaj dowolna duza litere: ", cin>>a;
    if ('A'<=a && a<='Z') a-='A'-'a',cout<<a<<'\n';
        else cout<<"    "<<a<<" To nie jest duza litera "<<'\n';
    cin.get(), cin.get();
    return 0;
}
/*program zamienia dowolna wprowadzona duza litere na mala*/