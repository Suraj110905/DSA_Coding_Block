#include <iostream>
using namespace std;
int main(){
    int n,fact=1;
    cin>>n;
    if(n==0){
        cout<<"factorial is 1";
    }else if(n<0){
        cout<<"factorial is not possible";
    }else{
        for(;n>=1;n--)
        fact=fact*n;
            cout<<"factorial is"<<fact<<endl;
    }
}
