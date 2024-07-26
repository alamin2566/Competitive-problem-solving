#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,l,r,x;
    cin>>n>>l>>r>>x;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ways=0;
    for(int mask=0;mask<(1<<n);mask++){
        int total_dffcult=0,mn_dffcul=1e9,mx_dffcult=0,prblm_cnt=0;
        for(int i=0;i<n;i++){
            if((mask>>i)&1){
                total_dffcult+=arr[i];
                mn_dffcul=min(mn_dffcul,arr[i]);
                mx_dffcult=max(mx_dffcult,arr[i]);
                prblm_cnt++;
            }

        }

        if(total_dffcult>=l && total_dffcult<=r
        && mx_dffcult-mn_dffcul>=x && prblm_cnt>=2){
            ways++;
        }
    }
    cout<<ways<<endl;
}