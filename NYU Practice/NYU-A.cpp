#include<vector>
#include<math.h>
#include<iostream>
using namespace std;

int count_farey(int n);

int main()
{
	int cases;
	cin >> cases;
	for (int i = 0; i < cases; i++)
	{
		int k, n;
		cin >> k >> n;
		cout << k << " " << count_farey(n) << endl;
	}
}
int count_farey(int n)
{
	double x1 = 0, y1 = 1, x2 = 1, y2 = n;
	double x, y = 0;
	int count = 2;
	while (y != 1.0)
	{
		x = floor((y1 + n) / y2) * x2 - y1;
		y = floor((y1 + n) / y2) * y2 - y1;
		x1 = x2, x2 = x, y1 = y2, y2 = y;
		count++;
	}
	return count;
}