#include<iostream>
using namespace std;

int main(){
    
    int x[]= {1,2,3,6,5,6,7,8}; // declaration
    int n = sizeof(x)/4;

    for(int i=0; i < n; i++){
        if(i%2==0){
            x[i] += 10;
        }
        else{
            x[i] *= 2;
        }
    } 
    for(int i = 0; i < n; i++){
        cout<<x[i]<< "  ";

    }

}