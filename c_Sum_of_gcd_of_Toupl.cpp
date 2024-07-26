#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define end '\n'
#define sp " "
#define fast_tle  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N=5e5+5;

int main(){
   fast_tle;
   int x,sum=0;
   cin>>x;
   for(int i=1;i<=x;i++){

    for(int j=1;j<=x;j++){

        for(int k=1;k<=x;k++){

            sum+=__gcd(i,__gcd(j,k));
        }
    }
   }
   cout<<sum<<end;
  }
