#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define n '\n'
#define sp " "
#define smp ' '
#define fast_tle  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N=5e5+5;
int arr[123];
double sum(int x){
    if(x==0){
        return 0;
    }
    return arr[x-1]+sum(x-1);
}



int main(){
   fast_tle;
    int x;
    cin>>x;

    for(int i=0;i<x;i++){
        cin>>arr[i];
    }
    cout<<setprecision(6)<<fixed;
    cout<<sum(x)/(double)x<<n;


  }
