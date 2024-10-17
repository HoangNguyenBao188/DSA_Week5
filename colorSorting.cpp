#include <bits/stdc++.h>
using namespace std;

void sortColors(int colors[], int n) {
    int red=0,white=0,blue=0;

    for (int i=0; i<n; i++) {
        if (colors[i] == 0) red++;
        else if (colors[i] == 1) white++;
        else if (colors[i] == 2) blue++;
    }
    for (int i = 0; i < red; i++) {
        cout << "do ";
    }
    for (int i = red; i < red + white; i++) {
        cout << "trang ";
    }
    for (int i = red + white; i < n; i++) {
        cout << "xanh ";
    }
}

int main() {
    int n;
    cout << " NHap so luong mau, sau do nhap ma so mau (red=0; white=1; blue=2): ";
    cin >> n;
    int colors[n];
    for(int i=0;i<n;i++){
        cin >> colors[i];
    }

    sortColors(colors, n);
    return 0;
}
