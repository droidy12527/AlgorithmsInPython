#include<bits/stdc++.h>

using namespace std;

int findNumofBoats(vector<int> arr, int limit){
    sort(arr.begin(), arr.end());
    int num_boats = 0;
    int left = 0;
    int right = arr.size() - 1;
    if(arr[right] > limit){
        return -1;
    }
    while(left <= right){
        if(left == right){
            num_boats += 1;
        }
        if(arr[left] + arr[right] <= limit){
            left += 1;
        }
        num_boats += 1;
        right -= 1;
    }
    return num_boats;
}

int main(){
    vector<int> arr = {1, 3, 5, 5 ,6, 3 ,2 ,5 ,7 ,4 ,9};
    int limit = 9;
    int boats_needed = findNumofBoats(arr, limit);
    cout<<"The number of boats needed are "<<boats_needed<<endl;
    return 0;
}