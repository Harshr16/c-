#include<iostream>
using namespace std;
void change(int arr[]){
    arr[0] = 7;

}

int main(){ 
   
    int x[5] = {1,2,3,4,5}; // declaration
    for(int i = 0; i <= 4; i++){
        cout<<x[i]<< " ";
    }
    cout<<endl;
    change(x);
    for(int i = 0; i <= 4; i++){
        cout<<x[i]<<" ";
    }    
}