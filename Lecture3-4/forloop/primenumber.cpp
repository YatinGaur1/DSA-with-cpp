#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number u check to prime ";
    cin>>n;
    if(n<2)
    {
        cout<<n<<" Not a prime number ";
        return 0;
    }

    for(int num=2;num<n;num++)
    {
        if(n%num==0)
        {
            cout<<n<<" Not a prime";
            return 0;
        }
    }

    cout<<n<<" is prime number";
    return 0;
}