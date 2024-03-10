#include<iostream>
using namespace std; 
int main(){
    int n;
    cout<<"Enter the no. of rows "<<endl;
    cin>>n;
    int c;
    cout<<"Enter the no. of columns "<<endl;
    cin>>c;
    for(int i = 1; i<=n; i++){
        for(int j = 0; j < c; j++){
            cout<<"* ";

        }
        cout<<endl;

    }



}