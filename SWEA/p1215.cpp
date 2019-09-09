#include <iostream>
#include <string>
#include <cstring>
using namespace std;

char arr[8][8];
bool chkarr[8][8];
int find_palindrome(int l)
{
	int ans = 0;
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			string hori = "";
			string vert = "";
			bool chk_hori = true;
			bool chk_vert = true;

			if (i < 9 - l)
			{
				for (int k = i; k < i + l; k++)
				{
					vert.push_back(arr[k][j]);
				}
			}
			else
				chk_vert = false;
			if (j < 9 - l)
			{
				for (int k = j; k < j + l; k++)
				{
					hori.push_back(arr[i][k]);
				}
			}
			else
				chk_hori = false;

			for (int k = 0; k < l / 2; k++)
			{
				if (chk_hori && hori[k] != hori[l - 1 - k])
				{
					chk_hori = false;
				}
				if (chk_vert && vert[k] != vert[l - 1 - k])
				{
					chk_vert = false;
				}
			}
			if (chk_hori)
			{
				chkarr[i][j] = 1;
				ans++;
			}
				
			if (chk_vert)
			{
				chkarr[i][j] = 1;
				ans++;
			}
				
		}
	}
	return ans;
}

void showbool()
{
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			cout << chkarr[i][j] << ' ';
		}
		cout << '\n';
	}
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);


	int t;
	string st;
	for (int i = 0; i < 10; i++)
	{
		cin >> t;
		for (int j = 0; j < 8; j++)
		{
			cin >> st;
			for (int k = 0; k < 8; k++)
			{
				arr[j][k] = st[k];
				memset(chkarr[k], 0, 8);
			}
		}
		if(t != 1)
			cout << '#' << i + 1 << ' ' << find_palindrome(t) << '\n';
		else
			cout << '#' << i + 1 << " 64\n";
		//showbool();
	}

	return 0;
}