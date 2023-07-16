//Euclidean Algorithm
//Basic idea->Let 'b'be smaller than 'a' than [gcd(a,b)==gcd(a-b,b)]
//Reason->Let 'g' be gcd of'a' , 'b' 
//a=gx , b=gy , gcd(x,y)=1
//(a-b)=g(x-y)

// C++ Code iterative
int gcd(int a,int b)
{
    while(a!=b)
    {
        if(a>b)
        a=a-b;
        else
        b=b-a;
    }
    return a;
}

// C++ code recursive
int gcd(int a,int b)
{
    if(b==0)
    return a;
    else
    return gcd(b,a%b);
}

// Happy Coding :)