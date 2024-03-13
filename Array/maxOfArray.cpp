#include<iostream>
using namespace std;

int main(){    
    int x[]= {11,2,34,62,89,46,17,8}; // declaration
    int size = sizeof(x)/4;
    int mx = INT_MIN;
    for(int i = 0; i < size; i++){
        // using if
        if(x[i] > mx){
            mx = x[i];
        }
        // Using Builting function
        // mx = max(mx,x[i]);
    }  
    int smx = INT_MIN;
    for(int i = 0; i < size; i++){
        // using if
        // if(x[i] > mx){
        //     mx = x[i];
        // }
        // Using Builting function
        if(mx!= x[i]){
            smx = max(smx,x[i]);
        }
        
    }

    cout<<"The maximum of given numbers is "<< mx<<endl;
    cout<<"The 2nd maximum of given numbers is "<< smx<<endl; 

}