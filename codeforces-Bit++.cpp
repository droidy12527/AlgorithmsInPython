#include<bits/stdc++.h>

using namespace std;

void solve(){
	int test_cases;
	cin>>test_cases;
	int answer = 0;
	while(test_cases--){
		string temp;
		cin>>temp;
		if(temp[0] == '+' || temp[temp.size() -1] == '+'){
			answer++;
		}
		if(temp[0] == '-' || temp[temp.size() -1] == '-'){
			answer--;
		}
	}
	cout<<answer;
}


int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}