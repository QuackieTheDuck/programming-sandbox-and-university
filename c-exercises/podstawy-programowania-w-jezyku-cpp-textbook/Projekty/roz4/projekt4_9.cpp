#include <iostream>

using namespace std;

int main (){
    int i=1;
    while(1){
        i++;
        if(!(i<10)) break;
        if(i%2) continue;
        cout<<i<<" ";
    }
    cin.get();
    return 0;
}
// nastepna wariacja programu projekt4_1