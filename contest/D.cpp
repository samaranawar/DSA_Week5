#include<iostream>
#include<algorithm>
using namespace std;

int greatestsmaller(int *a, int n, int key)
{
    int l=0;
    int r=n-1;
    int p=-1;

    while(l<=r)
    {
        int mid=(l+r)/2;

        
        if(a[mid]<=key)
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

int main()
{
    int n,m;
    cin >> n >> m;
    int a[n];
    int b[m];

    for(int i=0; i<n; i++)cin>>a[i];
    for(int i=0; i<m; i++)cin>>b[i];
    
    sort(a,a+n);


    for(int i=0; i<m; i++)
    {
        int p=greatestsmaller(a,n,b[i]);
        cout << p+1 << " ";
    }


    
}