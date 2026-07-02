#include <iostream>

using namespace std;

int main(){
    int i=1;
    for ( ; ; )
    {
        ++i;
        if (!(i<10)) break;
        if (i%2) continue;
        cout<<i<<" ";
    }
    cin.get();
    return 0;
}
/*kolejna wariacja programu projekt4_1 */