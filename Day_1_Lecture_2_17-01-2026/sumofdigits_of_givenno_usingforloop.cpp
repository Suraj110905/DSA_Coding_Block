//Q12. Find the Sum of Digits of a Given Number using a Loop
#include <iostream>
using namespace std;
int main(){
    int n,sum=0;
    cout<<"enter the number";
    cin>>n;
    if(n<10){
        cout<<"enter a valid number i.e > 9";
    }else{
        for(;n>0;n=n/10){ //initalization of value is done so it is left blank
            sum = sum + n%10;          
        } 
        cout<<"sum of digits is : "<<sum;
    }
}