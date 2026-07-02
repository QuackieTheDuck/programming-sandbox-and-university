#include <iostream>
#include <time.h>
#include <cstdlib>

using namespace std;

int main(){
srand(time(0));
int i,liczba;
const int N=600000;
int rzuty[6];
for (i=0;i<7;i++)rzuty[i]=0;
for(i=0;i<N;i++){
    liczba=rand()%6;
    switch (liczba)
    {
        case 0:
        rzuty[5]++;
        break;
        case 1:
        rzuty[0]++;
        break;
        case 2:
        rzuty[1]++;
        break;
        case 3:
        rzuty[2]++;
        break;
        case 4:
        rzuty[3]++;
        break;
        case 5:
        rzuty[4]++;
        break;
    }
}
for(i=1;i<=6;i++){
    cout<<"liczba wyrzuconych oczek "<<i<<" wynosi "<<rzuty[i-1]<<"\n";
}
//cout<<rzuty[0]+rzuty[1]+rzuty[2]+rzuty[3]+rzuty[4]+rzuty[5]; //sprawdzenie ilosci wykonanych prob
cin.get(),cin.get();
return 0;
}