#include <iostream>

using namespace std;

int main(){
    char napis[20], kopia[25], c;
    for(c='a';c<='k'; ++c)napis[c-'a']=c;
    napis[c-'a']=0;
    cout<<napis;
    c=0;
    do kopia[c]=napis[c]; while(napis[c++]);
    cout<<kopia;
    cin.get();
    return 0;
}

//ctype.h biblioteka do operacji na pojedynczych znakach