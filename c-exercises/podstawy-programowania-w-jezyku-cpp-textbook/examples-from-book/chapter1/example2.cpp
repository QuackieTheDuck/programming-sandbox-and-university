#include <iostream>
using namespace std;
int main(){                                     //porgram wypisuje wielkosc zajmowanej pamieci przez rozne zmienne
 cout<<" char           "<<sizeof(char)<<'\n';
 cout<<" short          "<<sizeof(short)<<'\n';
 cout<<" int            "<<sizeof(int)<<'\n';
 cout<<" long           "<<sizeof(long)<<'\n';
 cout<<" long long      "<<sizeof(long long)<<'\n';
 cout<<" float          "<<sizeof(float)<<'\n';
 cout<<" double         "<<sizeof(double)<<'\n';
 cout<<" long double    "<<sizeof(long double)<<'\n';
 cout<<" 7              "<<sizeof (7)<<'\n';
 cout<<" 5/3            "<<sizeof(5/3)<<'\n';
 cout<<" 5==3.14        "<<sizeof(5==3.14)<<'\n';
 cout<<" 5/3+1.0        "<<sizeof(5/3+1.0)<<'\n';
 cout<<" 'A'            "<<sizeof 'A'<<'\n';
 cout<<" Informatyka    "<<sizeof "Informatyka"<<'\n';
 cin.get();
 return 0;
}