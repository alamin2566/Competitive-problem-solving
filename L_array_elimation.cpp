#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    int test;
    cin>>test;
    while(test--){
        int n;
        cin>>n;
        vector<int>cnt(30,0);
        for(int i=1;i<=n;i++){
            int x;
            cin>>x;
            for(int b=0;b<30;b++){
                if((x>>b)&1){
                    cnt[b]++;
                }
            }
        }
        for(int k=1;k<=n;k++){
            bool good=true;
            for(int b=0;b<30;b++){
                if(cnt[b]%k!=0){
                    good=false;
                    break;
                }
            }
            if(good){
                cout<<k<<' ';
            }
        }
        cout<<endl;
    }
}