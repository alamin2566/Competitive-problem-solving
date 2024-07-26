#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define end '\n'
#define sp " "
#define fast_tle  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N=5e5+5;

int main(){
   fast_tle;
   int t,x,cnt=0;
   cin>>t>>x;
 while(t--){
        int a;
     cin>>a;
     if(a%x==0){
        cnt++;
     }

 }
  cout<<cnt<<end;

  }
