#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    for(int i=0;i<=n;i++)
    {
        if(i%2==0)
        {
            cout<<"Even";
            cout<<i<<endl;
        }
        else if(i%2==1)
        {
            cout<<"Odd"<<i<<endl;
        }
    }
}