// Java code for stack implementation

import java.io.*;
import java.util.*;

class Test
{
	static void stack_push(Stack<Integer> s)
	{
		for(int i=0; i<5; i++)
			s.push(i);
	}

	static void stack_pop(Stack<Integer> s)
	{
		System.out.println("Pop : ");
		for(int i=0; i<5; i++)
		{
			Integer y = (Integer) s.pop();
			System.out.println(y);
		}
	}

	static void stack_peek(Stack<Integer> s)
	{
		Integer y = (Integer) s.peek();
		System.out.println("Element on stack top : " + y);
	}

	static void stack_search(Stack<Integer> s, int x)
	{
		Integer pos = (Integer) s.search(x);
		if(pos == -1)
			System.out.println("Element not found!");
		else
			System.out.println("Element found at pos " + pos);
	}

	public static void main(String[] args)
	{
		Stack<Integer> stack = new Stack<Integer>();

		stack_push(stack);
		stack_pop(stack);
		stack_push(stack);
		stack_peek(stack);
		stack_search(stack,0);
		stack_search(stack,6);

	}

}
