#include <iostream>
#include <cmath>
#include <string>

using namespace std;
int main() {
    int address;
    int N;
    cin >> address >> N;
    int root[N][3];
    for (int i = 0; i < N; ++i) {
        cin >> root[i][0] >> root[i][1] >> root[i][2];
    }
    int test[N], rep = 0;
    for (int j = 0; j < N; ++j) {
        int isRep = 0;
        if (j == 0) test[j] = abs(root[j][1]);
        else {
            for (int i = 0; i < j - rep; ++i) {
                if (abs(root[j][1]) == test[i]) {
                    rep++;
                    isRep = 1;
                    break;
                }
            }
            if (isRep == 0) test[j - rep] = abs(root[j][1]);
        }
    }
    int aft[N - rep][3], del[rep][3], mark= 0, k= 0;
    while(1) {
        if (root[k][0] == address) {
            aft[mark][0] = root[k][0];
            aft[mark][1] = root[k][0];
            aft[mark][2] = root[k][2];
            address = aft[mark][2];
            if (mark == N- rep- 1) break;
            else k = 0;
            mark++;
        } else k++;
    }
    for (int l = 0; l < N - rep; ++l) {
        cout << aft[l][0] << ' ' << aft[l][2] << endl;
    }
    return 0;
}