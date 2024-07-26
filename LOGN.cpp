#include<bits/stdc++.h>
using namespace std;
int f(long long n){
    if(n==0)return 0;
    return (log2(n));
}
int main() {
  long long result, N;
  cin >> N;

  cout<<f(N);
  return 0;
}
