#include<iostream>
#include<algorithm>
using namespace std;

int smallestgreater(int *a, int n, int key)
{
    int l=0;
    int r=n-1;
    int p=-1;

    while(l<=r)
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
    return p;

}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)cin>>a[i];

    int b[n];
    b[0]=a[0];
    for(int i=1; i<n; i++)
    {
        b[i]=b[i-1]+a[i];
    }

    int m;
    cin>>m;
    int q;

    while(m--)
    {
        cin>>q;
        cout << smallestgreater(b,n,q)+1 << endl;
    }
}