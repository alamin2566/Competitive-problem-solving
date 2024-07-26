#include<iostream>
using namespace std;
int main(){
    int n, mx = 0, g = 0, ans, a[103];
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
        mx = max(mx, a[i]);
    }
    for(int i = 2, cnt; i <= mx; i++){
        cnt = 0;
        for(int j = 1; j <= n; j++){
            cnt += (a[j] % i == 0);
        }
        if(cnt > g){
            g = cnt;
            ans = i;
        }
    }
    cout << ans << '\n';
    return 0;
}
