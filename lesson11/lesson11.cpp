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

void cleaning(int** pArr, int row, int  col) {
    bool ticket = true;
    int counter = 0;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (pArr[i][j] == 0) {
                ticket = false;
                break;
            }
        }
        if (ticket) {
            counter++;
        }
        ticket = true;
    }
    int** array2 = new int* [counter];
    int index = 0;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (pArr[i][j] == 0) {
                ticket = false;
                break;
            }
        }
        if (ticket) {
            array2[index] = new int[col];
            for (int j = 0; j < col; j++) {
                array2[index][j] = pArr[i][j];
                cout << array2[index][j] << ' ';
            }
            cout << endl;
            index++;
        }
        ticket = true;
    }
    for (int i = 0; i < counter; i++) {
        delete[]array2[i];
    }
    delete[] array2;

}

int main(){
    srand((time(0)));
    int row, col;

    cout << "write rows and col: ";
    cin >> row >> col;

    int** pArr = new int* [row];

    for (int i = 0; i < row; i++) {

        pArr[i] = new int[col];

        for (int j = 0; j < col; j++) {

            pArr[i][j] = rand() % 10;

            cout << pArr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    cleaning(pArr, row, col);


    for (int i = 0; i < row; i++) {

        delete[] pArr[i];

    }

    delete[] pArr;

	return 0;
}

