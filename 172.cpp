#include<bits/stdc++.h>
#define lsc(x) scanf("%lld",&x)
#define sc(x) scanf("%d",&x)
#define lpr(x) printf("%lld ",x)
#define pr(x) printf("%d ",x)
#define n_l printf("\n")
#define VI vector<int>
#define VII vector<long long int>
#define m_p make_pair
#define pb push_back
#define fi first
#define se second
#define mset(x,y) memset(x,y,sizeof(x))
using namespace std;
const int N=(int)1e6+5;
const int mod = 1000000007;
typedef long long ll;
//vector<int>::iterator itr=lower_bound(v.begin(),v.end(),x);
int flag;
VI vec, adj[N];
int day[N];
void dfs(int u, int p){
    for (auto v:adj[u]){
        if (v!=p){
            if (day[v]!=-1){
                if (day[v]^day[u]==0) flag=1;
            }
            else{
                day[v]=day[u]^1;
                dfs(v, u);
            }
        }
    }
}
int main(){
    int n,m;
    sc(n);sc(m);
    for (int i=1;i<=m;i++){
        int u, v;
        sc(u);sc(v);
        adj[u].pb(v);
        adj[v].pb(u);
    }
    for (int i=1;i<=n;i++) day[i]=-1;
    for (int i=1;i<=n;i++){
        if (day[i]==-1){
            day[i]=1;
            dfs(i, i);
        }
        if (flag) {
            cout<<"no\n";
            return 0;
        }
    }
    cout<<"yes\n";
    int tot=0;
    for (int i=1;i<=n;i++)
        if (day[i]==1) tot++, vec.pb(i);
    pr(tot);n_l;
    for (auto u:vec) pr(u);n_l;

    return 0;
}

