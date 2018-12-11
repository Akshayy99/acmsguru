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
ll dp[N];
int main(){
    int k;sc(k);
    dp[0]=1;
    for(int i=1;i<=k;i++)
        for(int j=0;j<i;j++)
            dp[i]+=dp[j]*dp[i-j-1];
    lpr(dp[k]);pr(k+1);n_l;
    return 0;
}
