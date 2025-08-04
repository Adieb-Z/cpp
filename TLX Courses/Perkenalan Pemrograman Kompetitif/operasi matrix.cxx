#include <iostream>
using namespace std;

int main(){
	int n, m, x;
	string op;
	cin >> n >> m >> x;
	
	int s = max(n,m);
	int v[s][s], con[s][s];

	for(int i = 0; i < n; i++)  
		for(int j = 0; j < m; j++)  
			cin >> v[i][j];

	while(x--){  
		cin >> op;  
		if(op == "_"){  
			for(int i = 0; i < n; i++)  
				for(int j = 0; j < m; j++)  
					con[n - 1 - i][j] = v[i][j];  
		}  
		else if(op == "|"){  
			for(int i = 0; i < n; i++)  
				for(int j = 0; j < m; j++)  
					con[i][m - 1 - j] = v[i][j];  
		}  
		else if(op == "90"){  
			for(int i = 0; i < n; i++)  
				for(int j = 0; j < m; j++)  
					con[j][n - 1 - i] = v[i][j];  
			swap(n, m);  
		}  
		else if(op == "180"){  
			for(int i = 0; i < n; i++)  
				for(int j = 0; j < m; j++)  
					con[n - 1 - i][m - 1 - j] = v[i][j];  
		}  
		else if(op == "270"){  
			for(int i = 0; i < n; i++)  
				for(int j = 0; j < m; j++)  
					con[m - 1 - j][i] = v[i][j];  
			swap(n, m);  
		}

		for(int i = 0; i < n; i++)  
			for(int j = 0; j < m; j++)  
				v[i][j] = con[i][j];  
	}

	for(int i = 0; i < n; i++){  
		for(int j = 0; j < m; j++)  
			cout << v[i][j] << " ";  
		cout << "\n";  
	}
}