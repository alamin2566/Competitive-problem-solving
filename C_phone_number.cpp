#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    set<char>ss;
    for(char d:s){
        ss.insert(d);
    }
    int smallest_char=*(ss.begin());
    if(k<=n){
        for(int i=k-1;i>=0;i--){
               auto it=ss.upper_bound(s[i]);
               if(it!=ss.end()){
                string ans;
                ans.resize(k);
                char nxt_largest_char=*it;
                ans[i]=nxt_largest_char;
                for(int j=0;j<i;j++){
                    ans[j]=s[j];
                }
                for(int j=i+1;j<k;j++){
                    ans[j]=smallest_char;
                }
                  cout << ans << '\n';
                  return 0;
               }
        }
    }
    else{
        string ans;
        ans.resize(k);
        for(int i=0;i<n;i++){
            ans[i]=s[i];
        }
        for(int i=n;i<k;i++){
            ans[i]=smallest_char;
        }
        
        cout << ans << '\n';

    }
}