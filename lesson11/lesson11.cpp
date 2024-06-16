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

#define POWS(a,b) pow(a,b)
#define DIVIDE(a) ((a%2==0) ? "even":"odd")
#define pos_neg(a) ((a>0)?"positive":"negative")

using namespace std;



int main() {
	int digit, digit2;

	cout << "\nWrite num1: ";
	cin >> digit;

	cout << "\nWrite num2: ";
	cin >> digit2;

	cout << POWS(digit, digit2);

	cout << endl << DIVIDE(digit) << endl << DIVIDE(digit2);

	cout << endl << pos_neg(digit) << endl << pos_neg(digit2);



	return 0;
}