#include<bits/stdc++.h>
 
using namespace std;
#define ll long long
 
#define sp " "
#define smp ' '
#define fast_tle  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N=5e5+5;
 
 
bool comp(pair<int, int> a, pair<int, int> b){
    if(a.first == b.first) return (a.second > b.second);
    return (a.first < b.first);
}
void solve(){
    int n;
    scanf("%d", &n);
    pair<int, int> p[n+3];
    for (int i = 1; i <= n; i++){
        scanf("%d %d", &p[i].first, &p[i].second);
    }
    sort(p + 1, p + n + 1, comp);
    for (int i = 1; i <= n; i++){
        printf("%d %d\n", p[i].first, p[i].second);
    }
}
int main(){
    fast_tle;
    int tt;
    scanf("%d", &tt);
    while(tt--){
        solve();
    }
    return 0;
}
 