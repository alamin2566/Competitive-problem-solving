#include<bits/stdc++.h>
using namespace std;
void solved(int n){
    if(n==0)return ;
    solved(n-1);
     cout << char('A' + n - 1);
     solved(n-1);
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    solved(n);
}