/*
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
#define ll long long
int main()
{
	int count;
	cin >> count;
	ll prev = 2, curr = 1;
	for (int i = 0; i < count;)
	{
		for (int j = 0; j < 7 && i < count; j++)
		{
			if (i == 0)
				cout << 2 << " ";
			else if (i == 1)
				cout << 1 << " ";
			else
			{
				cout << prev + curr << " ";
				ll temp = curr;
				curr = prev + curr;
				prev = temp;
			}
			i++;
		}
		cout << endl;
	}
}
*/
/*
*/