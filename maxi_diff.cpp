#include<bits/stdc++.h>
using namespace std;
//To calculate maximum value of a[i]-a[j] such that j>i

int maxdiff(int a[],int n)
{
    int res=a[1]-a[0];
    int min_val=a[0];
    for(int i=1;i<n;i++)
    {
        res=max(res,a[i]-min_val);
        min_val=min(min_val,a[i]);
    }
    return res;
}

//Happy Coding :)