#include<iostream>
using namespace std;

int add(int num1,int num2){
    cout<<"Two parameter"<<" ";
    return num1+num2;
}

int add(int num1,int num2,int num3){
    cout<<"Three parameter"<<" ";
    return num1+num2+num3;
}
int main(){
    cout<<add(2,3)<<endl;
    cout<<add(2,3,4)<<endl;
    return 0;
}