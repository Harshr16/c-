#include<iostream>
using namespace std; 
int main(){
    int n;
    cout<<"Enter the no. of times you want to print "<<endl;
    cin>>n;
    int a = 1;
    // 1 3 5 7 9 11 13 ... upto n
    for(int i = 1; i<=n; i++){
        cout<<a<< " ";
        a += 2;

    }



}