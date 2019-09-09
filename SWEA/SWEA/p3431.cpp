#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t, l, u, x, ans;
	cin >> t;
	for (int i = 1; i <= t; i++)
	{
		cin >> l >> u >> x;
		if (x > u)
			ans = -1;
		else if (x >= l && x <= u)
			ans = 0;
		else
			ans = l - x;

		cout << '#'<<i<<' '<<ans << '\n';
	}

	return 0;
}