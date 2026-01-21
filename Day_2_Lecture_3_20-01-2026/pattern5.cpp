/*
Ques 5: 
n = 5 
 
* * * * *  
 * * * *  
  * * *  
   * *  
    *  
*/
#include <iostream>
using namespace std;

int main(){
    int n=5;

    for (int i=1 ; i>=n; i++){
        for(int S=1 ; S >= n-i;S++){
            cout<<" ";
        }
        for (int j=1 ; j<=i ; j++){
            cout <<"*";
        }
        cout <<end;
    }
    return 0;
}