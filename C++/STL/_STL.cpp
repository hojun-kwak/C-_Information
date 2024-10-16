#include "Framework/framework.h"
#include "_STL.h"

void T_STL::StackP()
{
	T_Stack<int> s;
	s.push(5);
	s.push(10);
	s.push(15);
	s.push(20);
	cout << s.size() << endl;
	s.pop();
	cout << s.size() << endl;
	cout << s.top() << endl;
	cout << s.empty() << endl;
	cout << "============================" << endl;
	T_Stack<char> c;
	c.push('a');
	c.push('b');
	c.push('c');
	cout << c.size() << endl;
	c.pop();
	cout << c.size() << endl;
	cout << c.top() << endl;
	cout << c.empty() << endl;
}

void T_STL::QueueP()
{
	T_Vector_Queue<int> q1;
	q1.push(1);
	q1.push(2);
	q1.push(3);
	q1.push(4);
	q1.pop();
	
	cout << q1.front() << endl;
	cout << q1.back() << endl;
	cout << q1.size() << endl;
	cout << q1.empty() << endl;
	cout << "=================" << endl;
	T_Vector_Queue<char> q2;
	q2.push('a');
	q2.push('b');
	q2.push('c');
	q2.push('d');
	cout << q2.front() << endl;
	cout << q2.back() << endl;
	cout << q2.size() << endl;
	cout << q2.empty() << endl;
}

void T_STL::List_QueueP()
{
	T_List_Queue<int> q;
	q.EnQueue(1);
	q.EnQueue(2);
	q.EnQueue(3);
	q.EnQueue(4);

	q.DeQueue();

	cout << q.front() << endl;
	cout << q.back() << endl;
	cout << q.size() << endl;
	cout << q.Empty() << endl;

	int a = 10;
}
