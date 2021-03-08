/*#include <vector>
#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;
int main()
{
	double n;
	vector<double>temps;
	double sum = 0;
	for (int i = 0; i < 10; i++)
	{
		cin >> n;
		temps.push_back(n);
		sum += n;
	}
	double average = sum / 10.0;
	double variance = 0;
	for (int i = 0; i < 10; i++)
	{
		variance += (temps[i] - average) * (temps[i] - average);
	}
	variance /= 9.0;
	if (variance > 1)
		cout << "NOT COMFY" << endl;
	else
		cout << "COMFY" << endl;

}*/