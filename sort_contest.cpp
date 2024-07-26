#include<bits/stdc++.h>
using namespace std;
int main(){
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int t;
   cin>>t;
   while(t--){
      int n,k,q,conss=0,sum=0,conse=0;
      cin>>n>>k>>q;
      vector<int>arr(n);
      for(int i=0;i<n;i++){
         cin>>arr[i];
          if(arr[i]<=q){
            conss++;
          }
          if(i=n-1 or arr[i+1]>q){
             if(conss>=k){
                conse=(conss-k+1);
                sum=(conse*(conse+1))/2;
             }
          }
      }
      cout<<sum<<endl;
   }
}