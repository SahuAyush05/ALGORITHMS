//To find the second largest element in an array

//efficient approach
//Time Complexity->O(n)

int secondlargest(int a[],int n)
{
    int res=-1,largest=0;
    for(int i=1;i<n;i++)
    {
        if(a[i]>a[largest])
        {
            res=largest;
            largest=i;
        }
        else if(a[i]!=a[largest])
        {
            if(res==-1||a[i]>a[res])
            res=i;
        }
        
    }
    return res;
}

//Happy Coding :)
