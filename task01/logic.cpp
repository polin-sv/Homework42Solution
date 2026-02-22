#include "logic.h"

string count_elements(int array[DEFAULT_SIZE], int length) {
	
	int count_positive = 0;
	int count_negative = 0;
	int count_zero = 0;

	for (int index = 0; index < length; index++)
	{
		if (array[index] > 0) {
			count_positive += 1;
		}
		else {
			if (array[index] < 0) {
				count_negative += 1;
			}
			else {
				count_zero += 1;
			}
		}
	}

	string result = "positive elements " + to_string(count_positive)
		+ "\nnegative elements " + to_string(count_negative)
		+ "\nzero elements " + to_string(count_zero);

	return result;
}