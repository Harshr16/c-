#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number "<<endl;
    cin>>n;
    int arr[n];

    for(int i = 0;i < n; i++){
        arr[i] = (i+1) * (i+1);
    }
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}