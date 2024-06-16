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

struct Films{
	string name;
	string author;
	string genre;
	float rating;
	int price;
};

Films Fill() {
	Films film;

	cout << endl;
	cout << "name: ";
	getline(cin, film.name);

	cout << endl;
	cout << "author: ";
	getline(cin, film.author);

	cout << endl;
	cout << "genre: ";
	getline(cin, film.genre);


	cout << endl;
	cout << "rating: ";
	cin >> film.rating;

	cout << endl;
	cout << "price: ";
	cin >> film.price;

	return film;
}

int main() {
	int size = 1;

	Films* array = new Films[size];
	for (int i = 0; i < size; i++) {
		array[i] = Fill();
		cin.ignore();
	}

	for (int i = 0; i < size; i++) {
		cout << array[i].name << "\t" << array[i].author << "\t" << array[i].genre << "\t" << array[i].rating << "\t" << array[i].price << endl;
	}

	return 0;
}