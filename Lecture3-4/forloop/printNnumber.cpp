#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number";
    cin>>n;
    for(int i=0;i<=n;++i){
        cout<<i<<endl;
    }

    cout<<++n<<endl;
    cout<<n++<<endl;
    cout<<n;

    return 0;
}