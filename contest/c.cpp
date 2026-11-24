#include<iostream>
#include<algorithm>
using namespace std;

int bsearch(int *a, int l, int r,int key)
{

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


int main()
{
    int n;
    cin >> n;
    int a[n];
    int b[n];
    
    int k;
    cin >>k;
    for(int i=0; i<n; i++) cin >> a[i];
    for(int i=0; i<n; i++) b[i]=a[i];

    sort(a,a+n);
    int i=0;
    int p,q;
    int l=-1,m=-1;
    int flag=0;
    

    while(i<n) 
    {
        
        int key;
        key=k-a[i];
        int f=bsearch(a,i+1,n-1,key);
        if(f == -1)
        {
            i++;
        }
        else
        {
            p = a[i];
            q = a[f];
            flag = 1;
            break;
        }
    }

    if(flag==0)
    {
        cout << "IMPOSSIBLE";
        
    }
    else
    {
        if(p != q)
        {
            for(int j=0; j<n; j++)
            {
                if(b[j]==p && l==-1)
                    l=j;

                if(b[j]==q && m==-1)
                    m=j;
            }
        }
        else
        {
            for(int j=0; j<n; j++)
            {
                if(b[j]==p)
                {
                    if(l==-1)
                        l=j;
                    else
                    {
                        m=j;
                        break;
                    }
                }
            }
        }
 
        if(l < m)
        cout << l+1 << " " << m+1;
        else
        cout << m+1 << " " << l+1;

    }
                    

                    

   }

    

