#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

int main(){
    unsigned int i,j;
    const unsigned int N=1001;
    bool pierwsze[N];
   for (i=2; i<N; ++i)pierwsze[i]=true;
   for(i=2; i<sqrt(N); ++i) 
        if (pierwsze[i]) 
            for (j=i<<1; j<N; j+=i)pierwsze[j]=false;
    for (i=2; i<N; ++i) if(pierwsze[i]) cout<<i<<'\t';
    cin.get();
    return 0;
}