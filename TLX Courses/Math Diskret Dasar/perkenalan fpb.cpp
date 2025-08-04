#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll a, b, c, d;
    cin >> a >> b >> c >> d;

    ll f = lcm(b, d);
    ll e = a * (f / b) + c * (f / d);

    ll fpb = gcd(e, f);
    cout << e / fpb << " " << f / fpb;
}