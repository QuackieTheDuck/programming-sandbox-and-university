#include <iostream>

using namespace std;

int main (){
    int i=2;
    while (1){
        cout<<i<<" ", i+=2;
        if (!(i<10)) break;
    }
    cin.get();
    return 0;
}
// kolejna wariacja programu projekt4_1