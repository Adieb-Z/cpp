#include <iostream>
using namespace std;

int fpb(int a, int b){
	if(b == 0) return a;
	return fpb(b, a%b);
}

int kpk(int a, int b){
	return (a*b)/fpb(a, b);
}

int main(){
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	
	int n, a, b; cin >> n;
	
	cin >> a;
	for(int i=1; i<n; i++){
		cin >> b;
		a = kpk(a, b);
	}
	
	cout << a;
}