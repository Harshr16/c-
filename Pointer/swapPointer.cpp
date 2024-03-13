#include<iostream>
#include<cmath>
using namespace std; 
void swap (int* a , int* b){
    
    int temp = *a;
    *a = *b;
    *b = temp;

}  
int main(){
    int x=2;
    int y = 5;
    



    cout<<x <<" and "<< y<<endl; 
    swap(&x,&y);
    
    cout<<x <<" and "<< y<<endl;    
}