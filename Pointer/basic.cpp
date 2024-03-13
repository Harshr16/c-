#include<iostream>
using namespace std; 
int main(){
    int x = 4;
    int* p = &x;
    cout<<p<<endl; // pointer p stores address of x
    cout<<&x<<endl; // address of x
    cout<<x<<endl;
    cout<<*p<<endl;
   
}