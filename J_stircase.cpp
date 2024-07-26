#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int spce=n-i;
        for(int j=0;j<spce;j++){
        cout << " ";
        }
        int hases=i;
        for(int k=0;k<i;k++){
             cout << "#";
        }
      cout << '\n';  
    }
    return 0;
}