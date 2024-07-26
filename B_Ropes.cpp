#include<bits/stdc++.h>
using namespace std;
const int N=1e4+9;
const double MAX_PIECE_LENGTH=1e7+9;
int n,required_pieces,ropes_length[N];
bool ok(double piece_length){
    int count_pieces=0;
    for(int i=1;i<=n;i++){
        count_pieces+=floor(ropes_length[i]/piece_length);
      if(count_pieces>=required_pieces){
        return true;
      }
      
    }
    return false;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>required_pieces;
    for(int i=1;i<=n;i++){
        cin>>ropes_length[i];
    }
    double l=0,r=MAX_PIECE_LENGTH,ans=0;
    int iterations=100;
    while(iterations--){
        double mid=(l+r)/2;
        if(ok(mid)){
            ans=mid;
            l=mid;
        }
        else{
            r=mid;
        }
    }
     cout << fixed << setprecision(10) << ans << '\n';
  return 0;
}
