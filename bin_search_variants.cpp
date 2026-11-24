#include<iostream>
#include<cmath>
#include<algorithm>

#define debug(x) cout << #x << " = " << x << endl;

using namespace std;

typedef long long ll;

int Search(int a[],int n,int akey)
{
    int key=akey;
    int low=0,high=n-1,pos=-1;
    while(low<=high)
    {
        int mid = (low + high)/2;
        if(a[mid]==key)
        {
            pos = mid;
            break;
        }
        else if(a[mid]<key)
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    return pos;
}

int firstOccurance(int a[],int n,int akey)
{
    int key=akey;
    int low=0,high=n-1,pos=-1;
    while(low<=high)
    {
        int mid = (low + high)/2;
        if(a[mid]==key)
        {
            high = mid-1;
            pos = mid;
        }
        else if(a[mid]<key)
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    return pos;
}

int lastOccurence(int a[],int n,int akey)
{
    int key=akey;
    int low=0,high=n-1,pos=-1;
    while(low<=high)
    {
        int mid = (low + high)/2;
        if(a[mid]==key)
        {
            low=mid+1;
            pos = mid;
        }
        else if(a[mid]<key)
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    return pos;
}

int leastGreater(int a[],int n,int akey)
{
    int key=akey;
    int low=0,high=n-1,pos=-1,mid;
    while(low<=high)
    {
        mid = (low + high)/2;
        if(a[mid]==key)
        {
            low=mid+1;
            pos = mid;
        }
        else if(a[mid]<key)
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    if(pos!=-1)
    {
        pos++;
        return pos;
    }
    else
    {
        if(a[mid]>key)
        {
            return mid;
        }
        else
        {
            return mid+1;
        }
    }
}

int greatestLesser(int a[],int n,int akey)
{
    int key=akey;
    int low=0,high=n-1,pos=-1,mid;
    while(low<=high)
    {
        mid = (low + high)/2;
        if(a[mid]==key)
        {
            high = mid-1;
            pos = mid;
        }
        else if(a[mid]<key)
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    if(pos!=-1)
    {
        pos--;
        return pos;
    }
    else
    {
        if(a[mid]>key)
        {
            return mid-1;
        }
        else
        {
            return mid;
        }
    }
}

int searchNear(int a[],int n,int akey)
{
    int key=akey;
    int low=0,high=n-1,pos=-1,mid;
    while(low<=high)
    {
        mid = (low + high)/2;
        if(a[mid]==key)
        {
            pos = mid;
            break;
        }
        else if(a[mid]<key)
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    if(abs(a[mid]-key)<=abs(a[mid-1]-key))
    {
        if(abs(a[mid]-key)<=abs(a[mid+1]-key))
        {
            return mid;
        }
        else
        {
            return mid+1;
        }
    }
    else
    {
        if(abs(a[mid-1]-key)<=abs(a[mid+1]-key))
        {
            return mid;
        }
        else
        {
            return mid+1;
        }
    }
}

int number_of_occurences(int a[],int n,int akey)
{
    int x=firstOccurance(a,n,akey);
    int y=lastOccurence(a,n,akey);
    if(x==-1) return 0;
    return y-x+1;
}

int main()
{
    //ios_base::sync_with_stdio(false); cin.tie(NULL);
    ///freopen("input.txt", "r", stdin);
    int a[]={2,3,3,5,5,5,6,6,9,9,9,9};
    int n=12;
    cout << Search(a,n,5) << endl;
    cout << firstOccurance(a,n,9) << endl;
    cout << lastOccurence(a,n,6) << endl;
    cout << leastGreater(a,n,5) << endl;
    cout << leastGreater(a,n,9) << endl;
    cout << greatestLesser(a,n,2) << endl;
    cout << greatestLesser(a,n,9) << endl;
    cout << searchNear(a,n,7) << endl;
    cout << leastGreater(a,n,4) << endl;
    cout << greatestLesser(a,n,4) << endl;
    cout << number_of_occurences(a,n,5) << endl;
    cout << number_of_occurences(a,n,4) << endl;
    return 0;
}

