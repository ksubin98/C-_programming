#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
	const char* file = "c:\\windows\\system.ini";
	ifstream fin(file);
	if (!fin) {
		cout << file << "���� ����" << endl;
		return 0;
	}

	string num;
	int i = 1;// �ټ��� �뵵
	int ii = 0; // 0���̴� �뵵

	while (1) {
		getline(fin, num);
		if (fin.eof()) return 0;
		if (0 < i && i <= 9) cout << ii << i++ << ": " << num << endl;
		else cout << i++ << ": " << num << endl;
		
	}

	fin.close();
}