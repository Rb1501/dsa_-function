#include <iostream>
using namespace std;

int main(){
    int arr[] = {6,3,7,8,26,35};
    int max =arr[0];
    int min = arr[0];
    int n = sizeof(arr)/sizeof(int);
    for(int i = 0; i<n; i++){
        if(arr[i]>max){
            max =arr[i];

        }
        if(arr[i]<min){
            min = arr[i];
        }
    }
    cout<<max<<endl<<min;
}