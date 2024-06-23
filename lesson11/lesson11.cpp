#include <iostream>
#include <fstream>
#include <string>
#include <Windows.h>
#include <algorithm>
using namespace std;


struct Students {
	string name;
	string surname;
	int	rating;
};

bool PN(Students n1, Students n2) {
	return n1.rating > n2.rating;
}

int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	ifstream file("output.txt");

	if (!file){
		cout << "Does't not exists";
		return 1;
	}

	Students* array = new Students[20];
	int count = 0;

	for (int i = 0; i < 20; i++) {
		if (file >> array[i].name >> array[i].surname >> array[i].rating){
			count++;
		}
		else {
			break;
		}
	}

	cout << count;

	sort(array, array + 20, PN);

	for (int i = 0; i < count; i++) {
		cout << i + 1 << ' ' << array[i].name << array[i].surname << array[i].rating<<endl;
	}

	file.close();

	return 0;

}