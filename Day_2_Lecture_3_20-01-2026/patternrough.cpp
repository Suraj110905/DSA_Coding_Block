# include <iostream>
using namespace std;
int main(){
    for(int row=5;row>=15;row--){
        for(int space=0;space<=2*row-2;space++){
            cout<<" ";
        }
        for(int col=1;col<=row;col++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}