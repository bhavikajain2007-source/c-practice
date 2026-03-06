#include <iostream>
using namespace std;
int main (){
    int arr[10]={10,20,30};
    int n=3;
    int pos;
    cout<<"enter the position to add the number on :";
    cin>>pos;
    int posi=pos-1;
    int value;
    cout<<"enter the value of the number: ";
    cin>>value;
    for (int i=n;i>posi;i--){
        arr[i]=arr[i-1];

    }
    arr[posi]=value;
    n++;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}