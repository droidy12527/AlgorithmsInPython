#include<bits/stdc++.h>

using namespace std;

int binsearch(vector<int> new_vector, int number){
    int left = 0;
    int right = new_vector.size() - 1;
    while(left <= right){
        int mid = left + (right - 1) / 2;
        if(new_vector[mid] == number){
            return mid;
        }
        else if (new_vector[mid] > number){
            right = mid - 1;
        }
        else{
            left = left + 1;
        }
    }
    return -1;
}

int main(){
    vector<int> new_vector = { 1, 3 , 4 , 5, 6 };
    int number = 5;
    int index = binsearch(new_vector, number);
    cout<<"The index of element is "<<index<<endl;
    return 0;
}
