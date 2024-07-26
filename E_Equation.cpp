#include<bits/stdc++.h>
using namespace std;
double f(double x){
    return x*x+sqrt(x);
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    double c;cin>>c;
    double l=0,r=1e5,ans=0;
    
    int it=100;
    while(it--){
        double mid=(l+r)/2;
        if(f(mid)>=c){
            ans=mid;
            r=mid;
        }
        else{
            l=mid;
        }
    }
    cout<<fixed<<setprecision(10)<<ans<<endl;
    return 0;
}