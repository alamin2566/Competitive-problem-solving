#include<bits/stdc++.h>
using namespace std;
const int N=1e6+9;
int n,arr[N],exs[N];
void solved(int l,int r){
    if(l>=r)return;
    int mid=(l+r)/2;
    solved(l,mid);
    solved(mid+1,r);
    int left=l,rghtp=mid+1;
    for(int i=l;i<=r;i++){
        if(left>mid){
            exs[i]=arr[rghtp++];
        }
        else if(rghtp>r){
            exs[i]=arr[left++];
        }
        else if(arr[left]<=arr[rghtp]){
            exs[i]=arr[left++];
        }
        else{
            exs[i]=arr[rghtp++];
        }
    }
    for(int i=l;i<=r;i++){
        arr[i]=exs[i];
    }

}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int x;
    while(cin>>x){
    n++;
    arr[n]=x;
    }
    solved(1,n);
    for(int i=1;i<=n;i++){
        cout << arr[i] << ' ';
    }
     cout << '\n';
  return 0;
}