#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	float l, k, a, b, c, q;
	cout << "Input l=" << endl;
	cin >> l;
	cout << "Input k=" << endl;
	cin >> k;
	a = fabs( (2 * l - 3 * k) / 5);
	b = fabs((2 * l + k * l) / l);
	c = fabs(2 * l * k - 8.5);

	if (a > b&& a > c) q = a;
	else if (b > a&& b > c) q = b;
	else q = c;
	cout << "q=" << q << endl;
	system("pause");
	return 0;
}