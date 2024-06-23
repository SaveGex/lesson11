#include <iostream>
#include <fstream>
#include <string>
#include <Windows.h>
#include <algorithm>
using namespace std;

struct Morze {
	char sym;
	const char* symbols;
};

Morze array[]{
   {'A', ".-"}, {'B', "-..."}, {'C', "-.-."}, {'D', "-.."}, {'E', "."},
   {'F', "..-."}, {'G', "--."}, {'H', "...."}, {'I', ".."}, {'J', ".---"},
   {'K', "-.-"}, {'L', ".-.."}, {'M', "--"}, {'N', "-."}, {'O', "---"},
   {'P', ".--."}, {'Q', "--.-"}, {'R', ".-."}, {'S', "..."}, {'T', "-"},
   {'U', "..-"}, {'V', "...-"}, {'W', ".--"}, {'X', "-..-"}, {'Y', "-.--"},
   {'Z', "--.."}
};

int encoding() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	string result;
	char message[10000];

	cin.ignore();

	cout << "Write message for encryption";

	fgets(message, sizeof(message), stdin);

	char* ptr = message;

	for (int i = 0; message[i] != '\0'; i++) {
		*ptr++ = toupper(message[i]);
	}

	for (int i = 0; message[i] != '\0'; i++) {
		for (Morze letter : ::array) {
			if (letter.sym == message[i]) result += letter.symbols;
		}
	}
	cout << message;

	string fileName;
	cout << "Write name of file";
	getline(cin, fileName);
	ofstream f(fileName + ".txt");
	if (f) {
		f << "Your message: " << message << endl;
		f << "Encode morze: " << result << endl;
		f.close();
		cout << "All rigth" << endl;
	}
	else {
		cout << "file doesn't exists";
		return 1;
	}

	return 0;

}