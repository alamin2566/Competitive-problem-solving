#include<bits/stdc++.h>
using namespace std;
const int mod=1e9+7;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int cnt=1;
        for(int i=1;i<=k;i++){
            cnt=(1LL*cnt*n)%mod;
        }
        cout<<cnt<<endl;
    }
}