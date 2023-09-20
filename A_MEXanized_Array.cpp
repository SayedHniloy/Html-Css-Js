#include<bits/stdc++.h>
using namespace std;
int solve(){
    int n,k,x;
    cin>>n>>k>>x;
    if(k>n || k>x+1) return -1;
    if(k==x) x--;
    return k*(k-1)/2+(n-k)*x;

}
int main(){
    int t;
    cin>>t;
    while(t--){
       int ans= solve();
       cout<<ans<<endl;
    }
}