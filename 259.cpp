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
pair<int, int> pp[N];
int a[N];
int main(){
    int n;sc(n);
    for (int i=1;i<=n;i++) sc(a[i]);
    for (int i=1;i<=n;i++){
        int x;sc(x);
        pp[i].fi=x;
        pp[i].se=a[i];
    }
    sort(pp+1, pp+n+1);
    int ans=0, tot=0;
    for (int i=n;i;i--){
        tot+=pp[i].se;
        ans=max(ans, tot+pp[i].fi);
    }
    pr(ans);n_l;
    return 0;
}

