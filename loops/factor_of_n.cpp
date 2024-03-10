#include<iostream>
using namespace std; 
int main(){
    int n;
    cout<<"Enter the no.  "<<endl;
    cin>>n;
    int a = 1;
    // 1 3 5 7 9 11 13 ... upto n
    for(int i = 1; i<n; i++){
        if(n%i == 0){
            a = i;
        }

    }
    cout<< "The highest factor is "<< a << endl;




}