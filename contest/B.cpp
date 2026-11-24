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

int bsearchf(int *a, int n, int key)
{
    int l=0;
    int r=n-1;
    int res=-1;

    while(l<=r)
    {
        int mid=(l+r)/2;

        if(a[mid]==key)
        {
            res=mid;
            r=mid-1;
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
    return res;

}
int firstg(int *a, int n, int key)
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




int main()
{
    int n;
    cin >> n;
    int a[n];

    for(int i=0; i<n; i++) cin >> a[i];
    
    
    int t;
    cin >>t;

    while(t>0)
    {
        int k;
        cin >> k;
        int i=bsearchf(a,n,k);

        if(i==-1)
        {
            cout << "No" << " " << firstg(a,n,k)+1 << endl;
        }
        else
        {
            cout << "Yes" << " " << i+1 << endl;
        }
        t--;

    }

}