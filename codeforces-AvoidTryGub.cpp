#include<bits/stdc++.h>

using namespace std;

void solve(){
	int te;
    cin >> te;
    while(te--) {
        int n; string s;
        cin >> n >> s;
        sort(s.begin(), s.end());
        cout << s << '\n';
    }
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}