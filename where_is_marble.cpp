#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,query,cases_number=0;
    while(cin>>n>>query){
        if(n==0 and query==0){
            break;
        }
        cases_number++;
        cout << "CASE# " << cases_number<< ":\n";
        int arr[n+1];
        for(int i=1;i<=n;i++){
            cin>>arr[i];
        }
        sort(arr+1,arr+n+1);
        while(query--){
            int x;
            cin>>x;
           int  l=1,r=n,ans=-1;
           while(l<=r){
            int mid=(l+r)/2;
            if(arr[mid]==x){
                ans=mid;
                r=mid-1;
            }
            else if(arr[mid]<x){
                l=mid+1;
            }
            else{
                r=mid-1;
            }
        
           }
            cout << x << ' ';
            if(ans==-1){
                   cout << "not found"<<"\n";
            }
            else{
                 cout << "found at " << ans << '\n';
            }
           
        }
    }
    return 0;
}