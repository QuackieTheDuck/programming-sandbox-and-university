#include <iostream>

using namespace std;

int main(){
long a, b, c;
cout<<"Podaj dlugosci odcinkow: "<<'\n';
cout<<"     a=      ", cin>>a, cout<<'\n';
cout<<"     b=      ", cin>>b, cout<<'\n';
cout<<"     c=      ", cin>>c, cout<<'\n';
cout<<"Czy mozna sonstruowac trojkat z tych odcinkow:   ";
if(a+b>c&&b+c>a&&a+c>b) cout<<"TAK";
    else cout<<"NIE";
    cin.get(), cin.get();
    return 0;
}
/*program sprawdza czy dla podanych wielkosci jest mozliwosc skonstruowania trojkata na podstawie odcinkow 
o bokach o dlugosciach wprowadzonych do strumienia*/