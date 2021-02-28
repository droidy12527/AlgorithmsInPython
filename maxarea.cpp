#include<bits/stdc++.h>

using namespace std;

int findMaxArea(vector<int> numbers){
    int left = 0;
    int right = numbers.size() - 1;
    int answer = 0;
    while(left < right){
        answer = max(answer, min(numbers[left] , numbers[right]) * right - left);
        if(numbers[left] < numbers[right]){
            left += 1;
        }else{
            right -=1;
        }
    }
    return answer;
}

int main(){
    vector<int> numbers = { 1, 7 , 3, 5, 3, 2, 6 };
    int max_area = findMaxArea(numbers);
    if(max_area == -1){
        cout<<"There was error in finding the max area"<<endl;
    }else{
        cout<<"The max area is "<<max_area<<endl;
    }
    return 0;
}