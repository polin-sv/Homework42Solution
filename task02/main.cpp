#include "logic.h"

int main() {
	int array[DEFAULT_SIZE];
	int length;

	do {
		system("cls");
		cout << "input size of array: ";
		cin >> length;
	} while (length <= 0);


	cout << "input your array elements: ";
	for (int index = 0; index < length; index++)
	{
		cin >> array[index];
	}

	string msg = check_mirror(array, length) ? "yes" : "no";

	cout << msg;

	return 0;
}