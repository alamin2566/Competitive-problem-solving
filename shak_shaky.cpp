#include<bits/stdc++.h>
using namespace std;

const int N=5e5+9;
int n,friends,arr[N];
bool ok(int k){
    long long count=0;
    for(int i=1;i<=n;i++){
       count +=arr[i]/k;
    }
    return count>=friends;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int test;
    cin>>test;
    while(test--){
        cin>>n>>friends;
        for(int i=1;i<=n;i++){
            cin>>arr[i];
        }
        int l=1,r=1e9,answer=0;
        while(l<=r){
            int mid=(l+r)/2;
            if(ok(mid)){
                answer=mid;
                l=mid+1;
            }
            else{
                r=mid-1;
            }
        }
        cout<<answer<<'\n';
    }
    return 0;
}