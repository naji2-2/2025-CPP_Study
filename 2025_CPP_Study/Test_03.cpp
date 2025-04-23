#include <iostream>

// 디폴트 매개변수
int function(int a = 5, int b) {
	return a + b +  1;
}

int main(void) {
	std::cout << function(10, 2) << std::endl;
	std::cout << function(3) << std::endl;
	return 0;
}