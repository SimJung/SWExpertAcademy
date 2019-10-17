#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

vector<int> v;

int op(int a, int b)
{
	int res = v[a] - v[b];
	if (res > 0)
		v.erase(v.begin() + b);
	else
	{
		v.erase(v.begin() + a);
		res *= -1;
	}
		
	return res;
}

int getB()
{
	int sum = 0, sz;
	vector<int>::iterator it;
	while (v.size() != 1)
	{
		sz = v.size() / 2;
		it = v.begin();
		for (int i = 0; i < sz; i++)
		{
			sum += op(i, i+1);
		}
			
	}
	return sum;
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int tc, k, c, n;
	cin >> tc;
	for (int t = 1; t <= tc; t++)
	{
		v.clear();
		cin >> k;
		c = (int)pow(2, k);
		for (int i = 1; i <= c; i++)
		{
			cin >> n;
			v.push_back(n);
		}
		cout << "#" << t << ' ' << getB() << '\n';
		
	}

	return 0;
}