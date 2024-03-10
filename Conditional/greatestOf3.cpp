#include<iostream>
using namespace std;

int main(){
    int a;
    cout<<"Enter the 1st number"<<endl;
    cin>>a;

    int b;
    cout<<"Enter the 2nd number"<<endl;
    cin>>b;

    int c;
    cout<<"Enter the 3rd number"<<endl;
    cin>>c;

    if(a>b){
        if(a>c){
            cout<<"a is greatest"<<endl;
        }
        else{
            cout<<"c is greatest"<<endl;
        }
    }
    else{
        if(b>c){
            cout<<"b is greatest"<<endl;
        }
        else{
            cout<<"c is greatest"<<endl;
        }

    }
    
}
