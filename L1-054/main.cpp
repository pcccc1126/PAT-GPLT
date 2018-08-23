#include <iostream>

using namespace std;
int main() {
    char mark;
    int row;
    cin >> mark >> row;
    getchar();
    int character[row][row];
    for (int j = 0; j < row; ++j) {
        for (int i = 0; i < row; ++i) {
            character[j][i] = 1;
        }
    }
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < row; ++j) {
            int input = getchar();
            if (input == ' ') character[i][j] = 0;
        }
        getchar();
    }

    int isSymmetric = 1;

    for (int l = 0; l < row; ++l) {
        for (int i = 0; i < row; ++i) {
            if (character[l][i] != character[row-1-l][row-1-i]) {
                isSymmetric = 0;
                break;
            }
        }
    }
    if (isSymmetric == 1) {
        cout << "bu yong dao le" << endl;
        for (int i = 0; i < row; ++i) {
            for (int j = 0; j < row; ++j) {
                if (character[i][j] == 1) cout << mark;
                else cout << ' ';
            }
            cout << endl;
        }
    }
    else {
        int dir[row][row];
        for (int i = 0; i < row; ++i) {
            for (int j = 0; j < row; ++j) {
                dir[i][j] = character[row - 1 - i][row - 1 - j];
            }
        }
        for (int k = 0; k < row; ++k) {
            for (int i = 0; i < row; ++i) {
                if (dir[k][i] == 1) cout << mark;
                else cout << ' ';
            }
            cout << endl;
        }
    }
    return 0;
}