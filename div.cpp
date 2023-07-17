#include<bits/stdc++.h>
using namespace std;

//All divisors of a number
//I/P->15
//O/P->1 3 5 15

//Naive     Method 
//Complexity->O(n)

int div(int n)
{
    for(int i=1;i<n;i++)
    if(n%i==0)
    cout<<i<<" ";
}

// Efficient approach
// Logic->Divisors are in pair
//Complexity->O(sqrt(n))

int div(int n)
{
    for(int i=0;i<n;i++)
    {
        if(n%i==0)
        cout<<i<<" ";
        if(i!=n/i)
        cout<<n/i<<" ";
    }
}

//Happy Coding :)