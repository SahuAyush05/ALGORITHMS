// Sieve Of Eratosthences
//Gives all prime number upto n

#include<bits/stdc++.h>
using namespace std;

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


// method 01
//Complexity->O(n*(sqrt(n)))

void printprime(int n)
{
    for(int i=0;i<=n;i++)
    {
        if(is_prime(i))
        cout<<i<<" ";
    }
}


//Method 02
//Complexity->O(nLog(Log(n)))

void sieve(int n)
{
    vector<bool>prime(n+1,true);
    for(int i=0;i<=n;i++)
    {
        if(prime[i])
        {
            cout<<i<<" ";
            for( int j=i*i;j<=n;j=j+i)
            prime[j]=false;
        }
    }
}

//Happy Coding :)