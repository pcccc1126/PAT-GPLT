#include <iostream>
#include <map>

using namespace std;
map<string,int>mp;
int main() {
    string A, B, temp;
    int mark = 0;
    while (cin >> temp) {
        if (temp == ".") break;
        if (mp[temp]) continue;
        mp[temp]++;
        mark++;
        if (mark == 2) A = temp;
        else if (mark == 14) {
            B = temp;
            break;
        }
    }
    if (mark == 14)
        cout << A << " and " << B << " are inviting you to dinner..." << endl;
    else if (mark >= 2)
        cout << A << " is the only one for you..." << endl;
    else
        cout << "Momo... No one is for you ..." << endl;
    return 0;
}