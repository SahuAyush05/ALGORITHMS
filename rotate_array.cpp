//Left Rotate an array by d positions

//Naive method

void left_rotate(int a[],int n)
{
    int temp=a[0];
    for(int i=1;i<n;i++)
    a[i-1]=a[i];
    a[n-1]=temp;
}

void rotate(int a[],int n,int d)
{
    for(int i=0;i<d;i++)
    left_rotate(a,n);
}

////Efficient Method

void left_rotate(int a[],int n,int d)
{
    int temp[d];
    for(int i=0;i<d;i++)
    {
        temp[i]=a[i];
    }
    for(int i=d;i<n;i++)
    {
        a[i-d]=a[i];
    }
    for(int i=0;i<d;i++)
    {
        a[n-d+i]=temp[i];
    }

}

//Happy Coding :)