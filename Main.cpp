#include "Main.h"
#include <iostream>
#include <string>

using namespace std;

int main() {
	cout << "C++�� Ȱ���� ���� ��û ���α׷��Դϴ�." << endl;
	cout << "Java�� ó�� ��� ���� ���� ������ C++ ���θ� �����մϴ�." << endl;
	
	// if( login ) {}
	// else {}
	execute();
}

bool login() {
	string id;
	string password;
	bool isSuccess = false;

	cout << "===================================================" << endl;
	cout << "ID�� �Է��ϼ���: ";
	cin >> id;
	cout << "PW�� �Է��ϼ���: ";
	cin >> password;

	// �α��� �Լ�
	return isSuccess;
}

void execute() {
	int choice;
	bool isRun = true;
	while (isRun) {
		cout << "================== �۾��� �����ϼ��� ==================" << endl;
		cout << "1. ������û" << endl;
		cout << "2. ����������" << endl;
		cout << "0. ����" << endl;
		cin >> choice;

		switch (choice) {
		case 1:
			// ���� ��û ������
			break;
		case 2:
			// ����������
			break;
		case 0:
			isRun = false;
			break;
		}
	}
}