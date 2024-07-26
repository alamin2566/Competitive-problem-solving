#include<bits/stdc++.h>
using namespace std;

const int N = 1005, MAX_TIME = 1e7;

int n, required_balloons, t[N], z[N], y[N];
int balloons[N];
bool ok(int total_time) {
  long long total_balloons = 0;
  long long ballons_left = required_balloons;
  for (int i = 1; i <= n; i++) {
    int block_time = t[i] * z[i] + y[i];
    int count_blocks = total_time / block_time;

    long long current_balloons = 1LL * count_blocks * z[i];
    int partial_block_time = total_time % block_time;
    current_balloons += min(z[i], partial_block_time / t[i]);

    total_balloons += current_balloons;

    balloons[i] = min(ballons_left, current_balloons);
    ballons_left -= balloons[i];
  }
  return total_balloons >= required_balloons;
}
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cin >> required_balloons >> n;
  for (int i = 1; i <= n; i++) {
    cin >> t[i] >> z[i] >> y[i];
  }
  int l = 0, r = MAX_TIME, ans = 0;
  while (l <= r) {
    int mid = (l + r) / 2;
    if (ok(mid)) {
      ans = mid;
      r = mid - 1;
    }
    else {
      l = mid + 1;
    }
  }
  ok(ans);
  cout << ans << '\n';
  for (int i = 1; i <= n; i++) {
    cout << balloons[i] << ' ';
  }
  cout << '\n';
  return 0;
}