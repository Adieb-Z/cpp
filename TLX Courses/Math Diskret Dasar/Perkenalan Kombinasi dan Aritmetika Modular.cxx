#include <iostream>
#include <vector>
using namespace std;
#define ll long long
const int mod = 1e9 + 7;

void kombinasi(vector<vector<ll>> &c, int n)
{
	c.resize(n + 1, vector<ll>(n + 1, 0));

	for (int i = 0; i <= n; i++)
		c[i][0] = 1;

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j < i; j++)
		{
			c[i][j] = (c[i - 1][j] + c[i - 1][j - 1]) % mod;
		}
		c[i][i] = 1;
	}
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n, a, b;
	cin >> n >> a >> b;
	vector<vector<ll>> c;

	kombinasi(c, n);

	ll ans = 0;
	for (int i = a; i <= b; i++)
	{
		ans += c[n][i] % mod;
		ans %= mod;
	}

	cout << ans;
}