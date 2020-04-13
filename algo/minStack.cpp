#include<iostream>
#include<stack>
#include<climits>

using namespace std;

class MinStack
{
	struct Node{
		int data;
		int minn;
	} ;
	stack<struct Node> s;
	public:
		MinStack()
		{
			//stack<struct Node> s;
		}
	void push(int x)
	{
		struct Node tmp;
		tmp.data = x;
		if(s.empty())
			tmp.minn = x;
		else
		{
			int tmp1 = this->getMin();
			tmp.minn = (x < tmp1 ? x : tmp1);
		}
		s.push(tmp);
	}	
	int getMin()
	{
		if(s.empty())
			return INT_MAX;
		else
			return s.top().minn;
	}
};

int main()
{
	MinStack *obj = new MinStack();
	obj->push(-2);
	cout << obj->getMin() << endl;
	obj->push(0);
	cout << obj->getMin() << endl;
	obj->push(-3);
	cout << obj->getMin() << endl;
	return 0;
}

