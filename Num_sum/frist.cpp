#include <iostream>
using namespace std;


	int sumNum(int a, int b) {
		int sum = 0;

		for (int i = a; i <= b; i++)
			sum += i;
		return sum;
	}

int main() {
	int x, y;
	cout << "ù ��° ��: ";
	cin >> x;
	cout << "�� ��° ��: ";
	cin >> y;
	cout << x << "���� " << y << "���� ���� ����� ";
	cout << sumNum(x, y);

} 