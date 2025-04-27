#include <iostream>

// 디폴트 매개변수
// 오버로딩 모호성 해결
// 방법 1: 디폴트 인자를 제거하거나 하나만 정의
int function(int a) {
	return a + 1;
}

int function(void) {
	return 10;
}

int main(void) {
	std::cout << function() << std::endl;
	std::cout << function(3) << std::endl;
	return 0;
}