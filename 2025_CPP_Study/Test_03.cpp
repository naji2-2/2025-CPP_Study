#include <iostream>

// 디폴트 매개변수
// 디폴트 값을 주려면 뒤에 있는 변수에 주기
int function(int a, int b = 5) {
	return a + b + 1;
}

int main(void) {
	std::cout << function(10, 2) << std::endl;
	std::cout << function(3) << std::endl;
	return 0;
}