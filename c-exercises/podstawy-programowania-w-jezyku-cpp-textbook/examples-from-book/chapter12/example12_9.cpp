// obsluga plikow bitowych

#include <iostream>
#include <fstream>

using namespace std;

int main(){
    const int n=5;
    double x[n]={1.2, .357, 0.0, 10000, 0.5}, y[n];
    {
        ofstream liczby("C:\\Users\\drozd\\OneDrive\\Documents\\GitHub\\Kurs-cpp\\Projekty\\roz12\\liczby.bit");
        liczby.write((char*) x, n*sizeof(double));
        liczby.close();
    }
    {
        ifstream liczby("C:\\Users\\drozd\\OneDrive\\Documents\\GitHub\\Kurs-cpp\\Projekty\\roz12\\liczby.bit");
        liczby.read((char*) y, n*sizeof(double));
        liczby.close();
    }
    for (int i=0; i<n; ++i) cout<<y[i]<<' '<<endl;
    cin.get(), cin.get();
    return 0;
}
// mozna podgladac przy uzyciu edytorow hexadecymalnych