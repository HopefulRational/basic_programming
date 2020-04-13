// sum of elements is closest to zero
// needs change
#include<iostream>
#include<algorithm>

using namespace std;

struct Pair
{
    int lo;
    int hi;
};

struct Pair sumClosestToVal(int ar[], int n)
{
    struct Pair retVal;
    retVal.lo = retVal.hi = -1;
    
    if(n <= 1)
        return retVal;
    
    sort(ar, ar+n);

    int lo = 0;
    int hi = n-1;
    while(lo < hi)
    {
        if(ar[lo] + ar[hi] == 0)
        {
            retVal.lo = lo;
            retVal.hi = hi;
            return retVal;
        }

        else if(ar[lo] + ar[hi] < 0)
            lo++;
        else
            hi--;
    }
    return retVal;
}

int main()
{
    int ar[] = {-2,8,-7,1,4,-6,3,9,2};
    struct Pair res = sumClosestToVal(ar, sizeof(ar)/sizeof(int));
    cout << res.lo << " " << res.hi << " " << res.lo + res.hi << endl;
    return 0;
}