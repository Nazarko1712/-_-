#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	float start, end,sum;
	cout << "Input start: ";
	cin >> start;
	cout << "Input end: ";
	cin >> end;
	sum = 0;
	for (float j = start; j <= end; j++)
	{
		sum += pow(-1,j)*2*j/(j*j + 3);
	}
	cout << "Sum: " << sum << endl;
	system("pause");
	return 0;
}