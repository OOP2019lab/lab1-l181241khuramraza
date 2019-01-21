#include<iostream>
using namespace std;
int main()
{
	int n = 0;
	int a = 0, b = 0, c = 0;
	cout << "Enter any Number" << endl;
	cin >> n;
	int rows = (n * 2)-1;
	int columns = n * 2;
	for (int i = 1; i <= rows; i++)
	{
		if (i < 5)
		{
			 a = i * 2;
			 b = columns - a;
			for (int k = 1; k <= (a - i); k++)
			{
				cout << i;
			}
			for (int j = 0; j < b; j++)
			{
				cout << "*";
			}
			for (int k = 1; k <= (a - i); k++)
			{
				cout << i;
			}
			cout << endl;
		}
		else
		{
			a = i * 2;
			b = a - columns;
			c = (a - (b * 2))/2;
			for (int k = 1; k <= c; k++)
			{
				cout << i;
			}
			for (int j = 0; j < b; j++)
			{
				cout << "*";
			}
			for (int k = 1; k <= c; k++)
			{
				cout << i;
			}
			cout << endl;
		}
		
	}

		
}
