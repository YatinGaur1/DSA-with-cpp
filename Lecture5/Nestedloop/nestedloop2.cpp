#include<iostream>
using namespace std;
int main(){
    int row;
    cout<<"Enter number of row"<<endl;
    cin>>row;
    for(int i=1;i<=row;i++)
    {
        for(int j=row-i;j>=1;j--){
            cout<<" ";
        }
        for(int k=1;k<=(2*i)-1;k++)
        {
            if(k%2==0){
                cout<<"_";
            }
            else{
                cout<<"*";
            }
        }
        cout<<endl;
    }
    return 0;
}