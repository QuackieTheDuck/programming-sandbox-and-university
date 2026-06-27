#include <iostream>

using namespace std;

int main(){
    char c;
    while((c=cin.get())!='#'){
        cout.put(c); 
    }
    cin.ignore();
    cin.get();
    return 0;
}
// po drobnych poprawkach zaczal dialac 
// program zczytuje pojedyncze znaki az do znaku # i wypisuje je na wyjsciu
