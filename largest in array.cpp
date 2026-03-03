#include <iostream>
using namespace std;
int main(){
    int arr[5];
    cout<<"enter 5 numbers"<<endl;
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    int largest=arr[0];
    for(int i=1;i<5;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    
    cout<<"largest="<<largest;
    int smallest=arr[0];
    for(int i=1;i<5;i++){
        if(arr[i]<smallest){
            smallest=arr[i];
        }
    }
    cout<<"smallest="<<smallest;
    return 0;
}