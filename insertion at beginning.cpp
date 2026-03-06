#include <iostream>
using namespace std;
int main(){
    int arr[10]={10,20,30};
    int n=3;
    int value;
    cout<<"enter a number to insert at beginning: ";
    cin>>value;
    for(int i=n;i>0;i--){
        arr[i]=arr[i-1];

    }
    arr[0]=value;
    n++;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}