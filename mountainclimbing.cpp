#include<bits/stdc++.h>

using namespace std;

bool mountainClimbing(vector<int> values){
    int tracker = 1;
    int length = values.size();
    while(tracker < length && values[tracker] > values[tracker - 1]){
        tracker += 1;
        if(tracker == length){
            return false;
        }
    }
    while(tracker < length && values[tracker] < values[tracker - 1]){
        tracker +=1;
        if(tracker == length){
            return true;
        }
    }
}


int main(){
    vector<int> m = { 1, 2, 3, 4, 5, 2, 9 ,1};
    bool ismountainclimbing = mountainClimbing(m);
    if(ismountainclimbing){
        cout<<"It is an mountainclimbing array"<<endl;
    }else{
        cout<<"It is not an mountain climbing array"<<endl;
    }
    return 0;
}