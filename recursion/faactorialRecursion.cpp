#include<iostream>
using namespace std; 
int factorial(int a){
    if(a==0 || a==1){ return 1;}

    return a * factorial(a-1);

}

int sumOfTwo(int a){
    if(a==1){ return 1;}
    
    return a + sumOfTwo(a-1);
}

int main(){
    int n;
    cout<<"Enter the  number"<<endl;
    cin>>n;
    cout<<"Factorial of "<<n << " is "<< factorial(n)<<endl;
    cout<<"Sum of first "<<n << " number is "<< sumOfTwo(n)<<endl;
    

    
    
}