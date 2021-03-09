#include<bits/stdc++.h>

using namespace std;

void showVector(vector<int> printvector){
    for(auto elements: printvector){
        cout<<elements<<" ";
    }
    cout<<endl;
}

vector<int> getMergedVector(vector<int> vector1, vector<int> vector2){
    vector<int> answer;
    auto vector1_iterator = vector1.begin();
    auto vector2_iterator = vector2.begin();

    while(vector1_iterator < vector1.end() && vector2_iterator < vector2.end()){
        if(*vector1_iterator > *vector2_iterator){
            answer.push_back(*vector2_iterator);
            vector2_iterator++;
        }else{
            answer.push_back(*vector1_iterator);
            vector1_iterator++;
        }
    }

    while(vector1_iterator != vector1.end()){
        answer.push_back(*vector1_iterator);
        vector1_iterator++;
    }

    while(vector2_iterator != vector2.end()){
        answer.push_back(*vector2_iterator);
        vector2_iterator++;
    }
    
    return answer;
}

int main(){
    vector<int> vector1 = { 1, 2, 3, 4 };
    vector<int> vector2 = { 2, 4, 5, 7 };
    vector<int> answer = getMergedVector(vector1, vector2);
    showVector(answer);
}