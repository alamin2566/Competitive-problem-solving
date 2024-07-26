#include<bits/stdc++.h>
using namespace std;
bool is_ok(int n){
    int sum_of_digits=0;
    while(n>0){
        sum_of_digits+=n%10;
        n/=10;
        
    }
    
    return sum_of_digits==10;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int kth;
   cin>>kth;
    int cnt=0;
   
    for(int i=1;i<=20000000;i++){
        
        if(is_ok(i)){
            cnt++;
            /*if(cnt==kth){
                //cout<<i<<'\n';
                return 0;
            }*/
        
        }
        
    }
         cout<<cnt;
     
    return 0;
}