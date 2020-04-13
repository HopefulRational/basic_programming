// search in rotated sorted array
#include<iostream>
using namespace std;

int searchSorted(int ar[], int n, int x)
{
    int lo = 0;
    int hi = n-1;
    while(lo <= hi)
    {
        int mid = lo + (lo + hi)/2;
        if(ar[mid] == x)
            return mid;
        if(ar[lo] <= ar[mid])
        {
            if(x >= ar[lo] && x < ar[mid])
                hi = mid - 1;
            else
                lo = mid + 1;
        }
        if(ar[mid] <= ar[hi])
        {
            if(x > ar[mid] && x <= ar[hi])
                lo = mid+1;
            else
                hi = mid-1;
        }
    }
    return -1;
}

int main()
{
    int ar[] = {3,4,5,1,2};
    cout << searchSorted(ar, sizeof(ar)/sizeof(int), 5) << endl;
    cout << searchSorted(ar, sizeof(ar)/sizeof(int), 7) << endl;
    return 0;
}