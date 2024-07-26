#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll a[1001];

int vowel(string s, int n) {
	if(n == 0)		return 0;
	if(s[n-1] == 'a' || s[n-1] == 'e' || s[n-1] == 'i' || s[n-1] == 'o' || s[n-1] == 'u' ||
		s[n-1] == 'A' || s[n-1] == 'E' || s[n-1] == 'I' || s[n-1] == 'O' || s[n-1] == 'U')
		return 1 + vowel(s, n-1);
	else	return vowel(s, n-1);
}

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	string s;
	getline(cin, s);
	int n = s.size();
	cout << vowel(s, n) << '\n';

	return 0;
}
