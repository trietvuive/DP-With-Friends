/*
#include<iostream>
#include<algorithm>
#include <stack>

#define ll long long 
using namespace std;

int main()
{
	double p, q;
	cin >> p >> q;
	stack<bool>path;
	while (p != 1 || q != 1)
	{
		if (p < q)
		{
			path.push(false);
			q -= p;
		}
		else
		{
			path.push(true);
			p -= q;
		}
	}
	ll k = 1;
	while (!path.empty())
	{
		bool right = path.top();
		path.pop();
		if (!right)
			k *= 2;
		else
		{
			k *= 2;
			k += 1;
		}
		k %= 998244353;
	}
	cout << k << endl;
}
*/