#include <iostream>
#include "head.h"

void IncrementPointer(int* value)		    //��һ����ֵ������������������ָ��
{
	(*value)++;
}

void IncrementQuote(int& value)            //����
{
	value++;
}

int main()
{
	int a = 3;
	IncrementPointer(&a);
	LOG(a);

	int b = 6;
	IncrementQuote(b);
	LOG(b);

	int vtr = 8;							//ָ���ָ�� vtr <-- ptr <-- newptr
	int* ptr = &vtr;
	LOG(ptr);								//��ӡptr��Ҳ����vtr�������ڴ��ַ
	*ptr = 10;
	std::cout << ptr << std::endl;
	int** newptr = &ptr;

	std::cin.get();
}