#include <iostream>
using namespace std;

namespace A_area {
	void function() {
		cout << "A���� ������ �Լ�" << endl;
	}
}

namespace B_area {
	void function() {
		cout << "B���� ������ �Լ�" << endl;
	}
}

int main() {
	A_area::function();
	B_area::function();
	return 0;
}