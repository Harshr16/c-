#include<iostream>
using namespace std; 
int main(){
    int n;
    cout<<"Enter the number "<<endl;
    cin>>n;
    
    while(n!=0){
       int digit = n % 10;
       cout<< digit;
       n = n/10;

    }



}