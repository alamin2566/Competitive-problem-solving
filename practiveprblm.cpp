#include<bits/stdc++.h>
using namespace std;
void rev(int i,int x,int *arr){
     if(i<x){
        rev(i+1,x,arr);
        cout<<arr[i]<<'\n';
     }
}

int main(){
 int x,i;
 cin>>x;
  int arr[x];
   for(int i=0;i<x;i++){
     cin>>arr[i];
     rev(0,x,arr);
     cout<<'\n';
   }

}
