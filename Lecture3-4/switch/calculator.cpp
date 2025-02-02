#include<iostream>
using namespace std;
int main(){
    int n1,n2;
    char op;
    cout<<"enter the number1 operator number2"<<endl;
    cin>>n1>>op>>n2;
    
    switch (op)
    {
    case '+':
        cout<<n1+n2;
        break;
    case '-':
       cout<<n1-n2;
       break;

    case '*':
       cout<<n1*n2;
       break;

    case '/':
       cout<<n1/n2;
       break;

    default:
        cout<<"I am still learning more!";
        break;
    }

    return 0; 
}