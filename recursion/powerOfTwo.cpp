#include<iostream>
using namespace std;

int power(int a,int b){
    if(a==0 ){ return 0;}
    if(b == 0){ return 1;}
    
    return a * power(a,b-1);

    

}

int main(){
    int n;
    cout<<"Enter the 1st number"<<endl;
    cin>>n;

    int m;
    cout<<"Enter the 2nd number"<<endl;
    cin>>m;
    
    cout<<power(n,m)<< endl;
    
}