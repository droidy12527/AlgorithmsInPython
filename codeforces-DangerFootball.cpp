#include<bits/stdc++.h>

using namespace std;

void solve(){
	string world;
	cin>>world;
	int answer = 0;
	for(int i = 1; i < world.size(); i++){
		if(world[i] == world[i-1]){
			if(answer >= 7){
				break;
			}
			answer++;
		}
		else{
			answer = 0;
		}
	}
	cout<<answer;
	if(answer >= 7){
		cout<<"YES";
	}
	else{
		cout<<"NO";
	}
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}