#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n:";
    cin>>n;
    if(n==0){
        cout<<"zero";
    }
    else if(n%2==0&&n>0){
        cout<<"positive and even";
    }
    else if(n%2==0&&n<0){
        cout<<"negative and even";
    }
    else if(n%2!=0&&n>0){
        cout<<"positive and odd";
    }
    else if (n%2!=0&&n<0){
        cout<<"negative and odd";
    }
    return 0;


    
}