#include <iostream>

// 디폴트 매개변수
int function(int a = 5) {
	return a + 1;
}

int main(void) {
	std::cout << function() << std::endl;	// 6
	std::cout << function(3) << std::endl;	// 4
	return 0;
}