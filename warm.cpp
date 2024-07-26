#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
int arr[N],prefex[N];
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>arr[i];
        prefex[i]=prefex[i-1]+arr[i];
       
        
    }
     int query;
        cin>>query;
        while(query--){
            int kth;
            cin>>kth;
            cout<<(lower_bound(prefex+1,prefex+n+1,kth)-prefex)<<'\n';
        }
}