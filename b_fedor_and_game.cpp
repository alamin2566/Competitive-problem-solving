#include<bits/stdc++.h>
using namespace std;
int n,m,k;
bool good_friend(int a,int b){
    int diff_cnt=0;
    for(int i=0;i<n;i++){
        int a_bit=(a>>i)&1;
        int b_bit=(b>>i)&1;
        if(a_bit!=b_bit){
            diff_cnt++;
        }
    }
    return diff_cnt<=k;

}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>m>>k;
    int arr[m+2];
    for(int i=1;i<=m+1;i++){
        cin>>arr[i];
    }
    int bondu=0;
    for(int i=1;i<=m;i++){
        bondu+=good_friend(arr[i],arr[m+1]);
    }
    cout<<bondu<<endl;
}