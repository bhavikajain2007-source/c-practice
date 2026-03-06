#include <iostream>
using namespace std;
int main (){
    int arr[10]={10,20,30};
    int n=3;
    int value;
    cout<<"enter a number : ";
    cin>>value;
    arr[n]=value;
    n++;
    for(int i=0;i<=3;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}