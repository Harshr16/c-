#include<iostream>
using namespace std; 
float factorial(float a){
    float product = 1;
    for(int i = 1; i <=a; i++){
        product *= i;

    }
    return product;
    

}
float combination(float n, float r){

    float n_cR= (factorial(n)) / (factorial(r) * factorial(n-r));
    return n_cR;

}
float permutation(float n, float r){

    float n_pR = (factorial(n)) / (factorial(n-r));
    return n_pR;

}

int main(){
    float n;
    cout<<"Enter the 1st number"<<endl;
    cin>>n;
    float r;
    cout<<"Enter the 2nd number"<<endl;
    cin>>r;

    cout<<"The combination of given number is "<< combination(n,r)<<endl;
    cout<<"The permutation of given number is "<< permutation(n,r)<<endl;
    
}