#include <iostream>

using namespace std;

int main(){
    char c;
    int a;
    unsigned int b;
    double x;
    cin>>c>>a>>b>>x;
    cout<<c<<' '<<a<<' '<<b<<' '<<x<<endl;
    cin.get(), cin.get();
    return 0;
}
//wprowadzanie danych z klawiatury typowo w stylu cpp
//przy probie wprowadzenia danych niewlasciowego typu do zmiennej przerwany zostanie proces konwersji i nastepne zmienne nie zostana przypisane
//nawet jezeli typ nastepnych zzmiennych bedzie prawidlowy(stad warto rozdzielac cin)