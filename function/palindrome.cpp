#include<iostream>
using namespace std;


int reverse(int n){
    int rev = 0;
    while(n>0){
         int lastDigit = n%10;
         rev = rev*10+lastDigit;
        n = n/10;    
    }
   

    return rev;

}

bool isPalindrome(int n){
    int res = reverse(n);
    return n = res;
}


int main(){
   cout<<isPalindrome(121);

    return 0;
}