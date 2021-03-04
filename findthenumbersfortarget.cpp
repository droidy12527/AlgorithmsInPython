#include<bits/stdc++.h>

using namespace std;

pair<int, int> findIndex(vector<int> numbers, int target){
    map<int, int> found_numbers;
    pair<int, int> answer;
    for(int i = 0; i < numbers.size(); i++){
        int goal = target - numbers[i];
        if(found_numbers.find(goal) != found_numbers.end()){
            answer.first = found_numbers[goal];
            answer.second = i;
            return answer;
        }
        found_numbers[numbers[i]] = i;
    }
}

int main(){
    vector<int> numbers = { 3, 6, 12, 14 };
    int target = 15;
    pair<int, int> answer;
    answer = findIndex(numbers, target);
    cout<<"The index are ("<<answer.first<<","<<answer.second<<")"<<endl;
    return 0;
}