#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define n '\n'
#define sp " "
#define fast_tle  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N=5e5+5;

int main(){
   fast_tle;
   int t;
   cin>>t;
   for(int i=0;i<t;i++){
    string s;
    cin>>s;
    int f=1;
    for(int j=0;j<s.size();j++){
        if(s[i]!='a'){
            f=0;
            break;
        }
    }
    if(f==1){
        cout<<"NO"<<n;
    }
    else{
        cout<<"YES"<<n;
        string s1=s+'a';
        string s1rev=s1;
        reverse(s1rev.begin(),s1rev.end());
        if(s1==s1rev){
            cout<<'a'+s<<n;
        }
        else{
            cout<<s+'a'<<n;
        }
    }
   }
  }
