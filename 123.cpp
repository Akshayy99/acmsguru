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
ll a[100];
int main(){
    a[1]=1;a[2]=1;
    int n;sc(n);
    ll tot=2;
    if (n<2) tot=1;
    for (int i=3;i<=n;i++){
        a[i]=a[i-1]+a[i-2];
        tot+=a[i];
    }
    lpr(tot);n_l;

    return 0;
}

