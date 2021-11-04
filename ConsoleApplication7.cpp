#include <iostream>
#include "windows.h"
#include <iomanip>
#include <math.h>
using namespace std;

int main()
{
	float Z, y;
	cout << "y:" << endl;
	cin >> y;
	Z = 1;
	for (int m = 1; m <= 5; m++) {
		Z = (Z);
	}
	Z = tan(Z) +pow((y),5);
	cout << "Z=" << setprecision(3) << Z << endl;
	return 0;
}


