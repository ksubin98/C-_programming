#include <iostream>
using namespace std;

class C {
public:
	C() { cout << "������ C" << endl; }
	~C() { cout << "�Ҹ��� C" << endl;}
};



class A :public C {
public:
	A() { cout << "������ A" << endl; }
	~A() { cout << "�Ҹ��� A" << endl; }
};

class B :public A{
public:
	B() { cout << "������ B" << endl; }
	~B() { cout << "�Ҹ��� B" << endl; }
};



int main() {
	B b;
	return 0;
}