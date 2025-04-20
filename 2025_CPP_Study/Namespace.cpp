#include <iostream>
using namespace std;

void function() {
	cout << "A에서 정의한 함수" << endl;
}

void function() {
	cout << "B에서 정의한 함수" << endl;
}

int main() {
	function();
	function();
	return 0;
}