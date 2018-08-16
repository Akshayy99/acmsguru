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
pair<int, int> p[N];
set<int> s;
int main(){
    int n;sc(n);
    for (int i=1;i<=n;i++){
        sc(p[i].fi);sc(p[i].se);
    }
    sort(p+1, p+n+1);
    int ans=1;
    s.insert(p[1].se);
    int lst=p[1].fi;
    for(int i=2;i<=n;i++){
        if (p[i].fi == lst) continue;
        int x=p[i].se;
        if (s.find(x)!=s.end()) continue;
        lst=p[i].fi;
        if (x>*s.end()) s.insert(x);
        else {
            s.erase(s.lower_bound(x));
            s.insert(x);
        }
        ans=max(ans, int(s.size()));
    }
        pr(ans);n_l;
    return 0;
}

