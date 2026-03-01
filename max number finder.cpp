#include <iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter number 1:";
    cin>>a;
    int b;
    cout<<"enter number 2:";
    cin>>b;
    int c;
    cout<<"enter number 3:";
    cin>>c;
    if(a>=b&&a>=c){
        cout<<"largest number: "<<a;
    }
    else if (b>=a&&b>=c){
        cout<<"largest number: "<<b;

    }
    else{
        cout<<"largest numbeer:"<<c;
    }
    return 0;


}