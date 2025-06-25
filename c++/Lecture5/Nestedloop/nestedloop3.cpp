#include<iostream>
using namespace std;
int main(){
    int input;
    cout<<"Enter the input n "<<endl;
    cin>>input;
    
    for(int i=1;i<=input;i++)
    {
       
            for(int k=1;k<=i;k++)
            {
                cout<<"*";
            }
            for(int k=1;k<=2*input-2*i;k++)
            {
                cout<<" ";
            }
            for(int k=1;k<=i;k++){
                cout<<"*";
            }
        
        cout<<endl;
    }

   
    for(int i=1;i<=input-1;i++)
    {
        for(int k=1;k<=input-i;k++)
        {
            cout<<"*";
        }
        for(int k=1;k<=i*2;k++)
        {
            cout<<" ";
        }
    
        for(int k=1;k<=input-i;k++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}