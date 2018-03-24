#include <iostream>
#include <set>
#include <iomanip>

using namespace std;

struct test {
    double a;
    double b;
    double c;
};

bool operator<(const test &x, const test &y) {
    return x.c > y.c;
}

int main() {
    int jia = 0, yi = 0;
    while (cin >> jia >> yi) {
        int n;
        cin >> n;
        int a[4];
        int c = jia, d = yi;
        for (int i = 0; i < n; i++) {
            cin >> a[0] >> a[1] >> a[2] >> a[3];
            if (a[0] + a[2] == a[1]) {
                if (a[0] + a[2] != a[3]) {
                    c--;
                    if (c < 0) {
                        cout << "A" << endl << yi - d << endl;
                        break;
                    }
                }
            } else if (a[0] + a[2] == a[3]) {
                if (a[0] + a[2] != a[1]) {
                    d--;
                    if (d < 0) {
                        cout << "B" << endl << jia - c << endl;
                        break;
                    }
                }
            }
        }
    }

    return 0;

}
