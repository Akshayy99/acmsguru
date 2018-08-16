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
const int N=(int)5e4+5;
typedef long long ll;
const ll mod = ((ll)1<<31)-1;
//vector<int>::iterator itr=lower_bound(v.begin(),v.end(),x);
vector<int> *vec[N];
set<int> *st[N];
VI g[N];
int sz[N], val[N];
int cnt[N], ans[N];
set<int>::iterator it;
void getsz(int v, int p){
    if (g[v].size()==0) sz[v] = 1;  // every vertex has itself in its subtree
    for(auto u : g[v])
        if(u != p){
            getsz(u, v);
            sz[v] += sz[u]; // add size of child u to its parent(v)
        }
}
void dfs(int v, int p){
    int mx = -1, bigChild = -1;
    for(auto u : g[v])
        if (u!=p && sz[u]> mx)
            mx=sz[u], bigChild=u;
    for(auto u : g[v])
        if(u != p && u!=bigChild){
            dfs(u, v);
            ans[v]=min(ans[u], ans[v]);
        }
    if(bigChild != -1){
        dfs(bigChild, v);
        ans[v]=min(ans[v], ans[bigChild]);
        vec[v] = vec[bigChild];
        st[v] = st[bigChild];
    }
    else{
        vec[v] = new vector<int> ();
        st[v] = new set<int> ();
    }
    if (g[v].size()==0) {
        vec[v]->pb(v);
        st[v]->insert(val[v]);
    }
    for(auto u : g[v])
        if(u != p && u != bigChild){
            for(auto x : *vec[u]){
                vec[v]->pb(x);
                it=st[v]->lower_bound(val[x]);
                if(it!=st[v]->end())
                    ans[v]=min(ans[v],abs((*(it))-val[x]));
                if(it!=st[v]->begin()){
                    it--;
                    ans[v]=min(ans[v],abs((*(it))-val[x]));
                }
                st[v]->insert(val[x]);
            }
        }
}
int main(){
    int n;sc(n);
    int m;sc(m);
    for (int i=2;i<=n;i++){
        int v;sc(v);
        g[v].pb(i);
    }
    for (int i=1;i<=n;i++) ans[i]=mod;
    for (int i=n-m+1;i<=n;i++) sc(val[i]);
    getsz(1, 0);
    dfs(1, 0);
    for (int i=1;i<=n-m;i++) pr(ans[i]);n_l;
    return 0;
}

