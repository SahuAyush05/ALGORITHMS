#include<bits/stdc++.h>
using namespace std;
//To move zero to end

//Example->I/P->{10,5,0,11,20,0,8,0}
//         O/P->{10,5,11,20,8,0,0,0}          

//Naive method

void move(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        if(a[i]==0)
        {
            for(int j=i+1;j<n;j++)
            {
                if(a[j]!=0)
                swap(a[j],a[i]);
            }
        }
    }
}

//Efficient olution

void move(int a[],int n)
{
    int c=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]!=0)
        {
            swap(a[i],a[c]);
            c++;
        }
    }
}

//Happy Coding :)