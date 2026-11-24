#include<iostream>
#include<algorithm>
using namespace std;

int bsearch(int *a, int n, int key)
{
    int l=0;
    int r=n-1;

    while(l<=r)
    {
        int mid=(l+r)/2;

        if(a[mid]==key)
        return mid;

        if(a[mid]>key)
        {
            r=mid-1;
        }
        else
        {
            l=mid+1;
        }
    }
    return -1;

}
int bsearch_l(int *a, int n, int key)
{
    int l=0;
    int r=n-1;
    int p=-1;

    while(l<=r)
    {
        int mid=(l+r)/2;

        if(a[mid]==key)
        {
           p=mid;
           l=mid+1;
        }
        else if(a[mid]>key)
        {
            r=mid-1;
        }
        else
        {
            l=mid+1;
        }
    }
    return p;

}


int bsearch_f(int *a, int n, int key)
{
    int l=0;
    int r=n-1;
    int p=-1;

    while(l<=r)
    {
        int mid=(l+r)/2;

        if(a[mid]==key)
        {
           p=mid;
           r=mid-1;
            //l=mid+1;
        }
        else if(a[mid]>key)
        {
            r=mid-1;
        }
        else
        {
            l=mid+1;
        }
    }
    return p;

}

int smallestgreater(int *a, int n, int key)
{
    int l=0;
    int r=n-1;
    int p=-1;

    while(l<=r)
    {
        int mid=(l+r)/2;

        
        if(a[mid]>key)
        {
            p=mid;
            r=mid-1;
        }
        else
        {
            l=mid+1;
        }
    }
    return p;

}

int greatestsmaller(int *a, int n, int key)
{
    int l=0;
    int r=n-1;
    int p=-1;

    while(l<=r)
    {
        int mid=(l+r)/2;

        
        if(a[mid]<key)
        {
            p=mid;
            l=mid+1;
        }
        else
        {
            r=mid-1;
        }
    }
    return p;

}

int searchnear(int *a, int n,int key)
{
    int l=0;
    int r=n-1;
    int p=-1;
    while(l<=r)///smallestgreater
    {
        int mid=(l+r)/2;

        if(a[mid]>=key)
        {
            p=mid;
            r=mid-1;
        }
        else
        {
            l=mid+1;
        }
    }

    l=0;
    r=n-1;
    int q=-1;
    while(l<=r)////greatestsmaller
    {
        int mid=(l+r)/2;

        if(a[mid]<=key)
        {
            q=mid;
            l=mid+1;
        }
        else
        {
            r=mid-1;
        }
    }

    if(abs(a[p]-key)>abs(a[q]-key))
    return q;
    else
    return p;

    if(p==-1)return q;
    else return p;


}




int main()
{
    int n;
    cin >> n;
    int a[n];
    int k;
    cin >>k;


    for(int i=0; i<n; i++) cin >> a[i];

    sort(a,a+n);

    for(int i=0; i<n; i++) cout << a[i] << " ";
    cout << endl;

    cout << smallestgreater(a,n,k) << endl;
    cout << greatestsmaller(a,n,k) << endl;
}