#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll MAX_L=1e14;
int w,h,required_rectangle_count;
bool ok(ll l){
    ll a=(l/w);
    ll b=(l/h);
    if(b==0) return false;
    return a>=(double)required_rectangle_count/b;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>w>>h>>required_rectangle_count;
    ll l=1,r=MAX_L,ans;
    while(l<=r){
        ll mid=(l+r)/2;
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