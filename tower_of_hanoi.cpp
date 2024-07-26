#include<bits/stdc++.h>
using namespace std;
int a,b,moved;
void solved(int disks,char A,char C,char B){
    if(disks==0) return ;
    solved(disks-1,A,B,C);
    moved++;
   if(moved==b){
      cout << disks << " : " << A << " => " << C<< '\n';
  }
  solved(disks - 1, B, C, A);
   }
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t_case;
    cin>>t_case;
    while(t_case--){
        cin>>a>>b;
        moved=0;
      solved(a, 'A', 'C', 'B');
    }
}