#include <bits/stdc++.h>
using namespace std;

vector<int> sieve(int n){
	vector<bool> isPrime(n+1, 1);
	vector<int> p;
	
	isPrime[0] = isPrime[1] = 0;
	
	for(int i = 2; i*i <= n; i++){
		if(isPrime[i]){
			for(int j=i*i; j<=n; j+=i){
				isPrime[j] = 0;
			}
		}
	}
	for(int i = 2; i <= n; i++){
		if(isPrime[i]) p.push_back(i);
	}
	
	return p;
}

int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    vector<int> primes = sieve(999999);
    
    int t, k; cin >> t;

	while(t--){
		cin >> k;
		cout << primes[k-1] << "\n";
	}
}