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
int main(){
    string a,b;
    cin>>a>>b;
    int bull=0, cow=0;
    for (int i=1;i<=4;i++) {
        if (a[i-1] ==b[i-1]) bull++;
    }
    for (int i=0;i<=3;i++){
        for (int j=0;j<=3;j++)
            if (i==j) continue;
            else if(a[i]==b[j]) cow++;
    }
    pr(bull);pr(cow);n_l;
    return 0;
}

