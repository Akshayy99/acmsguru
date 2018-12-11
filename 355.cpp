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
int col[N];
int main(){
    for (int i=2;i<=N;i++){
        for (int j=i+i;j<=N;j+=i)
            col[j]=max(col[j], col[i]+1);
    }
    int n, mx=0;sc(n);
    for (int i=1;i<=n;i++) mx=max(mx, i==1?col[i]+1:col[i]+2);
    pr(mx);n_l;
    for (int i=1;i<=n;i++)pr(i==1?col[i]+1:col[i]+2);n_l;
    return 0;
}

