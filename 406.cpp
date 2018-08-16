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
VI v[11], vv[11];
map<int,int> mp[11];
int ans[N];
int main(){
    int n,m;
    sc(n);sc(m);
    for (int i=1;i<=n;i++){
        int k;sc(k);
        v[i].pb(k);
        while(k--){
            int x;sc(x);
            v[i].pb(x);
            mp[i][x]++;
        }
    }
    for (int z=1;z<=m;z++){
        int k;sc(k);
        mset(ans, 0);
        for(int i=1;i<=k;i++){
            int x;sc(x);
            if (x>0){
                for (int j=1;j<=n;j++)
                    if (!mp[j][x]) ans[j]=1;
            }
            else{
                for (int j=1;j<=n;j++)
                    if (mp[j][-x]) ans[j]=1;
            }
        }
        for (int i=1;i<=n;i++)
            if (!ans[i]) vv[z].pb(i);
        pr(int(vv[z].size()));n_l;
        for(auto u:vv[z]){
            for (auto elem:v[u])
                pr(elem);n_l;
        }
    }
    return 0;
}

