//reverse digit
#include <iostream>
using namespace std;
int main(){
    for(int row=0;row<=4;row++){
        for(int space=0;space<=(row*2-1)+space;space++){
            cout<<" ";
        }
        for(int col=5;col>=1;col--){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}