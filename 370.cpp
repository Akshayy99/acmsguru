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
int cnt=0;
ll ans=0;
int isprime[N], prime[N];
void ff(int len, int flag, int n, int m){
    if (len>cnt || !(n/prime[len]) || !(m/prime[len])) return ;
    ff(len+1, flag, n, m);
    n/=prime[len], m/=prime[len];
    flag++;
    if (flag&01) ans-=(ll)n*(ll)m;
    else ans+=(ll)n*(ll)m;
    ff(len+1, flag, n, m);
}

int main(){
    int n, m;
    sc(n);sc(m);
    if (n+m==2){
        pr(0);n_l;
        return 0;
    }
    if (n==1) {
        pr(1);n_l;
        return 0;
    }
    if (m==1){
        pr(1);n_l;
        return 0;
    }
    for (ll i=2;i<=N-2;i++){
        if (!isprime[i]){
            for (ll j=i*i; j<=N-2;j+=i) isprime[j]=1;
            prime[cnt++]=i;
        }
    }
    m--,n--;
    ans=(ll)m*(ll)n+2;
    ff(0, 0, n, m);
    lpr(ans);n_l;
    return 0;
}

