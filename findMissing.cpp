// Find missing in [1,n]
#include<iostream>

using namespace std;

int findMissing(int ar[], int n)
{
    int total = 1;
    for(int i=2; i <= (n+1); i++)
    {
        total += i;
        total -= ar[i-2];
    }
    return total;
}

int main()
{
    int ar[] = {5,1,4,2,8,3,7};
    cout << findMissing(ar, sizeof(ar)/sizeof(int)) << endl;
    return 0;
}