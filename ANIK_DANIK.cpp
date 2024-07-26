#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cin>>x;
    string s;
    cin>>s;
   int noob=0,cnt=0;
   for(int i=0;i<s.size();i++){
   if(s[i]=='A'){
    noob++;
   }
   else if(s[i]=='D'){
    cnt++;
   }
   }
   if(noob>cnt){
    cout<<"Anton"<<'\n';
   }
   else if(noob<cnt){

         cout<<"Danik"<<'\n';
   }
   else if(noob==cnt){
    cout<<"Friendship"<<'\n';
   }
   

}