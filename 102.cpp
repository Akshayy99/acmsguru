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
int isprime[N], val[N];
int main(){
    int n;sc(n);
    for (int i=2;i<=10000;i++){
        if (!isprime[i]){
            for (int j=i*i;j<=10000;j+=i) isprime[j]=1;
        }
    }
    for (int i=2;i<=n;i++){
        if (!isprime[i] && n%i==0)
            for (int j=i;j<=n;j+=i) val[j]=1;
    }
    int ans=n;
    for (int i=1;i<=n;i++) if(val[i]) ans--;
    pr(ans);n_l;
    return 0;
}

