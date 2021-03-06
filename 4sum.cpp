#include<bits/stdc++.h>

using namespace std;

int findSumzero(vector<int> v1, vector<int> v2, vector<int> v3, vector<int> v4){
    int answer = 0;
    map<int, int> tracker;
    for(int i = 0; i < v1.size(); i++){
        for(int j = 0; j < v2.size(); j++){
            int sum = v1[i] + v2[j];
            tracker[sum] += 1;
        }
    }
    for(int k = 0; k < v3.size(); k++){
        for(int l = 0; l < v4.size(); l++){
            int negsum = - (v3[k] + v4[l]);
            answer = answer + tracker[negsum];
        }
    }
    return answer;
}

int main(){
    vector<int> v1, v2, v3, v4;
    v1 = { 1, 2 };
    v2 = { -2, -1 };
    v3 = { -1, 2 };
    v4 = { 0, 2 };
    int number = findSumzero(v1, v2, v3, v4);
    cout<<"The number of possible answers is "<<number<<endl;    
    return 0;
}