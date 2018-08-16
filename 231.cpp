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
int isprime[N];
int main(){
    isprime[0]=1;
    isprime[1]=1;
    for (int i=1;i<N;i++){
        if (!isprime[i])
            for (int j=i+i;j<N;j+=i)
                isprime[j]=1;
    }
    int n;sc(n);
    int ans=0;
    for (int i=3;i+2<=n;i++){
        if (!isprime[i] && !isprime[i+2]){
            ans++;
        }
    }
    pr(ans);n_l;
    if (ans)
    for (int i=3;i+2<=n;i++){
        if (!isprime[i] && !isprime[i+2]){
            pr(2);pr(i);n_l;
        }
    }
    return 0;
}

