#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    // string str1="I hate it";
    // string str2="I hate that I love it";
    // vector<string>str;
    for(int i=1;i<=n;i++){
        if(i==1){
            cout<<"I hate ";
        }else if(i%2!=0){
            cout<<"that I hate ";
        }else{
            cout<<"that I love ";
        }
    }
        cout<<"it"<<endl;
    return 0;
}