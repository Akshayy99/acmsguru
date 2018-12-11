#include<bits/stdc++.h>
#define ll long long
using namespace std;
int a[65538];
ll ans;
int n;

void merge (int l,int r,int l2,int r2){
    int b[n];
    int ind=0,i,j,x=r;
    for (i=l,j=l2; i<=r && j<=r2;){
        if (a[i]<=a[j]) {
            b[ind++]=a[i];
            i++;
        }
        else {
            b[ind++]=a[j];
            ans+=(ll)(x-i+1);
            j++;
        }
    }
    while (i<=r) b[ind++]=a[i++];
    while (j<=r2) b[ind++]=a[j++];
    for (i=0;i<ind;i++) 
        a[i+l]=b[i];
}

void mergesort(int l,int r){
    if (l>=r)
        return;
    int i=(l+r)>>1;

    mergesort (l,i);
    mergesort (i+1,r);
    merge (l,i,i+1,r);
}

int main (){
    cin >>n;
    for (int i=0;i<n;i++) cin>>a[i];
    mergesort (0,n-1);
    cout <<ans<<endl;
    return 0;
}
