#include<bits/stdc++.h>

using namespace std;

vector<vector<int>> findSubsets(vector<int> numbers, vector<vector<int>> answer = {}, vector<int> current = {}, int position = 0){
    if(position >= numbers.size()){
        return answer;
    }
    answer.push_back(current);
    for(int i = 0; i < numbers.size(); ++i){
        auto find_number = find(current.begin(), current.end(), numbers[i]);
        if(find_number == current.end()){
           current.push_back(numbers[i]);
           findSubsets(numbers, answer, current, i);
           current.pop_back();
        }
    }
}


int main(){
    vector<int> numbers = { 1, 2, 3};
    vector<vector<int>> solution = findSubsets(numbers);
    for(auto prathamesh: solution){
        for(auto hello: prathamesh){
            cout<<hello<<endl;
        }
    }
    return 0;
}