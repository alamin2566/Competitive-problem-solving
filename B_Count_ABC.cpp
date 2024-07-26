#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define end '\n'
#define sp " "
#define fast_tle  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N=5e5+5;

int main(){
   fast_tle;
   string s;
   int n,cnt=0;
   cin>>n>>s;
   for(int i=0;i+2<n;i++){
   if(s[i]=='A'&&s[i+1]=='B'&& s[i+2]=='C'){
    cnt++;
   }
   }
   cout<<cnt<<end;
  }
