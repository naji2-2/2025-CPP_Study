#include <iostream>

// ����Ʈ �Ű�����
int function(int a = 5) {
	return a + 1;
}

int function(void) {
	return 10;
}

int main(void) {
	// �� �Լ��� �ٸ� �Ű������� ������ ������
	// ����Ʈ �Լ��� �� �� ���� �� �� �ֱ� ������
	// ���ڸ� ���� �ʰ� ȣ������ �� �ĺ��Լ��� �����Ͽ� ������ �߻���
	std::cout << function() << std::endl;	// ���� �� �� ����
	std::cout << function(3) << std::endl;
	return 0;
}