#include <iostream>

// ����Ʈ �Ű�����
// �����ε� ��ȣ�� �ذ�
// ��� 1: ����Ʈ ���ڸ� �����ϰų� �ϳ��� ����
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