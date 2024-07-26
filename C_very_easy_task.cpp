#include<bits/stdc++.h>
using namespace std;
const int MAX=2e9;
int x,y,required_copies;
bool ok(int t){
    if(x>y){
        swap(x,y);
    }
    long long copies=0;
    if(x<=t){
        copies=1;
        t-=x;
        copies+=t/x;
        copies+=t/y;
    }
    return copies>=required_copies;

}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>required_copies>>x>>y;
    int l=1,r=MAX,ans=0;
    while(l<=r){
        int mid=l+(r-l)/2;
        if(ok(mid)){
            ans=mid;
            r=mid-1;
        }
        else{
            l=mid+1;
        }
    }
    cout<<ans<<'\n';
}