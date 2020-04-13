#include<iostream>
#include<stack>
using namespace std;

class Queue
{
	stack<int> s1, s2;

	public:
		void enQueue(int x)
		{
			s1.push(x);
		}

		int deQueue()
		{
			if(s1.empty() && s2.empty())
			{
				cout << "Queue is empty!\n";
				return -1;
			}
			if(s2.empty())
				while(!s1.empty())
				{
					s2.push(s1.top());
					s1.pop();
				}
			int tmp = s2.top();
			s2.pop();
			return tmp;
		}
};

int main()
{
    Queue q;
    q.enQueue(1); 
    q.enQueue(2); 
    q.enQueue(3); 
  
    cout << q.deQueue() << '\n'; 
    cout << q.deQueue() << '\n'; 
    cout << q.deQueue() << '\n'; 
  
    return 0; 
} 
