#include<bits/stdc++.h>
using namespace std;
int main(){
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int t;
   cin>>t;
   while(t--){
    int n;cin>>n;
    int total=0;
    for(int i=1;i<=n;i++){
        int a;
        cin>>a;
        total^=a;
    }
    if(n%2==0){
        if(total==0){
            cout<<0<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
    else{
        cout<<total<<endl;
    }
   }
}