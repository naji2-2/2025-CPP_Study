#include <iostream>

// 디폴트 매개변수
int function(int a = 5) {
	return a + 1;
}

int function(void) {
	return 10;
}

int main(void) {
	// 두 함수는 다른 매개변수를 가지고 있지만
	// 디폴트 함수는 둘 다 수행 할 수 있기 때문에
	// 인자를 넣지 않고 호출했을 때 후보함수로 생각하여 오류가 발생함
	std::cout << function() << std::endl;	// 실행 할 수 없음
	std::cout << function(3) << std::endl;
	return 0;
}