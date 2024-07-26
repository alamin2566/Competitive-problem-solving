#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define n '\n'
#define sp " "
#define fast_tle  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N=5e5+5;

int main(){
   fast_tle;
   int x;
   cin>>x;
   int arr[x+1];
   for(int i=0;i<x;i++){
    cin>>arr[i];

   }
   for(int i=x;i>=0;i--){
    if(i%2==1){
        cout<<arr[i]<<sp;
    }
    cout<<n;
   }
  }
