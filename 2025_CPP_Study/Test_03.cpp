#include <iostream>

// ����Ʈ �Ű�����
// ����Ʈ ���� �ַ��� �ڿ� �ִ� ������ �ֱ�
int function(int a, int b = 5) {
	return a + b + 1;
}

int main(void) {
	std::cout << function(10, 2) << std::endl;
	std::cout << function(3) << std::endl;
	return 0;
}