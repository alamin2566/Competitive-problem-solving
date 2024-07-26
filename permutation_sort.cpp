#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define n '\n'
#define sp " "
#define smp ' '
#define fast_tle  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N=5e5+5;

int main(){
   fast_tle;
   int t;
   cin>>t;
   while(t--){
    int a,cnt=0;
     cin>>a;
     int arr[a];
     for( int i=1;i<=a;i++){
        cin>>arr[i];
        if(arr[i]!=i)
            cnt++;
     }
     
     if(cnt==0){
        cout<<0<<n;
     }
     else if(arr[1]==1||arr[n]==n){
            cout<<1<<n;
        }
        else if(arr[n]==1 ||arr[1]==n){
            cout<<3<<n;
        }
        else{
            cout<<2<<n;
        }

        }
   }


