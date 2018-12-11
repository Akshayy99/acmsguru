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
VI v, v1, ass;
int isprime[N];
int calc[N], cnt[N];
int main(){
    isprime[0]=1;
    isprime[1]=1;
    v.pb(0);
    for (int i=2;i<=10000;i++){
        if (!isprime[i]){
            v.pb(i);
            for (int j=i*i;j<=10000;j+=i) isprime[j]=1;
        }
    }
    int sz=v.size();
    for (int i=1;v[i]<=sz;i++){
        v1.pb(v[v[i]]);
    }
    for (int i=1;i<=10000;i++) cnt[i]=100;
    for (auto u:v1) {
        calc[u]=u;
        cnt[u]=1;
    }
    reverse(v1.begin(), v1.end());
    calc[6]=3;
    cnt[6]=2;
    cnt[8]=2;
    calc[8]=3;
    for (int i=9;i<=10000;i++){
        if (calc[i]) continue;
        for (auto u:v1) {
            if (u>i) continue;
            if (calc[i-u] && cnt[i]>cnt[i-u]){
                calc[i]=i-u;
                cnt[i]=cnt[i-u]+1;
            }
        }
    }
    int n;sc(n);
    //    for (int i=1;i<=100;i++){
    //    int n=i;
    //        pr(i);
    //        cout<<": ";
    ass.clear();
    if (!calc[n]) {
        pr(0);n_l;
        //      continue;
        return 0;
    }
    while(n!=calc[n]){
        ass.pb(n-calc[n]);
        n=calc[n];
    }
    ass.pb(n);
    sort(ass.begin(), ass.end());
    reverse(ass.begin(), ass.end());
    cout<<ass.size()<<endl;
    for (auto u:ass) pr(u);n_l;

    return 0;
}
