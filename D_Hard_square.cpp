#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cin>>x;
    for(int line =1;line<=x;line++){
        for(int j=1;j<=x;j++){
            if(line==1 || line==x){
                cout<<"*"<<' ';
            }
            else if(j==1 || j==x){
              cout<<"*"<<' ';
            }
            else{
                cout << ' ' << ' ';
            }
        }
        cout<<'\n';
    }
}
