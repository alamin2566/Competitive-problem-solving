#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        int sum;
        for(int i=0;i<n;i++){
            cin>>arr[i];
             
        }
        sum=arr[0];
        for(int i=1;i<n;i++){
            sum=sum&arr[i];
        }
        cout<<sum<<endl;
    }
}