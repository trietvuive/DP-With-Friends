/*#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

bool separated(const string& s)
{
	vector<pair<bool, bool>> alphabet(26, pair<bool, bool>(false, false));
	for (int i = 0; i < s.size(); i++)
	{
		if (i % 2 == 0)
		{
			if (alphabet[s[i] - 'a'].first)
				return false;
			else
				alphabet[s[i] - 'a'].first = true;
		}
		else
		{
			if (alphabet[s[i] - 'a'].second)
				return false;
			else
				alphabet[s[i] - 'a'].second = true;
		}
	}
	return true;
}
int main()
{
	string s;
	cin >> s;
	if (separated(s))
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
}
*/