#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    map<string,string>mp;
    for(int i=0;i<m;i++){
        string x,y;
        cin>>x>>y;
        if(x.size()<=y.size()){
            mp[x]=x;
        }else{
            mp[x]=y;
        }
    }for(int i=0;i<n;i++){
        string str;
        cin>>str;
        cout<<mp[str]<<" ";
    }cout<<endl;
    return 0;
}