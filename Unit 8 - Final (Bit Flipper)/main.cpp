#include <iostream>
using namespace std;

void flipBit(int* array, int size, int nSkips) {
	int i;
	if (nSkips > size) { cout << "Invalid number of bits to be skipped has been entered." << endl; }

	if (array[0] == 0) { array[0] = 1; }
	else if (array[0] == 1) { array[0] = 0; }

	for (i = nSkips; i < size; i = i + nSkips)
	{
		if (array[i] == 0) { array[i] = 1; }
		else if (array[i] == 1) { array[i] = 0; }
	}
}

int main() {
	int len, i, j, pl;
	cin >> len;

	if (len <= 0)
	{
		cout << "Invalid Size. Exiting Program...";
		return 1;
	}

	int* arr = new int[len] { 0 };
	for (j = 0; j < 3; j++)
	{
		cin >> pl;
		if (pl >= len) { cout << "Invalid number of bits to be skipped has been entered." << endl; }
		else {
			flipBit(arr, len, pl);

			for (i = 0; i < len; i++) { cout << arr[i]; }
			cout << endl;
		}
	}
	
	delete arr;
	return 0;
}