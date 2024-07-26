#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    int cases_Number=0;
    while(test--){
        int n,query;
        cin>>n>>query;
        int arr[n+1];
       
            for(int i=1;i<=n;i++){
                cin>>arr[i];
            }
              cout << "Case " << ++cases_Number << ":\n";
              while(query--){
                int l,r;
                cin>>l>>r;
               int ans=upper_bound(arr+1,arr+n+1,r)-lower_bound(arr+1,arr+n+1,l);
                cout<<ans<<endl;
              }
        
    }
}