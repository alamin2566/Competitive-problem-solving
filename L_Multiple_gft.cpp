#include<bits/stdc++.h>
using namespace std;
int main(){
  long long x,y;
 int ans=0;
    cin>>x>>y;
    while(x<=y)
    {
        ans++;
        x*=2;
    }
    cout<<ans<<endl;
}