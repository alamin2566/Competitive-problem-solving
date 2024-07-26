 #include<bits/stdc++.h>
 using namespace std;
 const int N=2e5+9;
 int n;
 string t,p;
 int arr[N];
 bool is_subsequence(string s,string p){
    int n=s.size();
    int i=0;
    for(char c:p){
        while(i<n && s[i]!=c){
            i++;
        }
        if(i>=n){
            return false;
        }
        i++;
    }
    return true;
 }
 bool ok(int id){
    cout<<id<<endl;
    vector<bool>alv(n,true);
    for(int i=1;i<=id;i++){
        alv[arr[i]]=false;
    }
    string s="";

    for(int i=0;i<n;i++){
        if(alv[i]){
            s.push_back(t[i]);
        }
    }
    return is_subsequence(s,p);
 }
 int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>t>>p;
    n=t.size();
    for(int i=1;i<=n;i++){
        cin>>arr[i];
        arr[i]--;
    }
    int l=1,r=n,ans=0;
    while(l<=r){
        int mid=(l+r)/2;
    if(ok(mid)){
        ans=mid;
        l=mid+1;
    }
    else{
        r=mid-1;
    }
    }
      cout << ans << '\n';
    return 0;
 }