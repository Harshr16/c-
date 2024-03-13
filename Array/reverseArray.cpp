#include<iostream>
using namespace std;

int main(){   
    int x[]= {1,2,3,6,5,6,7,8}; // declaration
    int n = sizeof(x)/4;
    int i = 0;
    int j = n-1;
    for(int i = 0; i < n; i++){
        cout<<x[i]<<" ";

    }
    while(i<j){
        int temp = x[i];
        x[i] = x[j];
        x[j] = temp;
        i++;
        j--;
    }
    cout<<endl;
    for(int i = 0; i < n; i++){
        cout<<x[i]<<" ";

    }
     
}