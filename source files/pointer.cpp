#include <iostream>
#include "head.h"

void IncrementPointer(int* value)		    //用一个加值函数来看区别，首先是指针
{
	(*value)++;
}

void IncrementQuote(int& value)            //引用
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

	int vtr = 8;							//指针的指针 vtr <-- ptr <-- newptr
	int* ptr = &vtr;
	LOG(ptr);								//打印ptr，也就是vtr变量的内存地址
	*ptr = 10;
	std::cout << ptr << std::endl;
	int** newptr = &ptr;

	std::cin.get();
}