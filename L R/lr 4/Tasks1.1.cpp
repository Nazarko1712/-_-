#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	float x, dx, y, n;
	cout << "Input x=";
	cin >> x;
	cout << "Input dx=";
	cin >> dx;
	cout << "Input n: ";
	cin >> n;

	for (int i = 0; i < n && x >= 5; i++) {
		y = (log(fabs(x + 1))) / (2 * x + 3);
		cout << "x= " << x;
		cout << " y= " << y << endl;
		x += dx;
	}
	system("pause");
	return 0;
}