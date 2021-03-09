#include<bits/stdc++.h>

using namespace std;

string findMinSubstring(string init_string, string init_substring){
    map<char , int> map_substring;
    map<char, int> map_string;
    int count = 0;
    string answer;
    for(int i = 0; i < init_substring.size(); i++){
        map_substring[init_substring[i]] += 1;
    }
    int L = 0;
    int R = 0;
    while(L < init_string.size() && R < init_string.size()){
        char character = init_string[R];
        map_string[character] += 1;
        if(map_substring[character] > map_string[character] && map_substring[character] != 0){
            count += 1;
            if(count == init_substring.size()){
                if(map_substring[character] < map_string[character] || map_substring[character] == 0){
                    map_string[character] -= 1;
                    L += 1;
                }else{
                    answer = init_string.substr(L, R);
                }
            }else{  
                R += 1;
            }
        }
    }
    return answer;
}

int main(){
    string init_string = "abbaacad";
    string init_substring = "aab";
    string answer = findMinSubstring(init_string, init_substring);
    cout<<"The substring is "<<answer<<endl;
    return 0;
}