/* ch04-4
#include <iostream>
#include <string>
using namespace std;

class Sample {
	int* p;
	int size;
public:
	Sample(int n){
		size = n; p = new int[n];
		}
	void read() {
		

	}
	void write() {
		for (int i = 0; i < size; i++) {
			p[i] = i;
			cout << i;
		}
		
	}
	int big();
	~Sample();

};

int main() {
	Sample s(10);
	s.read();
	s.write();
	cout << "���� ū ���� " << s.big() << endl;
}
*/

//ch04-5
/*
#include <iostream>
#include <string>
using namespace std;

int main() {
	cout << "�Ʒ��� �� ���� �Է��ϼ���.(exit�� �Է��ϸ� �����մϴ�.)" << endl;
	cout << ">> ";
	string s;
	cin >> s;
	s.
} */

//ch04-06
/*
#include <string>
#include <iostream>
using namespace std;

int main() {
	cout << "�Ʒ��� �� ���� �Է��ϼ���.(exit�� �Է��ϸ� �����մϴ�.)" << endl;
	
	string s;
	for (;;) {
		cout << ">> ";
		getline(cin, s);
		if (s == "exit") break;
		for (int i = s.length()-1; i>=0 ; --i) {
			cout << s[i];
			
			
		}
		cout << endl;
	}
}
*/

//ch04-7
#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	void setRadius(int radius) {
		this->radius = radius;
	}
	double getArea() {
		return 3.14 * radius * radius;
	}
};

int main() {
	Circle circlArray[3];
	int count=0;
	for (int i = 0; i < 3; ++i){
		cout << "�� " << i +1 << "�� ������ >> ";
		int a;
		cin >> a;
		circlArray[i].setRadius(a);
		if (circlArray[i].getArea() > 100)
			++count;
		

	}
	cout << "������ 100���� ū ����" << count << "�� �Դϴ�." << endl;
}