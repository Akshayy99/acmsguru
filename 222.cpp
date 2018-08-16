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
ll nCr(ll n, ll k){
    ll ret=1;
    for (ll i=n;i>n-k;i--) ret*=i;
    for (ll i=k;i>0;i--) ret/=i;
//    lpr(ret);n_l;
    return ret;
}
ll fact(ll n){
    ll ret=1;
    for (ll i=1;i<=n;i++) ret*=i;
  //  lpr(ret);n_l;
    return ret;
}

int main(){
    ll n,k;
    lsc(n);lsc(k);
    if (k>n) {
        pr(0);n_l;
        return 0;
    }
    ll ans=nCr(n, k)* nCr(n, k)*fact(k);
    lpr(ans);n_l;
    return 0;
}

