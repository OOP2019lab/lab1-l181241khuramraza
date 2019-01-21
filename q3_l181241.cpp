#include<iostream>
using namespace std;
int main()
{
	int x, y;
	int *p, *q;
	x = 2, y = 3;
	p = &x;
	q = &y;
	cout << x << endl << y << endl << p << endl << q << endl << *p << endl << *q << endl<<endl;
	int z = 0;
	z = x;
	x = y;
	y = z;
	cout << x << endl << y << endl << p << endl << q << endl << *p << endl << *q << endl << endl;
	int *r;
	r = p; 
	p = q;
	q = r;
	cout << x << endl << y << endl << p << endl << q << endl << *p << endl << *q << endl << endl;
	return 0;
}