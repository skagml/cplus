/*#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
	
	  //upand down ����
	  //������ ���ڰ� ������ "�����Դϴ�!", break
	  //���̸� ���ڰ� �ĺ��� ũ�� "�ʹ� Ŀ��!", �ݺ�
	  //���̸� ���ڰ� �ĺ��� ������ "�ʹ� �۾ƿ�!", �ݺ�
	  

	int com, min = 1, max = 100, guess, i;
	
	srand((unsigned)time(NULL));  //0~43��
	com = rand() % 100 + 1;  //�� ���� ����

	for (i = 0; i < 10; i++) {
		cout << "[" << i + 1 << "ȸ]" << min << " ~ " << max << " ������ �� ���� => " << endl;
		cin >> guess;

		//����ó��
		if (guess == com) {
			cout << "�����Դϴ�!" << endl;
			break;
		}
		else if (guess < com) {
			cout << "�ʹ� �۾ƿ�!" << endl;
			min = guess;
		}
		else {
			cout << "�ʹ� Ŀ��!" << endl;
			max = guess;
		}
	}

	cout << "���� : " << com << endl;
	cout << "���� ���� : " << (10 - i) * 10 << endl;

	return 0;
}*/