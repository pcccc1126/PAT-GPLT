#include <iostream>
#include <cstring>

using namespace std;
int * transform(int, int *);
int main() {
    int L, N;
    cin >> L >> N;
    int m[L];
    char result[L];
    memset(m, 0, sizeof(int)* L);
    transform(N-1, m);
    for (int i = 0; i < L; ++i) {
        result[i] = (char)(122- m[L-i-1]);
    }
    cout << result;
    return 0;
}
int * transform(int num, int * m) {
    int i = 0;
    do {
        m[i] = num%26;
        i++;
        num /= 26;
    } while (num);
    return m;
}