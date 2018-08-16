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
VI v[10];
int main(){
    int k, n;
    sc(k);sc(n);
    for (int i=1;i<=n;i++){
        int x; sc(x);
        v[x/1000].pb(x);
    }
    int ans=2;
    for (int i=0;i<10;i++) ans+=(int(v[i].size())+(k-1))/k;
    pr(ans);n_l;
    return 0;
}

