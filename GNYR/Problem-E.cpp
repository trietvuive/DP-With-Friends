#include<iostream>
#include<algorithm>
#define ll long long
using namespace std;
int gcd(int a, int b)
{
	if (a == 0)
		return b;
	return gcd(b % a, a);
}
int main()
{
	ll p, q, N, M;
	cin >> p >> q >> N >> M;
	if (N > 1000 || N < 2 || M > 1000 || M < 2)
	{
		cout << "NO SOLUTION" << endl;
		return 0;
	}
	if (p == 0)
	{
		cout << 0 << " " << N << endl;
		return 0;
	}
	ll least_sum = 2001;
	ll first = -1, second = -1;
	for (ll r = 1; r <= 1000; r++)
	{
		for (ll g = r; g <= 1000; g++)
		{
			ll sum = r + g;
			if (sum >= N && sum <= M && sum < least_sum)
			{
				if ((2*r*g*q) == (sum*(sum-1)*p))
				{
					least_sum = sum;
					first = r;
					second = g;
				}
			}
		}
	}
	if (first == -1 && second == -1)
		cout << "NO SOLUTION" << endl;
	else
		cout << first << " " << second << endl;
}
