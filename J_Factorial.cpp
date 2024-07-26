#include<bits/stdc++.h>

using namespace std;
#define ll long long

#define sp " "
#define smp ' '
#define fast_tle  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N=5e5+5;
ll f(int n){
    if(n==1){
        return 1;
    }
    return n*f(n-1);



}

int main(){
   fast_tle;
   int x;
   cin>>x;
   cout<<f(x)<<"\n";

  }
