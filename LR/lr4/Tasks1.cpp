#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	float x, dx, y;
	cout << "Input x=";
	cin >> x;
	cout << "Input dx=";
	cin >> dx;
	while (x >= 0.2 && x <= 0.9) {
		y = (log(fabs(x + 1))) / (2 * x + 3);
		cout << "x= " << x;
		cout << " y= " << y << endl;
		x += dx;
	}

	system("pause");
	return 0;
}