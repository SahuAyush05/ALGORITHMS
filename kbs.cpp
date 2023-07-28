//  I/P->n=5 , k =1 
// n=5 => 00.....0101(kth bit=1(set))
//OP->yes

//  I/P->n=8 , k=2
// n=8 => 00.....100(kth bit=0(unset))0
//O/P->no

#include<bits/stdc++.h>
using namespace std;

//Method 1

void kbit(int n, int k)
{
    if(n&(1<<(k-1))!=0)
    cout<<"Yes"<<endl;
    else
    cout<<"No"<<endl;
}

//Method 2

void kbit(int n,int k)
{
    if((n>>(k-1)&1)==1)
    cout<<"Yes"<<endl;
    else
    cout<<"No"<<endl;
}

//Happy Coding :)