#include<bits/stdc++.h>

using namespace std;

void solve(){
    vector<vector<int>> inputs = { {0,0,0,0,0} ,{ 0,0,0,0,0 }, { 0,1,0,0,0 }, {0,0,0,0,0}, {0,0,0,0,0} };
    int k,l;
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            if(inputs[i][j] == 1){
                k = i;
                l = j;
            }
        }
    }
    cout<<abs((k+1) - 3)+abs((l+1) -3)<<endl;
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}