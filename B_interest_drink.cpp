#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    int arr[n+1];
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    sort(arr+1,arr+n+1);
    int query;
    cin>>query;
    while(query--){
        int x;
        cin>>x;
        cout<<(upper_bound(arr+1,arr+n+1,x)-arr)-1<< '\n';
    }
}