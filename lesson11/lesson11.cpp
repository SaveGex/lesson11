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

void Funcition(int* array, int size) {
	int positive = 0, negative = 0, zeros = 0;
	for (int i = 0; i < size; i++) {
		if (*(array + i) > 0) {
			positive++;
		}
		else if (*(array + i) < 0) {
			negative++;
		}
		else if (*(array + i) == 0) {
			zeros++;
		}
	}
	int* pos_array = new int[positive];
	int* neg_array = new int[negative];
	int* zero_array = new int[zeros];
	int index_p = 0;
	int index_n = 0;
	int index_z = 0;

	for (int i = 0; i < size; i++) {
		if (*(array + i) > 0) {
			*(pos_array + index_p) = *(array + i);
			index_p++;
		}
		else if (*(array + i) < 0) {
			*(neg_array + index_n) = *(array + i);
			index_n++;

		}
		else if (*(array + i) == 0) {
			*(zero_array + index_z) = *(array + i);
			index_z++;
		}
	}
	cout << endl;
	for (int i = 0; i < positive; i++) {
		cout << *(pos_array + i) << ' ';
	}
	cout << endl;
	for (int i = 0; i < negative; i++) {
		cout << *(neg_array + i) << ' ';
	}
	cout << endl;
	for (int i = 0; i < zeros; i++) {
		cout << *(zero_array + i) << ' ';
	}
	delete[]pos_array;
	delete[]neg_array;
	delete[]zero_array;
}
int main(){
	srand(time(nullptr));
	int const size = 20;
	int array[size];
	for (int i = 0; i < size; i++) {
		array[i] = -15 + rand() % (21); 
		cout << array[i]<<' ';
	}
	cout << endl;
	Funcition(array, size);


	return 0;
}

