#include<bits/stdc++.h>

using namespace std;

void solve(){
    int n = 8, k = 5;
    vector<int> inputs = {10,9,8,7,7,7,5,5 };
    int counter = 0;
    for(int i = 0; i < n; i++){
        if(inputs[k] > 0 && inputs[k] <= inputs[i]){
            counter++;
        }
    }
    cout<<counter<<"\n";
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}