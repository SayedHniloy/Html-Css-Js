#include<bits./stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string str;
        cin>>str;
        int ans=n;
        int s=0,e=n-1;
        while(s<e && str[s]!=str[e]){
            s++;
            e--;
            ans-=2;
        }
        cout<<ans<<endl;
    }
    return 0;
}