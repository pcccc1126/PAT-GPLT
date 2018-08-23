#include <iostream>
#include <cstring>

using namespace std;
void win(char, int, int);
int main() {
    int Pa, Pb;
    cin >> Pa >> Pb;
    int A = 0, B = 0, vote[3];
    cin >> vote[0] >> vote[1] >> vote[2];
    for (int i = 0; i < 3; ++i) {
        if (vote[i] == 0) A++;
        else B++;
    }
    if (A == 3) win('a', Pa, A);
    else if (B == 3) win('b', Pb, B);
    else Pa > Pb? win('a', Pa, A): win('b', Pb, B);
    return 0;
}
void win(char A, int B, int C) {
    cout << "The winner is " << A << ": " << B << " + " << C << endl;
}