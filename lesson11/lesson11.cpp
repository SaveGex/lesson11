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

void Math_Op(vector <int> &array,int size, int *suma, int *product_of_digits) {
	*suma = 0;
	*product_of_digits = 1;
	for (int i = 0; i < size; i++) {
		*suma += array[i];
		*product_of_digits *= array[i];
	}
	cout << *suma << ' ' << *product_of_digits;
}

int main() {
	vector <int> array;
	short size = 7;
	int suma, product_of_digits;
	for (short i = 0; i < size; i++) {
		short digit = 1 + rand() % (20 - 1 + 1);
		array.push_back(digit);
	}
	for (auto i : array) {
		cout << ' ' << i;
	}
	cout << endl;
	suma = 0;
	product_of_digits = 1;
	Math_Op(array, size, &suma, &product_of_digits);


	return 0;
}

