#include<bits/stdc++.h>

using namespace std;

//Find the last occurance

int findOccurance(vector<int> numbers, int target){
    int left = 0;
    int right = numbers.size() - 1;
    while(left <= right){
        int mid = (left + right) / 2;
        if(numbers[mid] == target){
            if(mid == numbers.size() || numbers[mid + 1] != target){
                return mid;
            }
            left = left + 1;
        }else if(numbers[mid] > right){
            right = mid - 1;
        }else{
            left = mid + 1;
        }
    }
    return -1;
}


int main(){
    vector<int> numbers = { 1, 2, 3, 4, 4, 4, 5, 6, 9};
    int target = 4;
    int index = findOccurance(numbers, target);
    if(index == -1){
        cout<<"The number does not exist in vector"<<endl;
    }else{
        cout<<"The number is at index "<<index<<endl;
    }
    return 0;
}