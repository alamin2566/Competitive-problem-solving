#include<bits/stdc++.h>
using namespace std;
int main(){

    int a,b,c,d;
    cin>>a>>b;
      vector<int>x,y;
    for(int i=0;i<a;i++){
       cin>>c;
       x.push_back(c);
    }

    for(int i=0;i<b;i++){
        cin>>d;


  auto it=lower_bound(x.begin(),x.end(),d);
   
    if((it-x.begin())!=d){
        cout<<it-x.begin()+1<<endl;
    }
    else{
        cout<<it-x.begin()<<endl;
    }

    }
}
