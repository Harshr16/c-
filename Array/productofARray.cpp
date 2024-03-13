#include<iostream>
using namespace std;

int main(){
    
    int x[]= {1,2,3,4,5,88,7,43,55}; // declaration
    int size = sizeof(x)/4;
    int product = 1;
    for(int i = 0; i < size; i++){
        product *= x[i];
    }  
    cout<<"The product of given numbers is "<< product<<endl;  
}