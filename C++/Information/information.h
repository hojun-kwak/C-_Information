#pragma once

#pragma region iterator - const_iterator
//vector<int> a = { 10,20,30 };

//// 역순으로 반복자를 불러옴
//for (auto it = a.crbegin(); it != a.crend(); it++)
//	cout << *it << endl;

 ////it의 값이 100으로 바뀜
//for (auto it = a.begin(); it != a.end(); it++)
//{
//	*it = 100;
//	cout << *it << endl;
//}
////it의 값이 100으로 안바뀜, 상수화 시켰기 때문
//for (auto it = a.cbegin(); it != a.cend(); it++)
//{
//	*it = 100;
//	cout << *it << endl;
//}
#pragma endregion

#pragma region Const
	// 1. const 일반
	//const int num = 1;
	//int const num = 1;
	//num = 2; // 에러

	// 2. const 클래스
	// 클래스에 const 변수를 초기화시 무조건 빠른 초기화(초기화 리스트)에 사용해야한다.

	// 3. const 멤버함수
	//class test
	//{
	//	int num1 = 1;
	//	int a(void) const
	//	{
	//		int num2 = 1;
	//		num2++; // 지역변수만 사용가능

	//		num1++; // 에러
	//	}
	//};
#pragma endregion

#pragma region size_t - unsigned int
	// size_t
	// size = unsigned int
	// _t = typedef를 이용한 자료형의 별칭
	// 시스템(운영체제)에서 포함할 수 있는 최대 크기의 데이터를 정의
	// ex) 32bit(4byte), 64bit(8byte)
	// size_t자료형과 int형 계산 또는 비교할경우 주의
#pragma endregion