#include <iostream>
#include <Windows.h>

int add(int a,int b) {
	std::cout << "function 1" << std::endl;
	std::cout << a + b << std::endl;
	return a + b;
}

int add(int a, int b, int c = 1) {  
	std::cout << "function 2" << std::endl;
	std::cout << a + b + c << std::endl;
	return a + b;
}

int main(void) {
	std::cout << "hello world!" << std::endl;
	//add(1, 2);  //“add” : 对重载函数的调用不明确
	add(1, 2, 3);
	system("pause");
	return 0;
}