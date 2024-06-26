#include<iostream>
using namespace std;

long prime(long n)
{
    long k=0,p=2,j;
    while(true)
    {
        j=0;
        for(long i=1;i<=p;i++)
        {
            if(p%i==0)
            {
                j++;
            }
        }
        if(j==2)
        {
            k++;
        }
        if(k==n)
        {
            return p;
        }
        p++;
    }
}

bool search(long arr[],long s, long n)
{
    long flag=0;
    for(long i=0;i<s;i++)
    {
        if(arr[i]==n)
        {
            flag=1;
        }
    }
    if(flag==1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

long gd(long n)
{
    long req=0;
    for(long i=1;i<n;i++)
    {
        if(n%i==0)
        {
            req=i;
        }
    }
    return req;
}

bool primecheck(long n)
{
    long k=0;
    for(long i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            k++;
        }
    }
    if(k==2)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    long n;
    cin >> n;
    long arr[2 * n];
    for (long i = 0; i < 2 * n; i++)
    {
        cin >> arr[i];
    }
    long req[n];
    long p = 0;
    for (long i = 0; i < 2 * n; i++)
    {
        if (primecheck(arr[i]))
        {
            if (search(arr, 2 * n, prime(arr[i])))
            {
                long h=0;
                for(long j=0;j<p;j++)
                {
                    if(arr[i]==req[j])
                    {
                        h=1;
                    }
                }
                if(h==0)
                {
                    req[p] = arr[i];
                    p++;
                }
            }
        }
        else
        {
            if (search(arr, 2 * n, gd(arr[i])))
            {
                long h=0;
                for(long j=0;j<p;j++)
                {
                    if(arr[i]==req[j])
                    {
                        h=1;
                    }
                }
                if(h==0)
                {
                    req[p] = arr[i];
                    p++;
                }
            }
        }
    }
    for (long i = 0; i < n; i++)
    {
        cout << req[i] << " ";
    }
}

