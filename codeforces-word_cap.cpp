#include<bits/stdc++.h>

using namespace std;

void solve(){
    string s = "konjac";
    string solution = "";
    for(int i = 0; i < s.size(); i++){
        if(i == 0){
            solution += toupper(s[i]);
        }
        else{
            solution += s[i];
        }
    }
    cout<<solution<<"\n";
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}