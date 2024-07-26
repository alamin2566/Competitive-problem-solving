#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define end '\n'
#define fast_tle  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N=5e5+5;
ll arr[N],pref[N];
int main(){
   fast_tle;
   int t,q;
   cin>>t>>q;
   for(int i=1;i<=t;i++){
    cin>>arr[i];
   }
   pref[0]=0;
   for(int i=1;i<=t;i++){
    pref[i]=pref[i-1]+arr[i];
   }
   while(q--){
     int l,r;
     cin>>l>>r;
     cout<<pref[r]-pref[l-1]<<end;
   }
  }
