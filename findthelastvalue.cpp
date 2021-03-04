#include<bits/stdc++.h>

using namespace std;

pair<int, int> findLastLocation(string moves){
    pair<int, int> answer;
    for(int i = 0; i < moves.length(); i++){
        switch (moves[i])
        {
        case 'U': answer.second += 1;
            break;
        case 'L': answer.first -= 1;
            break;
        case 'D': answer.second -= 1;
            break;
        case 'R': answer.first += 1;
            break;
        }
    }
    return answer;
}

int main(){
    string moves = "UDUDLRR";
    pair<int, int> location;
    location = findLastLocation(moves);
    cout<<"The location of is ("<<location.first<<","<<location.second<<")"<<endl;
    return 0;
}