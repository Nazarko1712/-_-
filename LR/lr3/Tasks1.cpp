#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	float x, y;
	cout << "Input x: ";
	cin >> x;
	if (x <= -1) y = pow(sin(x),2);
	else if (x > -1 && x < 0) y = sqrt(-x);
	else if (x > 1) y = x - log10(x);
	cout << "y= " << y << endl;
	system("pause");
	return 0;
}