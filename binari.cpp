#include <iostream>
using namespace std;

int main () {
int L [12], k, j, i, x;

for (int T=8; T>=1; T--){
	L[T]=T;
}	
cin>> x;
i= 1;
j= 12;
L [k]= (i+j)/2;
if (L[k] == x){
	cout <<"data ditemukan";
}
return 0;
}
