#include<iostream>
using namespace std;
int main(){
    
    int i=1;
    for(int row=5;row>=1;row--)
    {
        for(int index=i;index<=2*i-1;index++)
        {
            cout<<" ";
        }
        i++;

        for(int col=1;col<=row;col++)
        {
            cout<<col;
        }
        cout<<endl;
    }
    return 0;
}