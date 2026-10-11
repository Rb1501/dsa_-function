#include <iostream>
using namespace std;

int  factorial(int n){
    int factorial = 1;
    for(int i =2; i<=n; i++){
        factorial = factorial *i;

    }
    return factorial;
}

int coeffient(int n, int r){
    int value2 = factorial(r);
    int value3 = factorial (n-r);
    int value1 = factorial(n);

   int res = value1/(value2*value3);
   

   return res;
}






int main(){
  int ans= coeffient(4,2);
  cout<<ans;
  
    return 0;

}