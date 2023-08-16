#include<bits/stdc++.h>
using namespace std;

//only odd ocurring number 
//I/P->[4,3,4,4,4,5,5]
//O/P->3
//I/P->[8,7,7,8,8]
//O/P->8

//Naive Solution
//Time Complexity->O(n*n)
void oddo(int n,int a[])
{
    for(int i=0;i<n;i++)
    {
        int count=0;
        for(int j=0;i<n;j++)
        if(a[j]==a[i])
        count++;
        if(count%2!=0)
        cout<<a[i];
    }
}

//Efficient Solution
//Time Complexity ->O(n)
int findodd(int n,int a[])
{
    int res=0;
    for(int i=0;i<n;i++)
    {
        res=res^a[i];
    }
    return res;
}

//Happy Coding :)
