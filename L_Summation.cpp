#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define fast_tle  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N=5e5+5;
ll arr[1001];
ll f_sum(int n){
    if(n==0)return 0;
    return arr[n-1]+f_sum(n-1);
}


int main(){
   fast_tle;
   int x;
   cin>>x;
   for(int i=0;i<x;i++)
    cin>>arr[i];
    cout<<f_sum(x);

  }
