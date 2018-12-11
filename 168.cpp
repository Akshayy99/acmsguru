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
const int N=(int)1e3+5;
const int mod = 1000000007;
typedef long long ll;
//vector<int>::iterator itr=lower_bound(v.begin(),v.end(),x);
int a[N][N];
int main(){
    int n, m;sc(n);sc(m);
    for (int i=1;i<=n;i++)
        for (int j=1;j<=m;j++) sc(a[i][j]);
    for (int j=m;j;j--){
        for (int i=n;i;i--){
            int mn=a[i][j];
            if (j<m)
                if (i>1) mn=min(mn, a[i-1][j+1]);
                else mn=min(mn, a[i][j+1]);
            if (i<n)
                mn=min(mn, a[i+1][j]);
            a[i][j]=mn;
        }
    }
    for (int i=1;i<=n;i++){
        for (int j=1;j<=m;j++) pr(a[i][j]);n_l;
    }
    return 0;
}

