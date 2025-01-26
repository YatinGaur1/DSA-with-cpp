#include<bits/stdc++.h>
using namespace std;

//here we learn factorial of large number becuause if we use simply method ->stack overflow comes to reduce this we use modular we know anser is not same but this is in range what value of modular u use;
//factorial give ans%10^9+7;
int main(){
    int fact,n;
    cout<<"Please enter the value of number and modular also "<<endl;
    cin>>fact>>n;
    
    long long factorial=1;//or int factorial=1;
    while(fact>0)
    {
        factorial=(factorial * fact%n)%n;//or factorial=(1LL*factorial* fact%n)%n;
        fact--;
    }
    cout<<factorial;
    return 0;
}