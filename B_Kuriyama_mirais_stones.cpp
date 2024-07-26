#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define end '\n'
#define sp " "
#define fast_tle  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N=5e5+5;
ll arr[N],b[N];
int main(){
   fast_tle;
   ll n,q,step,l,r;
   cin>>n;
   for(int i=1;i<=n;i++){
    cin>>arr[i];
    b[i]=arr[i];
    arr[i]+=arr[i-1];
   }
   sort(b+1,b+n+1);
   for(int i=1;i<=n;i++){
    b[i]+=b[i-1];
   }

   cin>>q;
   while(q--){
    cin>>step>>l>>r;
    if(step==1){
        cout<<arr[r]-arr[l-1]<<end;
    }
    else{
    cout<<b[r]-b[l-1]<<end;
    }
   }

  }
