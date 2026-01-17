//Q6. Grade Card Program (Based on Marks)
# include <iostream>
using namespace std;
int main(){
    int marks;
    cout<<"enter the marks";
    cin>>marks;
    if(marks>=80 && marks<=100){
        cout<<"On the basis of marks your Grade is A";
    }else if(marks>=60 && marks<=79){
        cout<<"On the basis of marks your Grade is B";
    }else if(marks>=40 && marks<=59){
        cout<<"On the basis of marks your Grade is C";
    }else if(marks>=25 && marks<=39){
        cout<<"On the basis of marks your Grade is D";
    }else if(marks>=0 && marks<=24){
        cout<<"On the basis of marks your are failed";
    }else{
        cout<<"invalid input : enter a valid marks b/w 0-100";
    }
}