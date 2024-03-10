#include<iostream>
using namespace std; 
int main(){
    int n;
    cout<<"Enter the no. of rows "<<endl;
    cin>>n;
    
    
    for(int i = 1; i<=n; i++){
        for(int j = 1; j <= i; j++){
            int d = (2 * j) - 1;
            cout<< d<<" ";
        
        
        }
        cout<<endl;

    }
}