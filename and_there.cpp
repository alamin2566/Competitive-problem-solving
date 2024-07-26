#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int msb=0;
        for(int i=30;i>=0;i--){
            if((n>>i)&1){
                msb=i;
                break;
            }
        }
        cout<<(1<<msb)-1<<endl;
    }
}