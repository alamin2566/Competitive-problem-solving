#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=1;i<=n;i++){
            cin>>arr[i];
        }
        int red=0,blue=0;
        for(int i=1;i<=n;i++){
            if(arr[i]!=i){
                red+=arr[i];
                i--;
            }
            else{
                blue+=arr[i];
            }
        }
        cout<<red<<endl;
        cout<<blue<<endl;
    }
}