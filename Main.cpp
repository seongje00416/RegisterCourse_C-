#include "Main.h"
#include <iostream>
#include <string>

using namespace std;

int main() {
	cout << "C++을 활용한 수강 신청 프로그램입니다." << endl;
	cout << "Java를 처음 배울 때와 같은 순서로 C++ 공부를 시작합니다." << endl;
	
	// if( login ) {}
	// else {}
	execute();
}

bool login() {
	string id;
	string password;
	bool isSuccess = false;

	cout << "===================================================" << endl;
	cout << "ID를 입력하세요: ";
	cin >> id;
	cout << "PW를 입력하세요: ";
	cin >> password;

	// 로그인 함수
	return isSuccess;
}

void execute() {
	int choice;
	bool isRun = true;
	while (isRun) {
		cout << "================== 작업을 선택하세요 ==================" << endl;
		cout << "1. 수강신청" << endl;
		cout << "2. 마이페이지" << endl;
		cout << "0. 종료" << endl;
		cin >> choice;

		switch (choice) {
		case 1:
			// 수강 신청 페이지
			break;
		case 2:
			// 마이페이지
			break;
		case 0:
			isRun = false;
			break;
		}
	}
}