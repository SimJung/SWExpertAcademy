#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t, val = 'a' - 'A';
	cin >> t;
	string a;
	for(int i=1; i<=t; i++)
	{
		cout << '#' << i << ' ';
		for (int j = 0; j < 3; j++)
		{
			cin >> a;
			cout << char(a[0] - val);
		}
		cout << '\n';
	}
	return 0;
}