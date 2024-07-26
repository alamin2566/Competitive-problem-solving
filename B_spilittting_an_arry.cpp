#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll N=1e5+10;
const ll max_sum=1E14+11;
int n,arr[N],k;
bool ok(ll x){
    ll curr_seg_sum=0;
    int segmnts=1;
    for(int i=1;i<=n;i++){
        if(curr_seg_sum+arr[i]<=x){
            curr_seg_sum+=arr[i];
        }
        else{
            if(arr[i]>x){
                return false;
            }
            curr_seg_sum=arr[i];
            segmnts++;
        }
    }
    return segmnts<=k;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>k;
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    ll l =1,r=max_sum,ans=0;
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
    cout<<ans<<endl;
}