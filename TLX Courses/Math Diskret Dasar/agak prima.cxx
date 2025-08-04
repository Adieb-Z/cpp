// basic
#include <bits/stdc++.h>
using namespace std;
#define pb push_back

int main (){
	ios::sync_with_stdio(false); cin.tie(NULL);
	
	int n; cin >> n;
	int x;
	
	while (n--){
		int sum = 0;
		cin >> x;
		for(int i=1; i<=sqrt(x); i++){
			if(x%i == 0) sum += 1;
			if(sum > 2) {cout << "BUKAN\n"; break;}
		}
		if(sum <= 2) cout << "YA\n";
	}
}