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

int main(){
    srand((time(0)));
    int block = 2, row = 5, col = 5;
    int*** pArr = new int** [row];

    for (int k = 0; k < block; k++) {
        pArr[k] = new int* [row];
        for (int i = 0; i < row; i++) {
            pArr[k][i] = new int[col];
            for (int j = 0; j < col; j++) {
                pArr[k][i][j] = 10 + rand() % 39;
                cout << pArr[k][i][j] << ' ';
            }
            cout << endl;
        }
        cout << endl;
    }

    for (int i = 0; i < block; i++) {
        for (int j = 0; j < row; j++) {
            delete[]pArr[i][j];
        }
        delete[]pArr[i];
    }
    delete[] pArr;


	return 0;
}

