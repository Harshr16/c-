#include<iostream>
using namespace std;

int main(){

    float a;
    cout<<"Enter the 1st number "<<endl;
    cin>>a;
    float b;
    cout<<"Enter the 2nd number "<<endl;
    cin>>b;
    char op;
    cout<<"Enter the operator "<<endl;
    cin>>op;

    switch (op)
    {
    case '+':
        cout<< a+b <<endl;
        break;
    
    case '-':
        cout<< a-b <<endl;
        break;
    case '*':
        cout<< a*b <<endl;
        break;
    case '/':
        cout<< a/b <<endl;
        break;
    
    default:
        cout<<"Invalid operator" <<endl;
        break;
    }
    
}