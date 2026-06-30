#include <iostream>

using namespace std;

int main (){
    int i=1;
    do{
        i++;
        if(!(i<10)) break;
        if (i%2) continue;
        cout<<i<<" ";
    } while(1);
    cin.get();
    return 0;
}
// nastepna wariacja programu4_1