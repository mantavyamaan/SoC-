#include<iostream>
using namespace std;

int prime(int n)
{
    int k=0,p=2,j;
    while(true)
    {
        j=0;
        for(int i=1;i<=p;i++)
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

bool search(int arr[],int s, int n)
{
    int flag=0;
    for(int i=0;i<s;i++)
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

int gd(int n)
{
    int req=0;
    for(int i=1;i<n;i++)
    {
        if(n%i==0)
        {
            req=i;
        }
    }
    return req;
}

bool primecheck(int n)
{
    int k=0;
    for(int i=1;i<=n;i++)
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
    int n;
    cin >> n;
    int arr[2 * n];
    for (int i = 0; i < 2 * n; i++)
    {
        cin >> arr[i];
    }
    int req[n];
    int p = 0;
    for (int i = 0; i < 2 * n; i++)
    {
        if (primecheck(arr[i]))
        {
            if (search(arr, 2 * n, prime(arr[i])))
            {
                req[p] = arr[i];
                p++;
            }
        }
        else
        {
            if (search(arr, 2 * n, gd(arr[i])))
            {
                req[p] = arr[i];
                p++;
            }
        }
    }
    for (int i = 0; i < p; i++)
    {
        cout << req[i] << " ";
    }
}
