#include<bits/stdc++.h>

using namespace std;

vector<int> movezeros(vector<int> hello){
    int counter = 0;
    int size = hello.size() - 1;
    for(int i = 0; i <= size; ++i){
        if(hello[i] != 0){
            hello[counter] = hello[i];
            counter += 1;
        }
    }
    for(int j = counter; j <= size; j++){
        hello[j]= 0;
    }
    return hello;
}

int main(){
    vector<int> hello = { 1, 0 , 10, 2, 20, 0, 1};
    vector<int> new_sorted = movezeros(hello);
    for(auto i = new_sorted.begin(); i < new_sorted.end(); i++){
        cout<<*i<<endl;
    }
    return 0;
}