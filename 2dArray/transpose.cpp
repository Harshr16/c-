#include<iostream>
using namespace std;

int main(){
    int arr[2][3];
    arr[0][0] = 1;
    arr[0][1] = 4;  
    arr[0][2] = 77;
    arr[1][0] = 54;
    arr[1][1] = 78;
    arr[1][2] = 99;
    cout<<"Matrix is given below "<<endl;
    for(int i = 0; i<2;i++){ // rows
        for(int j = 0; j < 3;j++){ // colums
            cout<<arr[i][j]<<" ";

        }
        cout<<endl;
    }  
    int transpose_arr[3][2];
    //Transpose of above matrux
    cout<<"Transpose of given Matrix is printed below "<<endl;

    for(int j = 0; j < 3; j++){
        for(int i =0;i < 2;i++){
            transpose_arr[j][i] = arr[i][j];
            cout<<transpose_arr[j][i]<<" ";
        }
        cout<<endl;

    } 
    
}