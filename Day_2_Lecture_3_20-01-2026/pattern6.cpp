/*
Ques 6: 
n = 5 
 
*  *  *  *  *  
      *  *  *  *  
            *  *  *  
                  *  *  
                        *        */

#include <iostream>
using namespace std;
int main()
{
    for(int row = 1;row<=5;row++)
    {
        for(int space = 0;(space + row)*2;space++){
            cout<<" ";
        }
        for(int col = 5;col<1;col++){
            cout<<"* ";
        }
        cout<<endl;
    }
}