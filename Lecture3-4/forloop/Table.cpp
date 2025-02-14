#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number of table"<<endl;
    cin>>n;
    cout<<"Table of given "<<n<<endl;
    for(int i=1;i<=10;i++)
    {
        cout<<"3*"<<i<<"="<<n*i<<endl;

    }
}