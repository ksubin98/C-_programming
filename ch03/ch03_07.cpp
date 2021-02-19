#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class SeletableRandom {
	int x;
public:
	SeletableRandom(int c);
	int next();
	int nextInRange(int a, int b);
};
SeletableRandom::SeletableRandom(int c) {
	x = c; //Ȧ�� ¦�� �޴� �Ű�����
	srand((unsigned int)time(0));
};

int SeletableRandom::next() {
	int y = rand();
	if (x % 2 == 0)//¦���� ��,
		if (y % 2 == 0)
			return y;
		else
			return --y;
};

int SeletableRandom::nextInRange(int a, int b) {
	int y = rand() % (b - a + 1) + a;

	if (x%2 == 0)
		if (y%2== 0)
			return ++y;
		else
			return y;
};


int main() {
	SeletableRandom r(0);
	cout << "-- 0���� " << RAND_MAX << "������ ¦�� ���� ���� 10��--" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.next();
		cout << n << ' ';

	}

	SeletableRandom rr(1);
	cout << endl << endl << "-- 2���� " << "9 ������ Ȧ�� ���� ���� 10 �� --" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.nextInRange(2, 9);
		cout << n << ' ';

	}

	cout << endl;
}
