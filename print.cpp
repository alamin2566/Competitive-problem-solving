#include <bits/stdc++.h>
using namespace std;
#define ll long long
void print(int i, int n, int arr[]) {
	if(n%2!=0) {
		if(i==n+1)	return;
	}
	else {
		if(i==n)	return;
	}
	print(i+2, n, arr);
	printf("%d ", arr[i]);
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++)
    	scanf("%d", arr+i);
    print(0, n, arr);
    return 0;
}
