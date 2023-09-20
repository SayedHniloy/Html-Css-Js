#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int ans=0,count=0;
    for(int i=1;i<=n;++i){
        ans+=5*i;
        if(ans+k<=240){
        count++;
         }
    }
    cout<<count<<endl;
    return 0;

}