#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;

int binarysearch(int *a, int n, int match)
{
    int l=0;
    int r=n-1;
    while(l<=r)
    {
        int mid=(l+r)/2;
        if(match==a[mid])
        {
            return mid;
        }
        else if(match>a[mid])
        {
            l=mid+1;
            
            
        }
        else
        {
            r=mid-1;
            
        }
    }

    return -1;
    
}


int main()
{
    freopen("array.txt", "r", stdin);
    int n,match;
    cin>>n>>match;
    int a[n];
    for(int i=0; i<n; i++) cin >> a[i];
    sort(a,a+n);
    for(int i=0; i<n; i++) cout << a[i] << " ";
    cout << "\n";
    int c=binarysearch(a,n,match);
    if (c == -1)
    {
        cout << "Element not found." << endl;
    }
    else
    {
        cout << "Element found at index " << c << "." << endl;
    }

    
    return 0;

}