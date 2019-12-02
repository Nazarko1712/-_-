#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	float x, y, z;
	cout << "Input x= ";
	cin >> x;
	cout << "Input y: ";
	cin >> y;
	for (float i = x; i >= -2 && i <= 2; i += 0.2)
		for (float j = y; j >= 0 && j <= 3; j += 0.3)
		{
			z = 56 * j + sqrt(pow(i, 2) + exp(i * j));
			cout << "x= " << i << "\t y= " << j << "\t z= " << z << endl;
		}
	system("pause");
	return 0;
}