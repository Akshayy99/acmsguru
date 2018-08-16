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
const int N=(int)1e4+5;
const int mod = 1000000007;
typedef long long ll;
//vector<int>::iterator itr=lower_bound(v.begin(),v.end(),x);
int mx, mxn;
vector<pair<int, int> > adj[N];
int h[N], ht[2][N];
void dfs0(int u, int p){
    for (auto v:adj[u]){
        if (v.fi!=p) {
            h[v.fi]=h[u]+v.se;
            if (h[v.fi]>mx){
                mx=h[v.fi];
                mxn=v.fi;
            }
            dfs0(v.fi, u);
        }
    }
}
void dfs(int u, int p, int flag){
    for (auto v:adj[u]){
        if (v.fi!=p) {
            ht[flag][v.fi]=ht[flag][u]+v.se;
            if (ht[flag][v.fi]>mx){
                mx=ht[flag][v.fi];
                mxn=v.fi;
            }
            dfs(v.fi, u, flag);
        }
    }
}
int main(){
    int n;sc(n);
    if (n==1){
        pr(0);n_l;
        return 0;
    }
    for(int i=2;i<=n;i++){
        int u, cost;
        sc(u);sc(cost);
        adj[u].pb(m_p(i, cost));
        adj[i].pb(m_p(u, cost));
    }
    dfs0(1,0);
    mx=0;
    dfs(mxn, 0, 0);
    mx=0;
    dfs(mxn, 0, 1);
    for(int i=1;i<=n;i++){
        pr(max(ht[0][i], ht[1][i]));n_l;
    }
    return 0;
}

