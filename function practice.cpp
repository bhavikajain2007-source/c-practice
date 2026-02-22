#include <iostream>
using namespace std;
int add(int a,int b){
    return a+b;
}
int main(){
    int a;
    cout<<"enter integer a:";
    cin>>a;
    int b;
    cout<<"enter integer b:";
    cin>>b;
    cout<<add(a,b);
}