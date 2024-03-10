#include<iostream>
using namespace std; 
int main(){
    int n;
    cout<<"Enter the no. of rows "<<endl;
    cin>>n;
    int c;
    
    for(int i = 1; i<=n; i++){
        for(int j = 1 ; j <=n +1 - i; j++){
           
           
                cout<<j+64 <<" ";
            
            
        }
        cout<<endl;
    }

}
