#include<iostream>
using namespace std; 
int main(){
    int n;
    cout<<"Enter the no.  "<<endl;
    cin>>n;

    int count = 0;

    while(n != 0){
        n = n / 10;
        count++;

    }
    
    cout<<"Number of digits in given number is "<<count<<"!!"<<endl;



}