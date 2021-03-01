#include<bits/stdc++.h>

using namespace std;

int findPrimes(int number){
    vector<bool> primebox (number, true);
    primebox[0] =  false;
    primebox[1] = false;
    if(number < 2){
        return -1;
    }
    int stoppingvalue = ceil(sqrt(number));
    for(int i = 2; i < stoppingvalue; i++){
        if(primebox[i]){
            for(int j = i * i ; j < number ; j += i){
                primebox[j] = false;
            }
        }
    }
    return accumulate(primebox.begin(), primebox.end(), 0);
}

int main(){
    int number = 12;
    int no_primes = findPrimes(number);
    if(no_primes == -1){
        cout<<"There was no prime found or there was an error"<<endl;
    }else{
        cout<<"The number of prime are "<<no_primes<<endl;
    }
    return 0;
}