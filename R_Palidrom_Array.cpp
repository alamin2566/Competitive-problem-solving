#include <bits/stdc++.h>
using namespace std;
void check_palindrome(int arr[], int size){
   int flag = 0;
   int arr_2[size];
   memcpy(arr_2, arr, size * sizeof(int));
   reverse(arr, arr + size);
   for (int i = 0; i < size; i++)
      if (arr[i] != arr_2[i]){
         flag = 1;
         break;
      }
      if (flag == 0)
         cout << "YES";
      else
         cout << "NO";
}
int main(){
   int x;
   cin>>x;
   int arr[x];
   for(int i=0;i<x;i++){
    cin>>arr[i];
   }
   check_palindrome(arr, x);
   return 0;
}
