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
map<int, int> mp;
int main(){
    int n, m, k;
    sc(n);sc(m);sc(k);
    ll cp=(ll)k;
    int flag=0;
    for (int i=2;i<=sqrt(k);i++){
        int cnt=0;
        while(cp%i==0){
            cp/=i;
            cnt++;
        }
        if (cnt){
            flag++;
            mp[i]=cnt;
        }
    }
    if (cp>1) mp[cp]=1, flag++;
    int ans=0;
    for (int i=1;i<=n;i++){
        int x;sc(x);
        int ff=0;
        for (int j=2;j<=sqrt(x);j++){
            int cnt=0;
            while(x%j==0){
                x/=j;
                cnt++;
            }
            if (cnt){
                if (mp[j] && (cnt*m)>=mp[j]) ff++;
            }
        }
        if (x>1 && mp[x] && mp[x]<=m) ff++;
        if (ff==flag) ans++;
    }
    pr(ans);n_l;
    return 0;
}

