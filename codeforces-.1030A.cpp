#include<bits/stdc++.h>

using namespace std;

void solve(){
	int test_cases, target;
	cin>>test_cases>>target;
	vector<int> cases;
	int answer = 0;
	while(test_cases--){
		int temp;
		cin>>temp;
		cases.push_back(temp);
	}
	for(int i =0; i < cases.size(); i++){
		if(cases[i] > 0 && cases[target - 1] <= cases[i]){
			answer++;
		}
	}
	cout<<answer;
}


int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}