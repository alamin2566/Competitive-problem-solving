#include<bits/stdc++.h>
using namespace std;



#define ll long long



ll get_summ(ll n){
    return n*(n+1)/2;
}
ll get_range_summ(ll l,ll r ){
    return get_summ(r)-get_summ(l-1);
}
int k;ll x;
bool ok(int i){
    ll sum=0;
    if(i<=k){
        sum=get_range_summ(1,i);
    }
    else{
sum=get_range_summ(1,k)+get_range_summ(k-(i-k),k-1);

    }
    return sum>=x;
}
    
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int test;
    cin>>test;
    while(test--){
        cin>>k>>x;
        int l=1,r=2*k-1,ans=2*k-1;
        while(l<=r){
            int mid=l+(r-l)/2;
            if(ok(mid)){
                ans=mid;
                r=mid-1;
            }
            else{
             l=mid+1;
            }
        }
            cout<<ans<<'\n';
    }
    return 0;

}