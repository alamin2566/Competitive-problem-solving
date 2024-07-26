#include<bits/stdc++.h>
using namespace std;
const int N=210;
int arr[N],p_xor[N];
int findd_xor(int l,int r){
    return p_xor[r]-p_xor[l-1];
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int test;
    cin>>test;
    while(test--){
        int n;
        cin>>n;
        for(int i=1;i<=n;i++){
            cin>>arr[i];
        }
        p_xor[0]=0;
        for(int i=1;i<=n;i++){
            p_xor[i]=p_xor[i-1]^arr[i];
        }
        bool pailam=false;
        for(int i=1;i<n;i++){
            int a=findd_xor(1,i);
            int b=findd_xor(i+1,n);
            if(a==b){
                pailam=true;
            }
        }
        for(int i=1;i<=n;i++){
            for(int j=i+1;j<n;j++){
                int a=findd_xor(1,i);
                int b=findd_xor(i+1,j);
                int c=findd_xor(j+1,n);
              if(a==b and b==c){
                    pailam=true;
                }

            }
        }
        if(pailam){
             cout << "YES"<<endl;
        }
        else{
             cout << "NO"<<endl;
        }

    }
    return 0;
}