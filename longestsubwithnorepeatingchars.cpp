#include<bits/stdc++.h>

using namespace std;

int SubString(string hello){
    map<char, int> tracker;
    int first = 0;
    int second = 0;
    int answer = 0;
    while(first < hello.length() && second < hello.length()){
        char element = hello[second];
        if(tracker.find(element) != tracker.end()){
            first = max(first, tracker[element]);
        }
        tracker[element] = second;
        answer = max(answer, (second - first) + 1);
        second += 1;
    }
    return answer;
}

int main(){
    string hello = "ababdhksoia";
    int value = SubString(hello);
    cout<<"The longest substring length is "<<value<<endl;
    return 0;
}