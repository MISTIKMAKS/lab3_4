#include <iostream>
using namespace std;
int main()
{
	double x; // вхідний аргумент
	double y; // вхідний параметр
	double r;
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	cout << "r = "; cin >> r;
	// розгалуження в повній формі
	if ((x * x + y * y >= 0 && y >= 0 && x <= 0 && y <= r && x >= r) || (x * x + y * y >= 0 && x >= 0 && y <= 0 && x <= r && y >= r))
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	cin.get();
	return 0;
}