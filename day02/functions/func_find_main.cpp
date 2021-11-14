#include "comfig.h"

int main() {

	int arr[6] = { 2, 71, 59, 33, 94, 25 };

	char str[] = "game over!";

	int MaxVal = findMax(arr, 6);  //반환값 저장

	char maxChar = findChar(str);  //strlen이 있어서 자동으로 수를 세기 때문에 len 안들어감

	cout << MaxVal << endl;
	cout << maxChar << endl;

	return 0;
}