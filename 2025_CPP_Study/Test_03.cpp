#include <iostream>

// ����Ʈ �Ű�����
// �����ε� ��ȣ�� �ذ�
// ��� 2: �̸��� �ٸ��� �ؼ� �����ε� ���� ���ֱ�
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