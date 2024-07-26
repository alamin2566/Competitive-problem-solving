#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    int arr[n+1];
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    int swaaps=0;
    for(int j=1;j<=n-1;j++){
        for(int i=1;i<n;i++){
            if(arr[i]>arr[i+1]){
                swap(arr[i],arr[i+1]);
                swaaps++;
            }
        }
    }
 cout << "Array is sorted in " << swaaps << " swaps.\n";
  cout << "First Element: " << arr[1] << '\n';
  cout << "Last Element: " << arr[n] << '\n';
  return 0;
}