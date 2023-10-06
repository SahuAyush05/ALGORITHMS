#include<bits/stdc++.h>
using namespace std;

// I/P->{1,5,3,8,12}
// O/P->13(4+0+9)

//Efficient Approach
//Time Complexity->O(n)

int stock(int a[],int n)
{
    int profit=0;
    for(int i=1;i<n;i++)
    { 
        if(a[i]>a[i-1])
        profit+=(a[i]-a[i-1]);
    }
    return profit;
}

//Happy Coding :)