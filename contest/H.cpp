#include<iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        long long n;
        cin >> n;

        long long l = 0;
        long long r = n;
        long long row = 0;

        while(l <= r)
        {
            long long mid = (l + r) / 2;

            
            __int128 warriors = (__int128)mid * (__int128)(mid + 1) / 2;

            if(warriors <= n)
            {
                row = mid;
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }

        cout << row << endl;
    }

    return 0;
}