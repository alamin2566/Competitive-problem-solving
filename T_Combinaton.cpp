#include <bits/stdc++.h>
using namespace std;
int C(int n, int r)
{
    if(r > n)
        return 0;
    if(r==0 || n==r)
        return 1;
    return C(n-1, r-1)+C(n-1, r);
}
int main()
{
    int n, r;
    cin >> n >> r;
    cout << C(n, r) << '\n';
    return 0;
}
