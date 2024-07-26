#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,y,z;
    cin>>x>>y>>z;
   for(int i=0;i<=5000;i++){
    for(int j=0;j<=5000;j++){
        if(i*x+j*y==z){
            cout<<"YES"<<'\n';
            //return 0;
        }
    }
   }
   cout<<"NO"<<'\n';
   return 0;

}
