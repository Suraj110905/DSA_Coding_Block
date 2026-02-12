#include <iostream>
#include <climits>
using namespace std;
int main(){
    int arr[5] = {1,9,2,3,4,};
    int ele = INT_MIN;
    for(int i=0;i<3;i++){
        if(arr[i]>ele){
            ele = arr[i];
        }
    }
    for(int i = 0;i<5;i++){
        cout<<arr[i];
    }
}