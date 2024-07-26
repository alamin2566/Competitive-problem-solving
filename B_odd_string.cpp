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
   cin>>s;
   int n=s.size();
   string ans;
   for(int i=0;i<n;i+=2){
       ans+=s[i];
   }
   cout<<ans;
  }
