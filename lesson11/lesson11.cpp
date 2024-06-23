#include <iostream>
#include <fstream>
#include <string>
#include <Windows.h>
#include <algorithm>
#include "Bal.h"
#include "Encode.h"
using namespace std;


int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	int asks;
	cout << "Meню завдань\n1) сортування оцінок\n2) Шифрування повідомлень\n Bu6ip: ";
	cin >> asks;
	if (asks == 1) {
		bal();
	}
	else {
		encoding();
	}
	return 0;

}