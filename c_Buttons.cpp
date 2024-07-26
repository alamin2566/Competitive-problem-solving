#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,y,noob=0;
    cin>>x>>y;
    if(x>y){
        noob=x+(x-1);
        cout<<noob<<'\n';
    }
    else if(x<y){
        noob=y+(y-1);
        cout<<noob<<'\n';
    }
    else {
        cout<<x+y<<'\n';
    }
}