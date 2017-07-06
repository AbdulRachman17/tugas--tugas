#include <iostream>
using namespace std;

int main () {
	int x[]= {23,24,54,32,43,56,12,78,86,22}, imaks, temp;
	
	for (int i = 9; i >1; --i) 
	{
		imaks=0;
		for (int j = 1; j < i; ++j)
		{
			if (x[j]> x[imaks])
			{
				imaks = j;
			}
		}
	temp = x[i];
	x[i] = x [imaks];
	x[imaks] = temp;
}
	for (int i = 0 ; i<10 ; ++i)
	{
		cout << x[i] << endl;
	}
	return 0 ;
}
