#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows for Floyd's Triangle: ";
    cin >> n;
    int start = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << start;
            start = 1 - start;
        }
        cout << endl;
        if (i % 2 == 1) {
        start = 1;
        } else {
            start = 0;
        }
    }

    return 0;
}
