#include<iostream>
using namespace std;
int main()
{
	int n = 0;
	cout << "Enter size of Array" << endl;
	cin >> n;
	int *array = new int[n];
	int *p = array,*q=array;
	cout << "Enter Array" << endl;
	for (int i = 0; i < n; i++)
	{
		cin >> *array;
		array++;
	}
	for (int j = 0; j < n; j++)
	{
		for (int k = j+1; k < n; k++)
		{
			if (p[j] > p[k])
			{
				int temp = 0;
				temp = p[j];
				p[j] = p[k];
				p[k] = temp;
			}
		}
	}
	cout << "Sorted Array is:"<<endl;
	for(int a = 0; a < n; a++)
	{
		cout << *q;
		q++;
		cout << endl;
	}
	return 0;

}