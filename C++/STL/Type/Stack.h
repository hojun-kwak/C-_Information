#pragma once

// Stack
// LIFO(Last In First Out)

// push,pop,size,empty,top

// push 와 emplace
// push : move 즉 복사 생성자, 메모리를 똑같이 복사해서 다른곳에 생성한 후 전값을 제거하는 방식
// emplace : 함수내에서 객체를 생성

template<typename T>
class T_Stack
{
public:
	T_Stack() {}
	~T_Stack() {}

public:
	void push(const T& data) { _data.emplace_back(data); }
	void pop()
	{
		if (!_data.empty())
			_data.pop_back();
	}
	const T& top() { return _data.back(); }
	bool empty() { return _data.empty(); }
	unsigned int size() { return _data.size(); }
private:
	vector<T> _data;
};
