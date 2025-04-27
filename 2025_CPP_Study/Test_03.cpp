#include <iostream>

// 디폴트 매개변수
// 오버로딩 모호성 해결
// 방법 2: 이름을 다르게 해서 오버로딩 문제 없애기
int functionWithParam(int a = 5) {
	return a + 1;
}

int function(void) {
	return 10;
}

int main(void) {
	std::cout << function() << std::endl;
	std::cout << functionWithParam(3) << std::endl;
	return 0;
}