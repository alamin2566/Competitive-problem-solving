#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll a[100001];

ll sum(int n, int m) {
	if(m==0)		return 0;
	return			a[n-1] + sum(n-1, m-1);
}

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, m;
	cin >> n >> m;
	for(int i = 0; i < n; i++)
		cin >> a[i];
	cout << sum(n, m);


	return 0;
}


