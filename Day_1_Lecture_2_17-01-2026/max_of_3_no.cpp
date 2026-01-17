//Q5. Find the Maximum of Three Numbers
#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter the numbers";
    cin>>a>>b>>c;
    if(a>b && a>c){
        cout<<a<<"  i.e max is a";
    }else if(b>a && b>c){
        cout<<b<<"  i.e max is b";
    }else{
        cout<<c<<"  i.e max is c";
    }
}