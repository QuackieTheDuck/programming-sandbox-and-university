#include <iostream>
#include <cstdio>
#include <conio.h>

using namespace std;

int main(){
    char c='A';
    int a=-1;
    unsigned int b=1;
    double x=0.1;
    cout<<a<<' '<<b<<' '<<c<<' '<<x<<endl;  //standardowe wyprowadzenie zmennych na konsole, typy zmiennych sa rozpoznawane automatycznie
    printf("%c %d %u %f \n", c,a,b,x);  //wyprwadzanie zmiennych jak w c, typ wyprowadzane zmiennej jest okreslany przez programiste
    printf("%8.c %1d %4u %2.2f \n", c,a,b,x);   //jak wyzej z tym ze wyprowadzana zmienna jest formatowana tak aby spelniala okreslone wymagania
    printf("%u %u %u %u \n", c,b,a,x);  //zmieniono typ wyprowadzanych zmiennych, wyswietlana jest wartosc zmiennej po przekonwertowaniu na inny typ
    getch();    //funkcja z biblioteki conio.h
    return 0;
}