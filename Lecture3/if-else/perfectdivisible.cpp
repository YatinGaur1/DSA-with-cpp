#include<iostream>
using namespace std;
int main(){
    int a=3,b=5,c;
    cout<<"enter the number ";//cin read a number as one input  before enter or space  , after it read second instruction. 
    cin>>c;
    if((c%a==0)&&(c%b==0))
    cout<<"Perfect number";
    else
    cout<<"Not Perfect number";
}
