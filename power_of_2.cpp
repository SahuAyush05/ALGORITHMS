// I/P->4
//O/P->Yes
//I/P->6
//O/P->No

//Naive Approach
bool is_power(int n)
{
    if(n==0)
    return false;
    while(n!=0)
    {
        if(n%2!=0)
        return false;
        n=n/2;
    }
    return true;
}

//Method 2
//approach=>power of 2 has only one set bit

bool is_pow(int n)
{
    int res=0;
    while(n>0)
    {
        n=n&(n-1);
        res++;
    }
    if(res==1)
    return true;
    else
    return false;
}

//method 3

bool is_pow(int n)
{
    return (n!=0&&(n&(n-1)==0));
}

//Happy Coding :)