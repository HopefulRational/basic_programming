#include<iostream>

using namespace std;

int distCover(int dist)
{
	int dists[dist+1];

	switch(dist)
	{
			case 0: return 0;
			case 1: return 1;
			case 2: return 2;
			case 3: return 4;
	}

	dists[0] = 0;
	dists[1] = 1;
	dists[2] = 2;
	dists[3] = 4;

	for(int i=4; i<=dist; i++)
			dists[i] = dists[i-1] + dists[i-2] + dists[i-3];
	return dists[dist];
}

int main()
{
		cout << distCover(4) << endl;
		return 0;
}
