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
    bool chek[100]={0};
   for(int i=0;i<s.size();i++){
         chek[s[i]-'a']=true;
   }
   for(int i=0;i<=25;i++){
       if(!chek[i]){
           cout<<char('a'+i)<<end;
           return 0;
       }

   }
   cout<<"None";
  }
