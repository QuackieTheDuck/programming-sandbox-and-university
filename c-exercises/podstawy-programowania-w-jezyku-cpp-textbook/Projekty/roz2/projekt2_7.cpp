#include <iostream>

using namespace std;

int main(){
char a;
cout<<" Podaj mala litere: ", cin>>a, cout<<'\n';
if('a'<=a && a<='z') a+='A'-'a';
cout<<a<<" "<<++a<<" "<<a+1<<" "<<" "<<char(a+1);
cin.get(), cin.get();
return 0;
}
/*program zamienia mala litere na duzo nastepnie wypisuje nastepna duza litere podaje kod litery wielkiej 
bedacej nastepna po ostanio wypisanej a na samym koncu wypisuje litere odpowiadajaca kodowi wypisanemu*/