#include <iostream>

using namespace std;
int a=6, b=3, c;

int main(){                         //program wypisuje wyniki uzycia roznych operatorow logicznych i bitowych
cout<<"1)   6<<3  "<<(a<<3)<<'\n';
cout<<"2)   6>>2  "<<(a>>2)<<'\n';
cout<<"3)   6&3   "<<(a&b)<<'\n';
cout<<"4)   6|3   "<<(a|b)<<'\n';
cout<<"5)   6^3   "<<(a^b)<<'\n';
cout<<"6)   6&&3  "<<(a&&b)<<'\n';
cout<<"7)   6||3  "<<(a||b)<<'\n';
cout<<"8)   6&&0  "<<(a&&c)<<'\n';
cout<<"9)   6||0  "<<(a||c)<<'\n';
cout<<"10)  6==3  "<<(a==b)<<'\n';
cout<<"11)  6!=3  "<<(a!=b)<<'\n';
cin.get();
return 0;
}