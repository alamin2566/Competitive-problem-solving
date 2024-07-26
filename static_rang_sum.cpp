#include<bits/stdc++.h>
using namespace std;
const int N=5e5+5;
long long arr[N],pref[N];
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int x,q;
    cin>>x>>q;
  
    for(int i=0;i<x;i++){
        cin>>arr[i];
        
    }
      pref[0]=0;
    for(int i=1;i<=x;i++){
        pref[i]=pref[i-1]+arr[i-1];
    }
   
   
    while(q--){
        int l,r;
        cin>>l>>r;
  
       cout<<pref[r]-pref[l]<<'\n';
    }
}