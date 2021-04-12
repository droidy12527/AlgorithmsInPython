#include<bits/stdc++.h>

using namespace std;

int solve(){
	int test_cases;
	cin>>test_cases;
	int answer = 0;
	vector<int> hello;
	while(test_cases--){
		int temp;
		cin>>temp;
		hello.push_back(temp);
	}
	for(int i = 0; i < hello.size() -1; i++){
		if(hello[i] % 10 != hello[i+1] / 10){
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