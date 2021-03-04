#include<bits/stdc++.h>

using namespace std;

bool findDuplicates(vector<int> numbers){
    set<int> checker;
    for(int i = 0 ; i < numbers.size(); i++){
        checker.insert(numbers[i]);
    }
    if(checker.size() == numbers.size()){
        return false;
    }else{
        return true;
    }
}

int main(){
    vector<int> numbers = { 1, 2, 3, 1 };
    bool answer = findDuplicates(numbers);
    if(answer == true){
        cout<<"There are duplicates in the array"<<endl;
    }else{
        cout<<"There are no duplicates in the array"<<endl;
    }
    return 0;
}