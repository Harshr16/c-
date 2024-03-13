#include<iostream>
using namespace std;

int main(){
    string name = "Harsh" ;
    cout<<name<<endl;
    name.push_back('r'); //add chracter
    cout<<name<<endl;
    name.pop_back(); //remove last character
    cout<<name<<endl;
    name.append(" Rudani");// add new string
    cout<<name<<endl;
}