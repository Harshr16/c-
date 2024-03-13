#include<iostream>
using namespace std;

int main(){
    
    int x[]= {1,2,3,6,5,6,7,8}; // declaration
    int size = sizeof(x)/4;
    int sum = 0;
    for(int i = 0; i < size; i++){
        sum = sum + x[i];
    }  
    cout<<"The sum of given numbers is "<< sum<<endl;  
}