#pragma once

#pragma region iterator - const_iterator
//vector<int> a = { 10,20,30 };

//// �������� �ݺ��ڸ� �ҷ���
//for (auto it = a.crbegin(); it != a.crend(); it++)
//	cout << *it << endl;

 ////it�� ���� 100���� �ٲ�
//for (auto it = a.begin(); it != a.end(); it++)
//{
//	*it = 100;
//	cout << *it << endl;
//}
////it�� ���� 100���� �ȹٲ�, ���ȭ ���ױ� ����
//for (auto it = a.cbegin(); it != a.cend(); it++)
//{
//	*it = 100;
//	cout << *it << endl;
//}
#pragma endregion

#pragma region Const
	// 1. const �Ϲ�
	//const int num = 1;
	//int const num = 1;
	//num = 2; // ����

	// 2. const Ŭ����
	// Ŭ������ const ������ �ʱ�ȭ�� ������ ���� �ʱ�ȭ(�ʱ�ȭ ����Ʈ)�� ����ؾ��Ѵ�.

	// 3. const ����Լ�
	//class test
	//{
	//	int num1 = 1;
	//	int a(void) const
	//	{
	//		int num2 = 1;
	//		num2++; // ���������� ��밡��

	//		num1++; // ����
	//	}
	//};
#pragma endregion

#pragma region size_t - unsigned int
	// size_t
	// size = unsigned int
	// _t = typedef�� �̿��� �ڷ����� ��Ī
	// �ý���(�ü��)���� ������ �� �ִ� �ִ� ũ���� �����͸� ����
	// ex) 32bit(4byte), 64bit(8byte)
	// size_t�ڷ����� int�� ��� �Ǵ� ���Ұ�� ����
#pragma endregion