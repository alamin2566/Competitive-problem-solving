#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int bits_mask=0;bits_mask<(1<<n);bits_mask++){
        int rotations=0;
        for(int i=0;i<n;i++){
            if(bits_mask>>i&1){
                rotations+=arr[i];
            }
            else{
                rotations-=arr[i];
            }
            rotations%=360;
            rotations=(rotations+360)%360;
        }
        if(rotations==0){
            cout << "YES"<<endl;;
      return 0;
        }
    }
     cout << "NO"<<endl;
      return 0;
}