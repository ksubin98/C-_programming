#include <iostream>
using namespace std;

void get1() {

	cout << "�Ʒ��� �Է��ϼ���." << endl;
	char ch; // ���ڿ�
	int n = 0; // ���� ī��Ʈ
	while ((ch = cin.get()) != EOF) {
		cin.get(ch); //���� �б�
		if (cin.eof()) break;
		//cout.put(ch);

		if (ch == ' ') // ��ĭ�̸� ī��Ʈ ����
			n++;
		

	}
	cout << "������ ��  " << n << "�� �Դϴ�." << endl;
}

int main() {
	get1();
}
