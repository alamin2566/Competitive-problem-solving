#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        int sum=2*(x-y-1)+2;
        cout<<sum<<endl;
        for(int i=x;i>=y;i--){
            cout<<i<<" ";
        }
        for(int i=y+1;i<x;i++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}