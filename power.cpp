//Computing Power

#include<bits/stdc++.h>
using namespace std;

//Naive solution
//Time Complexity->O(n)

int power(int n,int x)
{
    int res=1;
    for(int i=0;i<n;i++)
    res*=x;
    return res;
}

//Method 2

int power(int n,int x)
{
    if(n==0)
    return 1;
    int temp=power(x,n/2);
    temp=temp*temp;
    if(n%2==0)
    return temp;
    else
    return temp*x;

}

// Method 3
//Iterative Power(Binary Explanation)
//Time Complexity->O(Log(n))
//ex:3^10=(3^8)*(3^2)         ||  10->1010
//ex:3^19=(3^16)*(3^2)*(3^1)  ||  19->10011

//Every number can be written as sum of powers as 2(set bits in binary representation)
//We can traverse through all bits

int pow(int x,int n)
{
    int res=1;
    while(n>0)
    {
        if(n%2!=0||(n&1))
        res=res*x;

        x=x*x;
        n=n/2;
    }
    return res;
}


// Happy Coding :)