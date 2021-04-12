#include<bits/stdc++.h>

using namespace std;

void solve(){
	int test_cases;
	cin>>test_cases;
	bool hard = false;
	while(test_cases--){
		int temp;
		cin>>temp;
		if(temp == 1){
			hard = true;
			break;
		}
	}
	if(hard){
		cout<<"HARD";
	}
	else{
		cout<<"EASY";
	}
}


int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}