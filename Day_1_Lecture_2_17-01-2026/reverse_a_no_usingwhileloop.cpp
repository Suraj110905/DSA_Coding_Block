//Q13. Reverse a Number using a While Loop
#include <iostream>
using namespace std;
int main(){
    int num,rev=0;
    cin>>num;
    
    for(;num!=0;num=num/10){
        int digit = num%10;
        rev=rev*10+digit;
    }
    cout<<rev;

    
}