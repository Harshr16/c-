#include<iostream>
using namespace std;

int main(){
    int r;
    cout<<"Enter the no. of rows "<<endl;
    cin>>r;
    int c;
    cout<<"Enter the no. of columns "<<endl;
    cin>>c;
    int mat1[r][c];
    int mat2[r][c];
    for(int i = 0; i<r;i++){ // rows
        for(int j = 0; j < c;j++){ // colums
            cin>>mat1[i][j];

        }
        
    }
    cout<<endl;
    for(int i = 0; i<r;i++){ // rows
        for(int j = 0; j < c;j++){ // colums
            cin>>mat2[i][j];

        }
        
    }
    int sumMat[r][c];
    cout<<"The sum of above matrx is "<<endl;
    for(int i = 0; i<r;i++){ // rows
        for(int j = 0; j < c;j++){ // colums
            sumMat[i][j] = mat1[i][j] + mat2[i][j];
            cout<<sumMat[i][j]<<" ";
        }
        cout<<endl;
    }  
    
    
    
}