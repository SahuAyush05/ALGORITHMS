//Method 01 complexity->O(n)

bool is_prime(int n)
{
    int c=0;
    if(n==1)
    return false;
    for(int i=2;i<n;i++)
    {
        if(n%i==0){
            c=1;
            break;
        }

    }
    if(c==0)
    return true;
    else
    return false;
}

//Method 02 
// Logic->divisor comes in pair
// ex: 65=(5,13),(1,65)
// ex2:25=(5,5),(1,25)

bool is_prime(int n)
{
    if(n==1)
    return false;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        return false;
    }
    return true;

}


// METHOD 03 ****Most efficient

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


// Happy Coding :)