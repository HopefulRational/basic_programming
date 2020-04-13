// Partition a set into two subsets such that the difference of subset sums is minimum
#include<iostream>
#include<climits>
#include<cmath>

using namespace std;

int findMin(int arr[], int n)
{
	int sum=0;
	for(int i=0; i<n; i++)
		sum += arr[i];

	int dp[n+1][sum+1] = {0};

	for(int i=1; i<=n; i++)
	{
		for(int j=0; j<=sum; j++)
		{
			if(j == 0)
				dp[i][j] = 1;
			if(dp[i-1][j] == 1 || dp[i-1][j-arr[i-1]] == 1)
				dp[i][j] = 1;
		}
	}

	int minn = sum;

	for(int j=1; j<=sum; j++)
		if(dp[n][j] == 1)
			if(abs(sum - j*2) < minn)
				minn = abs(sum - j*2);

	return minn;
}

int main()
{
	int arr[] = {3, 1, 4, 2, 2, 1}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    cout << "The minimum difference between 2 sets is "
         << findMin(arr, n) << endl; 
    return 0; 
}
