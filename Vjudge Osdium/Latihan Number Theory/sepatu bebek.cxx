// basic
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define pb push_back

int main (){
	ios::sync_with_stdio(false); cin.tie(NULL);
	
	int n, m, x; cin >> n >> m;
	vector<int> b, s;
	
	for(int i=0; i<n; i++){
		cin >> x; b.pb(x);
	} sort(b.begin(), b.end());
	for(int i=0; i<m; i++){
		cin >> x; s.pb(x);
	} sort(s.begin(), s.end());
	
	int bi = 0, si = 0, sum = 0;
	int nb = b.size()-1, ns = s.size()-1;
	while(bi <= nb && si <= ns){
		if(b[bi] == s[si] || b[bi]+1 == s[si]){
			sum++; bi++; si++;
		}else if(b[bi]+1 < s[si]){
			bi++;
		}else si++;
	}
	cout << sum;
}
