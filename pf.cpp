#include<bits/stdc++.h>
using namespace std;

//Effiecient approach to check whether a number is a prime number
bool is_prime(int n)
{
    if(n==1)
    return false;
    if(n==2||n==3)
    return true;
    if(n%2==0||n%3==0)
    return false;
    for(int i=5;i*i<=n;i+6)
    if(n%i==0||n%(i+2)==0)
    return false;

    return true;
}


//Method 01 Naive approach
// Time Complexity->O(n^2Logn)

int primefactors(int n)
{
    for(int i=0;i<n;i++)
    {
        if(is_prime(i))
        {
            int x=i;
            while((n%x==0))
            {
                cout<<i<<" ";
                x=x*i;
            }
        }
    }
}

//Efficient Solution
//Approach->Divisor always comes in pair
// Time Complexity->O(sqrt(n))

int primefactors(int n)
{
    if(n<=1)
    return 1;
    while(n%2==0)
    {
        cout<<2<<" ";
        n=n/2;
    }
    while(n%3==0)
    {
        cout<<3<<" ";
        n=n/3;
    }
    for(int i=5;i*i<=n;i+6)
    {
        while(n%i==0)
        {
            cout<<i<<" ";
            n=n/i;
        }
        while(n%(i+2)==0)
        {
            cout<<i+2<<" ";
            n=n/(i+2);
        }
    }
    if(n>3)
    cout<<n;

}


//Happy Coding :)