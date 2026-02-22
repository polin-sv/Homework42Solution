#include "logic.h"

bool count_order(int array[DEFAULT_SIZE], int length) {
	bool result = false;

	for (int index = 0; index < length; index++)
	{
		if (array[index] + 1 == array[index + 1]) {
			result = true;
		}

	}

	return result;
}