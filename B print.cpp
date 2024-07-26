#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define end '\n'
#define fast_tle  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N=5e5+5;
void all(int n){
    if(n==1) {
            printf("%d",n);
    return ;
    }


    printf("%d ",n);

     return all(n-1);


}


int main(){
   fast_tle;
   int n;
   cin>>n;
   all(n);
     }
