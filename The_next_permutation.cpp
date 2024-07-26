#include<bits/stdc++.h>
using namespace std;
const int N=88;
char s[N];
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int dataset_number;
        cin>>dataset_number>>s;
        int n=strlen(s);
        bool exists=next_permutation(s,s+n);
        if(exists){
            cout << dataset_number << ' ' << s << '\n';
        }
        else{
             cout << dataset_number << ' ' << "BIGGEST" << '\n';
        }

    }
}