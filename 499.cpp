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
int fact[N], a[N];
int main(){
    int n;sc(n);
    int mx=0;
    for (int i=1;i<=n;i++){
        sc(a[i]);
        mx=max(a[i], mx);
    }
    for (int i=1;i<=n;i++){
        int sqr= sqrt(a[i]);
        for (int j=1;j<=sqr;j++){
            if (a[i]%j==0){
                fact[j]++;
                if (j*j != a[i]) fact[a[i]/j]++;
            }
        }
    }
    for (int i=mx;i;i--){
        if (fact[i]>1){
            pr(i);n_l;
            break;
        }
    }
    return 0;
}

