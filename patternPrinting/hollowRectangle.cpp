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
        for(int j = 1; j <= c; j++){
            if(i == 1 || i == n || j == 1 || j == c){
                cout<<"* ";

            }
            else{
                cout<<"  ";
            }

        }
        cout<<endl;

    }



}