#include<iostream>
using namespace std;

int main(){   
    int x[]= {1,2,3,6,5,6,7,8}; // declaration
    int n = sizeof(x)/4;
    int arr[n];
    for(int i = 0; i<n;i++){
        arr[i]= x[n-1-i];
        cout<<arr[i]<<" ";
    }    
}