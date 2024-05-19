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

vector<int> sort_find(vector<int> &array) {
	vector<int> index_array;
	int size = 10;
	int left, right, index;
	sort(array.begin(), array.end());
	left = array[0];
	index = 0;
	for (int i = 0; i < 10; i++) {
		if (left > 0 && array[i] < 0) {
			left = array[i];
			index = i;
		}
	}
	index_array.push_back(index);


	right = array[9];
	index = 9;
	for (int i = 9; i > -1; i--) {
		if (array[i] < 0 && right > 0) {
			right = array[i];
			index = i;
		}
	}
	index_array.push_back(index);

	
	return index_array;
}


int main() {
	srand(time(0));

	int size = 10, digit;
	vector<int> index_array;
	vector<int> array(size);
	bool ticket = true;
	
	for (int i = 0; i < size; i++) {
		digit = -20 + rand() % (20 + 20 + 1);
		array[i] = digit;
	}
	for (short i : array) {
		cout << ' ' << i;
	}
	cout << endl;
	index_array = sort_find(array);
	for (int i = 0; i < index_array.size(); i++) {
		int first = array[i];
		if (first < array[i + 1]) {
			ticket = true;
			break;
		}
		else {
			ticket = false;
			break;
		}
	}
	cout << endl;

	if (ticket == true) {
		for (int i = index_array[0]; i < index_array[1]; i++) {
			cout << array[i];
		}
	}
	else {
		for (short i : array) {
			cout << ' ' << i;
		}
	}
}


