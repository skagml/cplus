#include "comfig.h"

int main() {

	int arr[6] = { 2, 71, 59, 33, 94, 25 };

	char str[] = "game over!";

	int MaxVal = findMax(arr, 6);  //��ȯ�� ����

	char maxChar = findChar(str);  //strlen�� �־ �ڵ����� ���� ���� ������ len �ȵ�

	cout << MaxVal << endl;
	cout << maxChar << endl;

	return 0;
}