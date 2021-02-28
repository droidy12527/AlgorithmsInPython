#include<bits/stdc++.h>

using namespace std;

//First Occurance of Element in Sorted Array

int findOccurance(vector<int> numbers, int target){
    int left = 0;
    int right = numbers.size() - 1;
    while(left <= right){
        int mid = (left + right) / 2;
        if(numbers[mid] == target){
            if(mid == 0 || numbers[mid] != numbers[mid -1 ]){
                return mid;
            }
            right = mid - 1;
        }else if(numbers[mid] > target){
            right = mid - 1;
        }else{
            left = left + 1;
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