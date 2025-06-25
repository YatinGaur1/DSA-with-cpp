#include<iostream>
using namespace std;
int main(){
    int binary,mul=1,compliment=0;
    cout<<"Enter the binary number u want to 1 compliment"<<endl;
    cin>>binary;
    while(binary){
        int fromexor=(binary%10)^1;
        compliment+=mul*fromexor;
        mul*=10;
        binary=binary/10;
    }
    cout<<"your one's compliment number is "<<compliment;
    return 0;
}