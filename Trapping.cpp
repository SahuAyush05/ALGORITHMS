#include<bits/stdc++.h>
using namespace std;

// I/P->{3,0,1,2,5}
// O/P->6

int get_water(int a[],int n)
{
    int res=0;
    int lmax[n],rmax[n];
    lmax[0]=a[0];
    for(int i=1;i<n;i++)
    {
        lmax[i]=max(lmax[i-1],a[i]);
    }
    rmax[n-1]=a[n-1];
    for(int i=n-2;i>=0;i++)
    {
        rmax[i]=max(rmax[i+1],a[i]);
    }
    for(int i=1;i<n-1;i++)
    {
        res=res+min(lmax[i],rmax[i])-a[i];
    }
    return res;
}

//Happy Coding :)