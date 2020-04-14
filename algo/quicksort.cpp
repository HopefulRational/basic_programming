#include<iosream>

using namespace std;

int heap_size = 10;

int parent(int i)
{
	return i/2;
}

int left(int i)
{
	return 2*i;
}

int right(int i)
{
	return (2*i+1);
}

void maxHeapify(int ar[], int heap_size, int i) // O(lg(n))
{
	// assumes left(i) and right(i) are max-heaps
	int l = left(i);
	int r = right(i);
	int largest;
	if(l < heap_size && A[i] < A[l])
		largest = l;
	else
		largest = i;
	if(r < heap_size && A[largest] < A[r])
		largest = r;
	if(largest != i)
	{
		int temp = A[i];
		A[i] = A[largest];
		A[largest] = temp;
		maxHeapify(ar, heap_size, largest);
	}
}

void buildMaxHeap(int ar[])
{
	for(int i=heap_size/2 - 1; i>= 0; i--)
		maxHeapify(ar, i);
}
