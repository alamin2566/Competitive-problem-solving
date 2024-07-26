#include<bits/stdc++.h>
using namespace std;
int need_msb(int x){
    return __lg(x);
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int test;
    cin>>test;
    while(test--){
        int n;
        cin>>n;
        vector<int>cnt(30,0);
        for(int i=1;i<=n;i++){
            int a;
            cin>>a;
            int k=need_msb(a);
            cnt[k]++;
        }
        long long ans=0;
        for(int k=0;k<30;k++){
            ans+=1LL*cnt[k]*(cnt[k]-1)/2;
        }
        cout<<ans<<endl;
    }
}