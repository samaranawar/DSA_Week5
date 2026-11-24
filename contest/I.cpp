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
    int N, Q;
    cin >> N >> Q;
    int a[N];
    for(int i=0;i<N;i++)cin>>a[i];
    sort(a,a+N);
    for(int i = 1; i < N; i++)
    {
        a[i] = a[i] + a[i - 1];
    }

    while(Q--)
    {
        int k;
        cin>>k;
        cout << greatestsmaller(a,N,k)+1 << endl;
    }
}
