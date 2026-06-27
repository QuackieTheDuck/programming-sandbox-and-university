#include <iostream>
#include <conio.h>

using namespace std;

int main(){
    char c;
    int a;
    unsigned int b;
    double x;
    scanf("%c %d %u %lf", &c, &a, &b, &x);
    printf("%c %d %u %f \n", c,a,b,x);
    getch();
    return 0;
}
//wprawadzanie danych z klawiatury typowo z stylu c