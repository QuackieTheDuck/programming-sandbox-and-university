/* Rozbudowac program 12.10 tak aby program dodatkowo 
rozszyfrowywał plik szyfr.txt a rozwiazanie umieszczal
w pliku deszyfr.txt */
// plik 12_10 zostal skopiowany jako baza do rozudowy

#include <fstream>
#include <iostream>

using namespace std;

int main(){
    char c, tk[21], *tkv=tk;
    int p;
    ios_base::sync_with_stdio(false);
    ifstream tekst("C:\\Users\\drozd\\OneDrive\\Documents\\GitHub\\Kurs-cpp\\Projekty\\roz12\\tekst.txt");
    ofstream szyfr("C:\\Users\\drozd\\OneDrive\\Documents\\GitHub\\Kurs-cpp\\Projekty\\roz12\\szyfr.txt");
    if(!tekst) cout<<"Brak pliku. "<<endl;
    else {
        cout<<"Podaj klucz: \n";
        cin>>tk;
        p='z'-'a'+1;
        while(!tekst.eof())
        {
            tekst.get(c);
            if(c>='A' && c<='Z'){
                c-=('A'-'a');
            }
            if (c>='a' && c<='z'){
                c='a'+((c-'a')+(*tkv-'a')+1)%p;
                szyfr<<c;
                tkv++;
            } else if (c==' ' || c=='\n') szyfr<<c;
            if(!*tkv) tkv=tk;
        }
        tekst.close();
        szyfr.close();
    }
    return 0;
}