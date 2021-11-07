/*#include <iostream>
using namespace std;

int main() {

	int age;
	char name[20];

	cout << "당신의 이름을 입력하세요 : ";
	//cin >> age; // >>방향이 변수를 향함, 엔터단위로 입력받음, 띄어쓰기하면 공백이 다음에 자동 입력됨, 공백 처리 불가
	cin.getline(name, sizeof(name)); //getline 자료의 크기만큼 처리(줄단위로 입력받음)
	cout << "당신의 이름은 " << name << " 이군요!" << endl;

	cout << "당신의 나이를 입력하세요 : ";
	cin >> age;
	cout << "당신의 나이는 " << age << " 세 이군요!" << endl;

	return 0;
}*/