#include<iostream>
using namespace std;

int main(){   
    int x[]= {8,7,6,5,6,7,8}; // declaration
    int n = sizeof(x)/4;
    int i = 0;
    int j = n-1;
    bool palindrome = true;
    
    while(i<j){
        if(x[i]==x[j]){
            palindrome = true;
        }
        else{
            palindrome = false;
        }
        i++;
        j--;
        
    }
    if(palindrome){
        cout<<"Given array is in palindrome!!"<<endl;
    }
    else{
        cout<<"Given array is not a palindrome!!"<<endl;
    }
    
     
}