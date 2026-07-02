#include <iostream>
#include <cmath>

using namespace std;

/*int sito(){
    unsigned int i,j;
    const unsigned int N=1001;
    bool pierwsze[N];
   for (i=2; i<N; ++i)pierwsze[i]=true;
   for(i=2; i<sqrt(N); ++i) 
        if (pierwsze[i]) 
            for (j=i<<1; j<N; j+=i)pierwsze[j]=false;
   // for (i=2; i<N; ++i) if(pierwsze[i]) cout<<i<<'\t';
   // return
}
*/
int main(){
    unsigned int i,j,k=0;
    const unsigned int N=1001;
    bool pierwsze[N];
    int tab[N];
    for(int l=0; l<N; l++)tab[l]=0;
   for (i=2; i<N; ++i)pierwsze[i]=true;
   for(i=2; i<sqrt(N); ++i) 
        if (pierwsze[i]) 
            for (j=i<<1; j<N; j+=i)pierwsze[j]=false;
    for (i=2; i<N; ++i) if(pierwsze[i]){
        tab[k]=i;
        k++;
    } ;
   // for (int l=0; l<N; l++)cout<<tab[l]<<"\n"; //testowanie poprawnosci przypisania wartosci do pol w tablicy
   for(int l=0; l<N; l++) if((tab[l+1]-tab[l])==2)cout<<"("<<tab[l]<<","<<tab[l+1]<<")\n";
    cin.get();
    return 0;
}