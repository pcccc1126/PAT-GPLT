#include <iostream>

using namespace std;
int main() {
    int n = 0;
    long long f1,f2;
    cin >> f1;
    for(f2 = 1;f2 < f1;f2 = f2 * 10+ 1)
        n++;
    while(1){
        n++;
        if(f2 % f1 == 0){
            cout << f2/f1;
            break;
        } else {
            cout << f2/f1;
            f2 %= f1;
            f2 = f2 * 10+ 1;
        }
    }
    cout << " " << n << endl;
    return 0;
}