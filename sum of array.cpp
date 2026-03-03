#include <iostream>
using namespace std;
int main(){
    int arr[10];
    for(int i=0;i<10;i++){
        cout<<"enter 10 numbers: ";
        cin>>arr[i];
    }
    int sum=0;
    for(int i=0;i<10;i++){
        sum+=arr[i];
        

    }
    cout<<"sum="<<sum;
    return 0;

}
