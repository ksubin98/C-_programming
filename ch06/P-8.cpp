#include<iostream>
using namespace std;

class Trace {
public:
	string tag;
	string dbuging;
	static void put(string text, string msg) {
		tag = text;
	}
	static void print() {
		cout << "----- ��� Trace ������ ����մϴ�. -----" << endl;

	}
	static void print(string text);

};

void f() {
	int a, b, c;
	cout << "�� ���� ������ �Է��ϼ���>>";
	cin >> a >> b;
	Trace::put("f()", "������ �Է� �޾���");
	c = a + b;
	Trace::put("f()", "�� ���");
	cout << "���� " << c << endl;
	
}

int main() {
	Trace::put("main()", "���α׷� �����մϴ�");
	f();
	Trace::put("main()", "����");

	Trace::print("f()");
	Trace::print();
}