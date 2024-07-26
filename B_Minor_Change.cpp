#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define end '\n'
#define sp " "
#define fast_tle  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N=5e5+5;

int main(){
   fast_tle;
    int cnt=0;
    string s1,s2;
    cin>>s1>>s2;

    for(int i=0;i<s1.size();i++){
        if(s1[i]!=s2[i]){
        cnt++;
    }


    }
       cout<<cnt;

}
