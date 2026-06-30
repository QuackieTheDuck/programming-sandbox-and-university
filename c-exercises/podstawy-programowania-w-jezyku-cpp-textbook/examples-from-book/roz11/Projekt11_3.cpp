#include <iostream>

using namespace std;

//przyklad zdefiniowania funkcji kopiujacej tablice znakow znak po znaku
void textcopy(char* dest, char* source){
    do *dest++ = *source; while(*source++);
}

int main(){
char wyraz1[20], wyraz2[20];
cout<<"wyraz: ", cin>>wyraz1;
textcopy(wyraz2,wyraz1);
cout<<"skopiowany wyraz to: "<<wyraz2;
cin.get(),cin.get();
return 0;
}
