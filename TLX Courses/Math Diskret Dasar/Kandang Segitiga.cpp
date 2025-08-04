#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, x, y, r = 3;
    cin >> n;

    for(int i=0; i<n; i++)
    {
        cin >> x >> y;
    }

    if(n<3){
        cout << 0;
        return 0;
    }

    if (r > n - r)
        r = n - r;

    ll ans = 1;
    for (int i = 0; i < r; i++)
    {
        ans *= (n - i);
        ans /= (i + 1);
    }

    cout << ans;
}