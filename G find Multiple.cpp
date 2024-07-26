#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int  main(){
    ll a,b,c;
    cin>>a>>b>>c;
    ll Y = b / c * c;
    if(a <= Y){
        cout<<Y<<endl;
    }else{
        cout<<-1<<endl;
    }
    return 0;
}
