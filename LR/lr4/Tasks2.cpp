#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	float x, y;
	cout << "Input x= ";
	cin >> x;
	for (float i = x; i >= 0 && i <= 10; i += 0.5)
	{
		if (i >= 0 && i <= sqrt(3)) y = i * fabs(pow(i, 2) - 3);
		if (i >= sqrt(3) && i <= 10) y = sqrt(pow(i, 4));
		cout << "x= " << i;
		cout << " y= " << y << endl;
	}
	system("pause");
	return 0;
}