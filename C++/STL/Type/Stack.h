#pragma once

// Stack
// LIFO(Last In First Out)

// push,pop,size,empty,top

// push �� emplace
// push : move �� ���� ������, �޸𸮸� �Ȱ��� �����ؼ� �ٸ����� ������ �� ������ �����ϴ� ���
// emplace : �Լ������� ��ü�� ����

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
