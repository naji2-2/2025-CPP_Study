#include <iostream>
using namespace std;

namespace A_area {
	void function() {
		cout << "A에서 정의한 함수" << endl;
	}
}

namespace B_area {
	void function() {
		cout << "B에서 정의한 함수" << endl;
	}
}

int main() {
	A_area::function();
	B_area::function();
	return 0;
}