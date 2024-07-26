#include<bits/stdc++.h>
using namespace std;
const int N=1e6+9;
int f(int n){
    int product=1;
    while(n>0){
        int digit=n%10;
        if(digit!=0){
            product*=digit;
        }
        n/=10;
    }
    return product;
}
int g(int n){
    if(n<10)return n;
    return g(f(n));
}
int G[N];
vector<int>vect[10];
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    for(int i=1;i<N;i++){
        G[i]=g(i);
        vect[G[i]].push_back(i);
    }
    int query;
    cin>>query;
    while(query--){
        int l,r,k;
        cin>>l>>r>>k;
        int answer=0;
        answer=upper_bound(vect[k].begin(),vect[k].end(),r)-lower_bound(vect[k].begin(),vect[k].end(),l);
        cout<<answer<<'\n';
    }
}