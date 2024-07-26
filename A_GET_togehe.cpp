#include<bits/stdc++.h>
using namespace std;
const int N=1e5+9;
const double Max_t=1e9;
int n,curr_pos[N],s[N];
double seg_left[N],seg_right[N];
bool fine(double T){
    for(int i=1;i<=n;i++){
        seg_left[i]=curr_pos[i]-T*s[i];
        seg_right[i]=curr_pos[i]+T*s[i];

    }
    double seg_left_mx=-1e49;
    for(int i=1;i<=n;i++){
        seg_left_mx=max(seg_left_mx,seg_left[i]);
    }
     double seg_right_Mn=1e49;
    for(int i=1;i<=n;i++){
        seg_right_Mn=min(seg_right_Mn,seg_right[i]);
    }
    return seg_left_mx<=seg_right_Mn;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>curr_pos[i]>>s[i];
    }
    double l=0,r=Max_t,ans=0;
    int it=100;
    while(it--){
        double mid=(l+r)/2;
        if(fine(mid)){
            ans=mid;
            r=mid;
        }
        else{
            l=mid;
        }

    }
    cout<<fixed<<setprecision(10)<<ans<<'\n';
    return 0;

}
