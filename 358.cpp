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
int med(int a, int b, int c){
    if (a>b) swap(a, b);
    if (a>c) swap(a, c);
    if (b>c) return c;
    return b;
}
int main(){
    int a,b,c;
    int x,y,z;
    sc(x);sc(y);sc(z);
    a=med(x,y,z);
    sc(x);sc(y);sc(z);
    b=med(x,y,z);
    sc(x);sc(y);sc(z);
    c=med(x,y,z);
    pr(med(a,b,c));n_l;
    return 0;
}

