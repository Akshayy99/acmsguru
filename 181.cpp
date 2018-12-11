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
ll x[N];
int main(){
    ll a, b, g, m, k;
    lsc(x[0]);lsc(a);lsc(b);lsc(g);lsc(m);lsc(k);
    if (k==0) {
        lpr(x[0]); n_l;
        return 0;
    }
    ll st=mod, en=mod;
    for (int i=1;i<1000;i++){ // max 1000 different numbers are possible as the mod is max 1000
        x[i]=(a*x[i-1]*x[i-1] + b*x[i-1] + g)%m;
        for (int j=0; j<i;j++) 
            if (x[i] == x[j]){
                st=j;
                en=i;
                break;
            }
    }
    lpr(en==st?x[k]:x[st+(k-st)%(en-st)]);n_l;
    return 0;
}

