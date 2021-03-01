#include<bits/stdc++.h>

using namespace std;

int findMissing(vector<int> numbers){
    int sum = 0;
    int number_size = numbers.size();
    for(int i = 0; i < number_size; i++){
        sum += numbers[i];
    }
    int intended_sum = number_size * ( number_size + 1) / 2;
    if(intended_sum == sum){
        return -1;
    }else{
        return intended_sum - sum;
    }
}

int main(){
    vector<int> numbers = { 0 , 1, 2, 3, 4, 5, 6, 8};
    int missing_number = findMissing(numbers);
    if(missing_number == -1){
        cout<<"There was no missing number in the given sequence"<<endl;
    }else{
        cout<<"The missing number is "<<missing_number<<endl;
    }
    return 0;
}