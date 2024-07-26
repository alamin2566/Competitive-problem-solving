#include<bits/stdc++.h>
using namespace std;
const int MAX=100;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    vector<int>countt(MAX+1,0);
    for(int i=1;i<=n;i++){
        int x;
        cin>>x;
        countt[x]++;
    }
    for(int i=0;i<=MAX;i++){
        while(countt[i]>0){
            cout<<i<<' ';
            countt[i]--;
        }
    }
      cout << '\n';
  return 0;
}