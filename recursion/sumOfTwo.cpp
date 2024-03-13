#include<iostream>
using namespace std;

int sumOfTwo(int a){
    if(a==1){ return 1;}
    
    return a + sumOfTwo(a-1);

}

int main(){
    int n;
    cout<<"Enter the  number"<<endl;
    cin>>n;
    
    cout<<"Sum of first "<<n << " number is "<< sumOfTwo(n)<<endl;
    
}