#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll x,y,n,c,k;
        cin>>x>>y>>n;
        c=(n-y)/x;
        k=c*x+y;
        cout<<k<<endl;
    }
    return 0;
}