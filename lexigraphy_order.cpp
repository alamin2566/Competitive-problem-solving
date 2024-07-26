#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t_case;
    cin>>t_case;
    while(t_case--){
        string l_order;
        cin>>l_order;
        string x,y;
        cin>>x>>y;
        int n=x.size();
        bool alrdy_decide=false;
        for(int i=0;i<n;i++){
            if(x[i]!=y[i]){
                int pos_of_xi=0;
                for(int j=0;j < l_order.size();j++){
                     if(l_order[j]==x[i]){
                         pos_of_xi=j;
                         break;
                     }
                }
                int pos_of_yi=0;
                for(int j=0;j<l_order.size();j++){
                     if(l_order[j]==y[i]){
                         pos_of_yi=j;
                         break;
                     }
            }
            if(pos_of_xi<pos_of_yi){
                    cout <<"<"<<"\n";
            }
            else{
                cout<<">"<<"\n";
            }
            alrdy_decide=true;
            break;
        }
    }
    if(!alrdy_decide){
        cout<<"="<<"\n";
    }
    }
}