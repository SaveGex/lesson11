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



typedef struct {

    string name;

    char gender;

    double GPA;

} Student;

void Counter(Student* asd, int size) {
    int countM = 0, countF = 0;
    double scoreM = 0, scoreF = 0;
    for (int i = 0; i < size; i++) {
        if (asd[i].gender == 'M') {
            countM++;
            scoreM += asd[i].GPA;
        }
        if (asd[i].gender == 'F') {
            countF++;
            scoreF += asd[i].GPA;
        }
    }
    float score1 = scoreF / countF;
    float score2 = scoreM / countM;
    if (score1 > score2) {
        cout << "GPA boys big than girls";
        cout << endl << score1 << "  |   " << score2;
    }        

    else {
        cout << "GPA girls big than boys";
        cout << endl << score1 << "  |   " << score2;

    }
}


int main() {
    Student asd[]{
        {"name", 'M', 9.1},
        {"rased", 'F', 1.2},
        {"dfs", 'M', 1.9},
        {"shfgd",'F', 10.6},
        {"hjfikls",'M', 5.6}

    };
    int size = sizeof(asd) / sizeof(asd[0]);

    Counter(asd, size);
}