#include<bits/stdc++.h>
#define ll long long
using namespace std;
int a[1001];

int maxNumber(int n) {
	if(n==1)	return a[0];
	return max(a[n-2], maxNumber(n-1));
}

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;
	for(int i = 0; i<n; i++)
		cin >> a[i];
	cout << maxNumber(n);

	return 0;
}
