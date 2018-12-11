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
const int N=(int)7;
const int mod = 1000000007;
typedef long long ll;
//vector<int>::iterator itr=lower_bound(v.begin(),v.end(),x);
int n;
int degree[N]={0};
int ans[101];
int cnt=0;
int p[N][N]={0};
int til[100][2];

void wr(){
    for(int i=1;i<cnt;++i){
        int u=ans[i-1];
        int v=ans[i];
        for(int j=0;j<n;++j){
            if(u==til[j][0] && v==til[j][1]){
                til[j][0]=til[j][1]=N;
                printf("%d +",1+j);
                break;
            }
            if(v==til[j][0] && u==til[j][1]){
                til[j][0]=til[j][1]=N;
                printf("%d -",1+j);
                break;
            }
        }
        n_l;
    }
}

void travel(int s){
    if(degree[s]>0)
        for(int i=0;i<N;++i)
            while(p[s][i]>0){
                degree[s]--;degree[i]--;
                p[s][i]--;p[i][s]--;
                travel(i);
            }
    ans[cnt++]=s;
}

int main(){
    scanf("%d",&n);
    for(int i=0;i<n;++i){
        int u, v;
        sc(u);sc(v);
        til[i][0]=u;
        til[i][1]=v;
        p[u][v]++;
        p[v][u]++;
        degree[u]++;
        degree[v]++;
    }
    int start,odd;
    odd=0;
    start=til[0][0];
    for(int i=0;i<N;++i)
        if(degree[i]&1){
            start=i;
            odd++;
        }
    if(n==1)
        printf("1 +");
    else if(odd>2)
        printf("No solution");
    else{
        travel(start);
        if(cnt-1==n)
            wr();
        else printf("No solution");
    }

    return 0;
}
