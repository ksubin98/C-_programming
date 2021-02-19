#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class Random {
public:
	Random();
	int next();
	int nextInRange(int a, int b);
};
Random::Random() {
	srand((unsigned int)time(0));//���α׷� ���� �� ����, ���ο� ���尪 ���� �� ���ο� ���� �̱�.
								// time ���� �� ��ȯ
};

int Random::next() {
	return(rand() / 2);
};

int Random::nextInRange(int a, int b) {
	return ((rand() % (b - a + 1) + a)/2 +1);
};


int main() {
	Random r;
	cout << "-- 0���� " << RAND_MAX << "������ ¦�� ���� ���� 10��--" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.next();
		cout << n << ' ';

	}

	cout << endl << endl << "-- 2���� " << "4 ������ Ȧ�� ���� ���� 10 �� --" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.nextInRange(2, 4);
		cout << n << ' ';

	}

	cout << endl;
}
