#include<bits/stdc++.h>

using namespace std;

int defined_size = 4;

map<int, int> LRU_MAP;
deque<int> LRU_CACHE;

int getprocess(int processid){
    if(LRU_MAP.find(processid) == LRU_MAP.end()){
        return -1;
    }
    for (auto iter = LRU_CACHE.begin(); iter != LRU_CACHE.end() ; iter++){
        if(*iter == processid){
            LRU_CACHE.erase(iter);
        }
    }
    LRU_CACHE.push_front(processid);
    return LRU_MAP[processid];
}

void putprocess(int processid, int payload){
    if(LRU_MAP.find(processid) == LRU_MAP.end()){
        if(LRU_CACHE.size() == defined_size){
            int element = *(LRU_CACHE.end() - 1);
            LRU_MAP.erase(element);
            LRU_CACHE.erase(LRU_CACHE.end() - 1);
        }
        LRU_CACHE.push_front(processid);
        LRU_MAP.insert({processid, payload});
    }
}

void printcache(){
    for(auto hello: LRU_CACHE){
        cout<<hello<<" ";
    }
    cout<<endl;
}

int main(){  
    //Insert your process here 
    return 0;
}