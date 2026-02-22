#include "logic.h"

bool check_mirror(int array[DEFAULT_SIZE], int length) {
	bool result = false;

	for (int index = 0; index < length; index++)
	{

		if (array[index] == array[length - 1 - index]) {
			result = true;
		}
		
	}

	return result;
}