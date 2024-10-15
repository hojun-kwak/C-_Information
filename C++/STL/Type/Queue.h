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

