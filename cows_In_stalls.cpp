#include<bits/stdc++.h>
using namespace std;

const int N=1e4+9;
int n,k,arr[N];
bool fine(int x){
    int cows=1;
    int pos_last_cow=arr[1];
    for(int i=2;i<=n;i++){
        if(arr[i]-pos_last_cow>=x){
            cows++;
            pos_last_cow=arr[i];
        }
    }
    return cows>=k;
}


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>k;
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
  int l =0,r=1e9,ans=0;
    while(l<=r){
      int mid=(l+r)/2;
        if(fine(mid)){
            ans=mid;
            l=mid+1;
        }
        else{
            r=mid-1;
        }
    }
    cout<<ans<<'\n';
}