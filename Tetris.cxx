#include <iostream>
using namespace std;

int main() {
    int r,c;
    cin >> r >> c;
    char v[r][c];
    
    for(int i=0; i<r; i++)
        for(int j=0; j<c; j++)
            cin >> v[i][j];
            
     bool changed;
     int rx;
    do{
    	changed = false;
    	for(int i=0; i<r ; i++){
    	    bool full = true;
    	    for(int j=0; j<c; j++){
    	    	if(v[i][j] == '0'){
    	    		full = false;
    	    		break;
    	    	} 
    	    }
    	    if(full){
    	    	rx = i;
    	        changed = true;
    	            for(int j=0; j<c; j++)
    	            v[i][j] = '0';
    	    }
        }
        if (!changed) break;
        
        for(int j=0; j<c; j++){
        	int k = rx;
        	while (v[k+1][j] == '0' && k+1 < r)
        	k++;
        	for(int i = k-1; i>=0; i--){
        		if(v[i][j] == '1'){
        			v[k][j] = '1';
        			v[i][j] = '0';
        			k--;
        		
        		}
        	}
        }
    }while (changed);
            
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++)
            cout << v[i][j];
        cout << "\n";    
    }
}