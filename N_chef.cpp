#include<bits/stdc++.h>
using namespace std;

const unsigned int max_value = (1u << 31);

bitset<max_value> working; 
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int q;
  unsigned int s, a, b;
  cin >> q >> s >> a >> b;
  set<unsigned int> se;
  long long sum = 0;
  while (q--) {
    if (s & 1) {
      unsigned int x = s / 2;
     
      if (!working[x]) {
      working[x] = true;
        sum += x;
      }
    }
    else {
      unsigned int x = s / 2;
     
      if (working[x]) {
       working[x] = false;
        sum -= x;
      }
    }
    s = a * s + b; 
  }

  
  cout << sum << '\n';
  return 0;
}