#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	float x1, y1,
		  x2, y2,
		  x3, y3,
		  x4, y4,
		  length1, length2, length3, length4,
		  S1, S2, S3, S4;
	cout << "Input x1=";
	cin >> x1;
	cout << "Input y1=";
	cin >> y1;
	cout << "Input x2=";
	cin >> x2;
	cout << "Input y2=";
	cin >> y2;
	cout << "Input x3=";
	cin >> x3;
	cout << "Input y3=";
	cin >> y3;
	cout << "Input x4=";
	cin >> x4;
	cout << "Input y4=";
	cin >> y4;
	length1 = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
	length2 = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
	length3 = sqrt(pow(x4 - x3, 2) + pow(y4 - y3, 2));
	length4 = sqrt(pow(x1 - x4, 2) + pow(y1 - y4, 2));
	S1 = length1 * length2 / 2;
	S2 = length2 * length3 / 2;
	S3 = length3 * length4 / 2;
	S4 = length1 * length4 / 2;
	if (S1 > S2&& S1 > S3&& S1 > S4) cout << "Max S=" << S1 << endl;
	else if (S2 > S1&& S2 > S3&& S2 > S4) cout << "Max S=" << S2 << endl;
	else if (S3 > S2&& S3 > S1&& S3 > S4) cout << "Max S=" << S3 << endl;
	else cout << "Max S=" << S4 << endl;
	
	system("pause");
	return 0;
}