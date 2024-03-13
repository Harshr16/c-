#include<iostream>
using namespace std;

int main(){
    // x = 5,4,3,2,1
    int x[] = { 4,5,6,7,8 }; // declaration + intialization

    // forward array
    for(int i = 0; i <= 4; i++){
        cout<<x[i]<<" ";
    }

    cout<<endl; // new line 

    // reverse array
    for(int i = 4; i >= 0; i--){ 
        cout<<x[i]<<" ";
    }    
}