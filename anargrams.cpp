#include<bits/stdc++.h>

using namespace std;

vector<vector<string>> findAnagrams(vector<string> whatever){
    map<string, vector<string>> answers;
    vector<vector<string>> return_ans;
    for(int i = 0 ; i < whatever.size(); i++){
        string hello = whatever[i];
        sort(hello.begin(), hello.end());
        answers[hello].push_back(whatever[i]);
    }
    for(auto hello: answers){
        return_ans.push_back(hello.second);
    }
    return return_ans;
}

int main(){
    vector<vector<string>> answer;
    vector<string> whatever = { "eat", "tea", "tan", "ate", "nat", "bat" };
    answer = findAnagrams(whatever);
    for(int i = 0 ; i < answer.size(); i++ ){
        cout<<"The annagrams are ";
        for(auto hello : answer[i]){
            cout<<hello<<" ";
        }
        cout<<endl;
    }
    return 0;
}