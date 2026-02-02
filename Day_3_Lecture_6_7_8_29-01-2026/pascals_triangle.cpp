//for n = 5
/*
                        1
                     1    1
                    1   2   1*/

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number";
    cin>>n;
    for(int i=1;i<=n;i++){
        int val = 1;
        for(int j=1;j<=i;j++){
            cout<<val;
            val = val*(i-j)/j;
        }
        cout<<endl;
    }
    return 0;
}