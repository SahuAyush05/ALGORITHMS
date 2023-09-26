#include<bits/stdc++.h>
using namespace std;
//To find the leader in the array
//Example: I/P->{7,4,10,6,5,2}
//         O/P->{2,5,6,10}

void leader(int a[],int n)
{
    int curr_ldr=a[n-1];
    cout<<curr_ldr;
    for(int i=n-2;i>=0;i++)
    {
        if(a[i]>curr_ldr)
        {
            cout<<a[i];
            curr_ldr=a[i];
        }
    }

}

//Happy Coding :)