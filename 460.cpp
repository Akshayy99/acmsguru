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
    int n;sc(n);
    while(n--){
        string s;cin >>s;
        int len=s.length();
        if (s[len-1]=='f')
            s[len-1]='v', s+="es";
        else if (s[len-1]=='y')
            s[len-1]='i', s+="es";
        else if (s[len-2]=='f' && s[len-1]=='e')
            s[len-2]='v',s+="s";
        else if (
                s[len-1] == 'x' ||
                s[len-1] == 's' ||
                s[len-1] == 'o' ||
                (s[len-1] == 'h' && s[len-2] == 'c')
           )
            s+="es";
        else s+="s";
        cout<<s<<endl;
    }
    return 0;
}

