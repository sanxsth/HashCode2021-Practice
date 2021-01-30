#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mp make_pair
#define pb push_back

int main() {
    int m, t2, t3, t4;

    cin>>m>>t2>>t3>>t4;

    vector <vector<string>> pizzas;

    for(int i = 0; i < m; i++) {

        int ingredient_cnt; 
        cin>>ingredient_cnt;

        vector<string> p;

        for(int j=0; j < ingredient_cnt; j++) {
            string s; cin>>s;
            p.pb(s);
        }
        
        pizzas.pb(p);
    }
    
    vector <pair<int,vector<int>>> ans;

    int pizzas_used = 0;

    while(1) {
        
        for(int i = 0; i < t2; i++) {

            if(m - pizzas_used < 2 ) break;

            vector<int> pizzas_delivered = {pizzas_used, pizzas_used + 1 };
            ans.pb( mp(2, pizzas_delivered));
           
           pizzas_used += 2;
        }

        for(int i = 0; i < t3; i++) {

            if(m - pizzas_used < 3 ) break;

            vector<int> pizzas_delivered = {pizzas_used, pizzas_used + 1, pizzas_used + 2 };
            ans.pb( mp(3, pizzas_delivered));
           
           pizzas_used += 3;
        }

        for(int i = 0; i < t4; i++) {

            if(m - pizzas_used < 4 ) break;

            vector<int> pizzas_delivered = {pizzas_used, pizzas_used + 1, pizzas_used + 2, pizzas_used + 3 };
            ans.pb( mp(4, pizzas_delivered));
           
           pizzas_used += 4;
        }
        
        break;     
    }

    cout<<ans.size()<<"\n";

    for(auto x : ans) {

        cout<<x.first<<" ";

        for(auto y : x.second) {
        
            cout<<y<<" ";
        }
        cout<<"\n";
    }

    return 0;
}
