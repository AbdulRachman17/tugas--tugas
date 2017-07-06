#include<iostream>
using namespace std;

long rekursipangkat(int a, int n){
	if (n == 0)
		return 1;
	else
		return a*rekursipangkat(a, n-1);
}

int main(){
	int b, x, hasil_pangkat;
	cout << "masukan angka yang dipangkatkan : ";
	cin >>b;
	cout << "masukan angka untuk pangkat : ";
	cin >>x;
	hasil_pangkat = rekursipangkat(b,x);
	
	cout << "b = "<<b<<endl;
	cout << "x = "<<x<<endl;
	cout << "b^x = "<<b<<"^"<<x<<"="<<hasil_pangkat<<endl;
	
	
	return 0;
}
