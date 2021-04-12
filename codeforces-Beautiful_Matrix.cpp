#include<bits/stdc++.h>

using namespace std;

void solve(){
	vector<vector<int>> matrix;
	int val;
	int h, k;
	for(int i = 0; i < 5; i++){
	    vector<int> temp;
	    for(int j = 0; j < 5; j++){
	        cin >> val;
	        temp.push_back(val);
	    }
	    matrix.push_back(temp);
	    temp.clear();
	}
	for(int i = 0 ; i < 5; i++){
		for(int j = 0; j < 5; j++){
			if(matrix[i][j] == 1){
				h = i + 1;
				k = j + 1;
				break;
			}
		}
	}
	int answer = abs(h-3) + abs(k-3);
	cout<<answer;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}