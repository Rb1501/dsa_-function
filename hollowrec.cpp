#include <iostream>
using namespace std;

  int n=4;

int main() {
    for(int i=1; i<=n; i++){
        cout<<"*";
        for(int j=1; j<=n-1; j++){
            if(i==1 || i==n){
                cout<<"*";
            }else{
                cout<<" ";
            }
        }
        cout<<"*" << endl;
    }

   

    return 0;
}