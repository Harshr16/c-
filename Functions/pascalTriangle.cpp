#include<iostream>
using namespace std; 
float factorial(float a){
    float product = 1;
    if(a==0){
        return 1;
    }
    else{
        for(int i = 1; i <=a; i++){
        product *= i;

        }
        return product;
    }

}
float combination(float n, float r){

    float n_cR= (factorial(n)) / (factorial(r) * factorial(n-r));
    return n_cR;

}


int main(){
    int n;
    cout<<"Enter the no. of rows"<<endl;
    cin>>n;

    for(int i = 0; i<=n; i++){ 

        for(int j = 0; j<=n-i-1;j++){
            cout<<"  ";

        }
        for(int j = 0; j<=i;j++){
            cout<<combination(i,j)<<"   ";

        }
        cout<<endl;
    }
    
    


    
    
}