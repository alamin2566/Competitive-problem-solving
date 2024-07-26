#include<bits/stdc++.h>
using namespace std;
int cnt(int total,int n){
    return total-total/n;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int total,k;
        cin>>total>>k;
        int l=1,r=2e9,ans;
        while(l<=r){
            int mid=l+(r-l)/2;
            if(cnt(mid,total)>=k){
                ans=mid;
                r=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        cout<<ans<<endl;
    }
}