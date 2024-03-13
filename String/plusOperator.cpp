#include<iostream>
using namespace std;

int main(){
    string name = "Harsh" ;
    name = name + " Rudani";
    cout<<name<< " "<< name.length()<<endl;
    name.clear();
    name = "Harsh";
    name = "Rudani " + name;
    cout<<name<< " "<< name.length()<<endl;
    
}