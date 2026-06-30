// program wykorzystujacy szyfr cezara i pliki tekstowe
//szyfrowanie to kompletna klapa niedziala dla zadnych zalozen poczatkowych kompletnie do poprawy
//nic tu nie dziala jak powinno

#include <fstream>
#include <iostream>

using namespace std;

int main(){
    char c, tk[21], *tkv=tk;
    int p;
    ios_base::sync_with_stdio(false);
    ifstream tekst("C:\\Users\\drozd\\OneDrive\\Documents\\GitHub\\Kurs-cpp\\Projekty\\roz12\\tekst.txt");
    ofstream szyfr("C:\\Users\\drozd\\OneDrive\\Documents\\GitHub\\Kurs-cpp\\Projekty\\roz12\\szyfr.txt");
    //otwieranie plikow dziala prawidlowo
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

/* Lista problemow
problem jest z manipulacja wspaznikiem na kod 
wskaznik tkv nie dziala prawidlowo powodujac 
nieprawidlowosci w kodowaniu szyfru
nalezy porpawic sposob kodowania tak aby calosc dzialala prawidlowo

litera jest dodawana przy zmianie wielkosci litery
nie mam bladego pojecia jak ale zadzialalo pod zadnym pozorem nie ruszac


nic nie zmienilem ale dziala elo melo benc 
*/