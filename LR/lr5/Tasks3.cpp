#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	float sum, x, dx;
	int start, end;
	cout << "Input x: ";
	cin >> x;
	cout << "Input dx: ";
	cin >> dx;
	cout << "Input start: ";
	cin >> start;
	cout << "Iput end: ";
	cin >> end;
	for(int i = start; i < end; i++, x+=dx){
		sum += (x*x * pow(fabs(x) + dx,	2))/(pow(fabs(x) - dx, 2) + x);
	}
	cout << "Suma: " << sum << endl;
	system("pause");
	return 0;
}