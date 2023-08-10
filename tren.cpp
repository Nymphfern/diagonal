#include <iostream>
#include <ctime>

using namespace std;

void main() {

    setlocale(LC_ALL, "Russian");

    const int rows = 10;
    const int cols = 10;

    int mas[rows][cols];


    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {

            if (i == j) {

                mas[i][j] = 1;
            }
            else {

                mas[i][j] = 0;
            }
            cout << mas[i][j]<< "\t";
        }
        cout << endl;
    }
}


           

