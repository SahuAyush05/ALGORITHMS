//Count Set Bits

//I/P->N=5(00.....101)
//O/P->2
//I/P->N=7
//O/P->3

#include<bits/stdc++.h>
using namespace std;

//Time Complexity->O(total bit count)

int count_Set(int n)
{
    int res=0;
    while(n>0)
    {
        if(n%2!=0)           //if(n&1==1)
        res++;               //res++
        n=n/2;               //n=n>>1
    }
    return res;
}

//method 2
//Brian Kerningam's Algorithm
//Time Complexity->O(set bit count )

int count_set(int n)
{
    int res=0;
    while(n>0)
    {
        n=n&(n-1);
        res++;
    }
    return res;
}

//Happy Coding :)