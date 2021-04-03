#include<bits/stdc++.h>

using namespace std;

 bool isPalindrome(int x) {
    int copyNumber, givenNumber;
         int currentDigit, reversedNumber = 0;
         copyNumber = x;
         if(x < 10 && x >= 0) return true;
         if(x < 0) return false;
         while (copyNumber != 0){
            currentDigit = copyNumber % 10; 
            reversedNumber = (reversedNumber * 10) + currentDigit;
            copyNumber = copyNumber / 10; 
         } 
         if(reversedNumber == x){
            return true;
         }else{
            return false;
        }
}

int main(){
    int number = -121;
    cout<<isPalindrome(number)<<endl;
    return 0;
}