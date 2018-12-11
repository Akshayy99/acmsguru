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
vector<pair<int, int> >v;
int main(){
    int b, g;
    sc(b);sc(g);
    int ff=0;
    int n;sc(n);
    int tot=g;
    while(n--){
        int x;sc(x);
        if (x==tot) {
            v.pb({0, 0});
        }
        else if (x>tot){
            int req=x-tot;
            if (req>b) {
                ff=1;
                break;
            }
            b-=req;
            v.pb({req, 0});
            tot+=req;
        }
        else{
            int ls = tot-x;
            if (ls>g){
                ff=1;
                break;
            }
            g-=ls;
            tot-=ls;
            v.pb({0, ls});
        }
    }
    if (ff==1){
        cout<<"ERROR\n";
    }
    else{
        for (auto u:v){
            pr(u.fi);pr(u.se);n_l;
        }
    }
    return 0;
}

