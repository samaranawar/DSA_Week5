#include<iostream>
using namespace std;

int main()
{
    int n,k;
    cin >> n >> k;
    int sum=k;
    int i;

    for(i=1; i<=n; i++)
    {
        sum+=i*5;
        if(sum>60*4)
        break;    
    }

    cout << i-1 << endl;
    
}