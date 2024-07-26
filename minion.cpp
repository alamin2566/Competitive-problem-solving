#include<bits/stdc++.h>
using namespace std;

const int N=1e5+9;
int n,hour,arr[N];
bool ok(int k){
    long long time=0;
    for(int i=1;i<=n;i++){
        //time+=(arr[i]+k-1)/k;
        time +=ceil((double)arr[i]/k);
    }
    return time<=hour;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int test;
    cin>>test;
    while(test--){
        cin>>n>>hour;
        for(int i=1;i<=n;i++){
            cin>>arr[i];
        }
        int l=1,r=1e9,answer=0;
        while(l<=r){
            int mid=(l+r)/2;
            if(ok(mid)){
                answer=mid;
                r=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        cout<<answer<<'\n';
    }
    return 0;
}