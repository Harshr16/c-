#include<iostream>
using namespace std; 
int main(){
    int n;
    cout<<"Enter the no. of rows "<<endl;
    cin>>n;
    
    
    for(int i = 1; i<=n; i++){
        int a = n + 1 - i;
        for(int j = 1; j <= n; j++){
            if(j == a){
                cout<<"* ";
                a++;

            }
            else{
                cout<<"  ";

            }
        
        }
        cout<<endl;

    }
}