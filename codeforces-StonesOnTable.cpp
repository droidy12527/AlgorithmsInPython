#include<bits/stdc++.h>

using namespace std;

void solve(){
	int test_cases;
	cin>>test_cases;
	vector<char> stones;
	while(test_cases--){
		char temp;
		cin>>temp;
		stones.push_back(temp);
	}
	int answer = 0;
	char temp = 'X';
	for(auto hello: stones){
		if(temp == hello){
			answer++;
		}
		temp = hello;
	}
	cout<<answer;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}