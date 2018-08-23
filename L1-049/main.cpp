#include <iostream>
#include <cstring>

using namespace std;
int sum(int *, int);
void sort(int *, int);
int main() {
    int N, nor = 1;
    cin >> N;
    int school[N], cpy[N];
    for (int i = 0; i < N; ++i) {
        cin >> school[i];
    }
    int mark[N], res[N][150];
    for (int j = 0; j < N; ++j) {
        mark[j] = school[j] * 10;
    }
    memcpy(cpy, school, sizeof(int) * N);
    sort(cpy, N);
    int tes = 0, isFir = 1;
    for (int k = 0; nor <= sum(cpy, N); ++k) {
        if (N == 1) {
            res[k % N][k / N] = nor;
            nor += 2;
        } else {
            if (tes == N - 1) {
                if (isFir == 1) {
                    isFir = 0;
                    nor++;
                }
                if (k / N <= (10 * school[k % N]) - 1) {
                    res[k % N][k / N] = nor;
                    nor += 2;
                }
            } else {
                if (k / N <= (10 * school[k % N]) - 1) {
                    res[k % N][k / N] = nor;
                    nor++;
                    tes = 0;
                } else
                    tes++;
            }
        }
    }
    for (int l = 0; l < N; ++l) {
        cout << '#' << l + 1 << endl;
        for (int i = 0; i < school[l] * 10; ++i) {
            if (i % 10 == 9) cout << res[l][i] << endl;
            else cout << res[l][i] << ' ';
        }

    }
    return 0;
}
int sum(int * temp, int N) {
    int result = 0;
    for (int j = N - 1; j >= 0; --j) {
        if (j == 0)
            result += (temp[j] - temp[j + 1]) * 20;
        else if (j == N - 1)
                result += temp[j] * (j + 1) * 10;
        else
                result += (temp[j] - temp[j + 1]) * (j + 1) * 10;
    }
    return result;
}
void sort(int *A, int N) {
    for (int i = 0; i < N; ++i) {
        for (int j = i + 1; j < N; ++j) {
            if (A[j] > A[i]) {
                int temp = A[j];
                A[j] = A[i];
                A[i] = temp;
            }
        }
    }
}