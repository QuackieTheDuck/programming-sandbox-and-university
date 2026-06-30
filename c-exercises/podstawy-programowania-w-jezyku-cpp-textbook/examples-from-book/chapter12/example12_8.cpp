// program z przykladem kompleksowej obslugi plikow

#include <iostream>
#include <fstream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    {
       ofstream liczby("C:\\Users\\drozd\\OneDrive\\Documents\\GitHub\\Kurs-cpp\\Projekty\\roz12\\liczby.txt"); 
       int n=10000;
       liczby<<n<<' ';
       for (int i=0;i<10000; ++i) liczby<<i<<' ';
       liczby.close();
    }
    {
        ifstream liczby("C:\\Users\\drozd\\OneDrive\\Documents\\GitHub\\Kurs-cpp\\Projekty\\roz12\\liczby.txt");
        int i,k;
        if(liczby) cout<<"Jest plik. "<<endl;
        else cout<<"Brak pliku. "<<endl;
        for (liczby>>k, i=0; i<=k; ++i) if(!(i%1000))cout<<i<<' ';
        cout<<endl;
        liczby.close();
    }
    {
        fstream liczby;
        liczby.open("C:\\Users\\drozd\\OneDrive\\Documents\\GitHub\\Kurs-cpp\\Projekty\\roz12\\liczby.txt", ios::app);
        liczby<<77777<<" "<<88888;
        liczby.close();
    }
    {
        ifstream liczby;
        liczby.open("C:\\Users\\drozd\\OneDrive\\Documents\\GitHub\\Kurs-cpp\\Projekty\\roz12\\liczby.txt");
        int k;
        while (!liczby.eof()){
            liczby>>k;
            if(k>9995) cout<<k<<' ';
        }
        cout<<endl;
        liczby.close();
    }
    cin.get(), cin.get();
    return 0;
}
//poprawiono tryb otwarcia pliku z ate na app
// bez poprawek program nie dzialal jak zalozono