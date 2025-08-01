// basic
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
#define pb push_back

int main (){
	ios::sync_with_stdio(false); cin.tie(NULL);
	
	string s; cin >> s;
	int n;
	int pnjg = s.length();
	n = ceil(sqrt(pnjg));
	
	while(s.length() < n*n) s += '.';
	
	char m[n][n];
	int id=0;
	
	for(int i=0; i<n; i++)
	    for(int j=0; j<n; j++)
	        m[i][j] = s[id++];
	        
	bool arah = true;
	
	for(int i=0; i<n; i++){
		if (arah){
			for(int j=0; j<n; j++) cout << m[i][j];
			arah = false;
		}else{
			for(int j=n-1; j>=0; j--) cout << m[i][j];
			arah = true;
		}
		cout << endl;
	}
}