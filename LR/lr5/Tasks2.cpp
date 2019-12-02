#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	float p, m,n;
	p = 1;
	cout << "Input m: ";
	cin >> m;
	cout << "Input n: ";
	cin >> n;
	for (float k = m; k <= n; k++)
	{
		p *= (k+3)/(k*k + 10*k + 24);
	}
	cout << "p: " << p << endl;
	system("pause");
	return 0;
}