#include<iostream>
#include<bits/stdc++.h>
using namespace std;
long long n,q,a[200000],k,sum=0,res;

int main()
{
    cin>>n>>q;
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=1;i<n;i++)a[i]+=a[i-1];
    while(q--)
    {
        cin>>k;
        sum+=k;
        res = upper_bound(a,a+n,sum)-a;
        if (res==n)sum=0,res = 0;
        cout<<n-res<<endl;
    }
}   