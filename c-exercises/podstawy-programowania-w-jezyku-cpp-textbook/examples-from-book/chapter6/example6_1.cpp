#include <iostream>
using namespace std;
int main (void){
	enum days{Mon, Tue, Wed, Thu, Fri, Sat, Sun} myday, yourday;
	myday=Mon;
	yourday=Wed;
	cout<<myday<<' '<<yourday<<'\n';
	myday= days(int(myday)+1);
	cout<<myday<<' '<<yourday<<'\n';
	cin.get();
	return 0;
}