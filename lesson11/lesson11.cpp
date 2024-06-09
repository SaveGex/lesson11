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

bool Check_Ip(string& ip) {
	bool ticket = true;
	string result;
	int dots = 0, digit;

	for (int i = 0; i < ip.length(); i++) {
		

		if (ip[i] == '.') {
			dots++;
			digit = stoi(result);
			if (digit < 256 && digit > -1) {
				ticket = true;
			}
			else {
				ticket = false;
			}
		}
		else {
			result += ip[i];
		}
		if (dots > 3) {
			ticket = false;
		}
		if (!ticket) {
			break;
		}
	}
	return ticket;
	
}

string Create_Ip(string ip) {
	cout << "Write ip: ";
	getline(cin, ip);
	return ip;
}

int main() {
	string ip, result;

	ip = Create_Ip(ip);
	bool ticket = Check_Ip(ip);

	if (ticket) {
		cout << "all right";
	}
	else {
		cout << "error";
	}

	return 0;
}

