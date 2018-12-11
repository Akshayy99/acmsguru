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
#define bomb pair<int, pair<int, int> >
using namespace std;
const int N=(int)1e6+5;
const int mod = 1000000007;
typedef long long ll;
//vector<int>::iterator itr=lower_bound(v.begin(),v.end(),x);
bomb p[N];
int tail[N], pre[N];
int lb(int hi, int val){
    int lo=1;
    while(hi>lo){
        int mid=(lo+hi)/2;
        if (p[tail[mid]].se.fi < val){
            lo=mid+1;
        }
        else hi=mid;
    }
    return lo;
}
bool cmp(bomb a, bomb b){
    if (a.fi == b.fi)
        return a.se.fi>b.se.fi;
    return a.fi< b.fi;
}
int main(){
    int n;sc(n);
    for (int i=1;i<=n;i++){
        sc(p[i].fi);sc(p[i].se.fi);
        p[i].se.se=i;
    }
    sort(p+1, p+n+1, cmp);
    //for (int i=1;i<=n;i++){
    //    pr(p[i].fi);pr(p[i].se.fi);pr(p[i].se.se);n_l;
    //}
    int ans=1;
    tail[1]=1;
    pre[1]=-1;
    int lst=1;
    for (int i=2;i<=n;i++){
        if (p[i].se.fi < p[tail[1]].se.fi){
            tail[1]=i;
        }
        else if(p[i].se.fi>p[tail[ans]].se.fi){
            pre[i]=tail[ans];
            tail[++ans] = i;
        }
        else{
            int pos=lb(ans, p[i].se.fi);
            pre[i]=tail[pos-1];
            tail[pos]=i;
        }
        lst=p[i].fi;
    }
    cout<<ans<<endl;
    for (int i=tail[ans];i>0;i=pre[i])
        pr(p[i].se.se);n_l;

    return 0;
}
