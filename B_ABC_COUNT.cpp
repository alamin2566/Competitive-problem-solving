#include<iostream>
using namespace std;
int main(){
    string s;
    int n, cnt =0;
    cin >> n >> s;
    for(int i = 0; i + 2 < n; i++){
        if(s[i] == 'A' && s[i + 1] == 'B' && s[i + 2] == 'C') cnt++;
    }
    cout << cnt << '\n';
    return 0;
}
