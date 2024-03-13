#include<iostream>
using namespace std;

int main(){
    int x;
    cout<<"Enter the number"<< endl;
    cin>>x;
    int count =0;
    int arr[] = {4,6,9,12,56,32};
    int n = sizeof(arr)/4;

    for(int i = 0;i < n;i++){
        if(arr[i]>x){
            count++;
        }
    } 
    cout<<"The number of integer greater than "<< x<<" is "<<count<<endl;
}