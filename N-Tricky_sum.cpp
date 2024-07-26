#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        ll sum=(ll)(n+1)*n/2;
        ll sum_of_pwr=0;
        for(int i=1;i<=n;i*=2){
            sum_of_pwr+=i;
        }
        ll p=sum-2*sum_of_pwr;
        cout<<p<<'\n';
    }
    return 0;
}