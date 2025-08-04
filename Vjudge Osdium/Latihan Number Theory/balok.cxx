// basic
#include <iostream>
#include <algorithm>
using namespace std;

int main (){
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	
	int t, n, a, b, c; cin >> t;
	
	while (t--){
		int H = 0, L = 0;
		cin >> n;
		while(n--){
		   	cin >> a >> b >> c;
		   	H += max({a,b,c});
		   	L += min({a,b,c});
		}
		cout << L << " " << H << endl;
	}
}