#include<iostream>
using namespace std;

int main(){
    // x = 5,4,3,2,1
    int x[5]; // declaration
    cout<<"Enter Array Element ";
    for(int i = 0; i <= 4; i++){
        cin>>x[i];
    }

    for(int i = 0; i <= 4; i++){
        cout<<x[i]<<" ";
    }    
}