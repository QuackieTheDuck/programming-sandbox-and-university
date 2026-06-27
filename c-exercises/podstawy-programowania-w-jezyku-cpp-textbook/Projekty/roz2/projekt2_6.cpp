#include <iostream>

using namespace std;

int main (){
 char c;
 cout<<" Napisz znak: ", cin>>c, cout<<'\n';
 if ('a'<=c&&c<='z') cout<<" mala litera "<<c<<" kod "<<c+0;
    else if('A'<=c&&c<='Z') cout<<" wielka litera "<<c<<" kod "<<c+0;
        else if('0'<=c&&c<='9') cout<<" cyfra "<<c<<" kod "<<c+0;
            else    cout<<" nie litera, nie cyfra "<<c<<" kod "<<c+0;
cin.get(), cin.get();
return 0;
}
/*program okresla typ wprowadzonego znaku a nastepnie konwertuje znak na kod ktrym jest on reprezentowany w cpp*/