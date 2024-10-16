#pragma once

// Queue
// FIFO(First In First Out)

// push, pop, front, back, size, empty, swap
// push = rear = Enqueue
// pop = front = Dequeue

template<typename T>
class T_Vector_Queue
{
public:
	T_Vector_Queue() {}
	~T_Vector_Queue() {}

public:
	void push(const T& data) { _data.emplace_back(data); }
	void pop()
	{
		if (!_data.empty())
			_data.erase(_data.begin());
	}
	const T& front() const { return _data.front(); }
	const T& back() const { return _data.back(); }
	bool empty() { return _data.empty(); }
	size_t size() { return _data.size(); }

private:
	vector<T> _data;
};


template<typename T>
class Node
{
public:

	Node() : _data(0), _next(nullptr) {}
	~Node() {}

	T _data;
	Node* _next;
};

template<typename T>
class T_List_Queue
{
public:
	T_List_Queue() : _head(nullptr), _tail(nullptr), _size(0) {}
	~T_List_Queue() {}

public:
	void EnQueue(const T& data)
	{
		Node<T>* newNode = new Node<T>;
		newNode->_data = data;
		_size++;

		if (_head == nullptr)
		{
			_head = newNode;
			_tail = newNode;
		}
		else
		{
			_tail->_next = newNode;
			_tail = _tail->_next;
		}
	}
	void DeQueue()
	{
		if (Empty())
			return;

		Node<T>* temp = _head;
		T value = _head->_data;
		_size--;
		if (_head == _tail)
		{
			_head = nullptr;
			_tail = nullptr;
			delete _head;
		}
		else
		{
			temp = temp->_next;
			delete _head;
			_head = temp;
		}
	}
	const T& front() { return _tail->_data; }
	const T& back() { return _head->_data; }
	bool Empty()
	{
		if (_size == 0) return true;
		return false;
	}
	size_t size() { return _size; }
private:
	Node<T>* _head;
	Node<T>* _tail;
	size_t _size;
};
