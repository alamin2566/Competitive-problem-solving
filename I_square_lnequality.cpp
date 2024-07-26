#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,y,z;
    cin>>x>>y>>z;
    int sum=pow(x,2)+pow(y,2);
    
    int noob=pow(z,2);
    if(sum<noob){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
}