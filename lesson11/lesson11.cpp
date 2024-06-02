#include <iostream>
#include <iomanip>
#include <Windows.h>
#include <ctime>
#include <cstdlib>
#include <vector>
#include <algorithm>
#include <string>
//bonk2 = find(array.begin(), array.end(), bot1);
//index_bot = distance(array.begin(), bonk2);



using namespace std;

void Del(int* array, int size) {
	int counter = 0;
	for (int i = 0; i < size; i++) {
		if (*(array + i) >= 0) {
			counter++;
		}
	}
	int* array2 = new int[counter];
	int index = 0;
	for (int i = 0; i < size; i++) {
		if (*(array + i) >= 0) {
			*(array2 + index) = *(array + i);
			index++;
		}
	}
	cout << endl;
	for (int i = 0; i < counter; i++) {
		cout << *(array2 + i) << ' ';
	}
	delete[] array2;
}
int main(){
	srand(time(nullptr));
	int size;
	cout << "Write size: ";
	cin >> size;
	int* array = new int[size];
	for (int i = 0; i < size; i++) {
		*(array + i) = -15 + rand() % (15 + 15 + 1);
		cout << *(array + i) << ' ';
	}
	Del(array, size);
	delete[] array;

	return 0;
}

