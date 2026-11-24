#include<iostream>
using namespace std;

int min(int *a, int n)
{
    int mn = a[0];

    for(int i = 1; i < n; i++)
    {
        if(a[i] < mn)
            mn = a[i];
    }

    return mn;
}

int main()
{
    int n;
    long long t;
    cin >> n >> t;

    int a[n];

    for(int i = 0; i < n; i++) cin >> a[i];

    long long l = 0;
    long long r = (long long)min(a, n) * t;
    long long time = r;

    while(l <= r)
    {
        long long mid = (l + r) / 2;

        long long products = 0;

        for(int i = 0; i < n; i++)
        {
            products=products+mid / a[i];

            if(products >= t) break;
        }

        if(products >= t)
        {
            time = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }

    cout << time << endl;

    return 0;
}