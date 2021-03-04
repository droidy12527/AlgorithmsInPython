#include<bits/stdc++.h>

using namespace std;

int findMajority(vector<int> elements){
    map<int, int> checker;
    int vector_size = elements.size();
    for(int i = 0 ; i < elements.size(); i ++){
        checker[elements[i]] += 1;
    }
    for(auto check: checker){
        if( check.second > vector_size / 2 ){
            return check.first;
        }
    }
}

int main(){
    vector<int> elements = { 1, 2, 3, 1, 1};
    int majority_element = findMajority(elements);
    cout<<"The majority element is "<<majority_element<<endl;
    return 0;
}