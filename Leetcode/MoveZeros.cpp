#include <iostream>
#include<vector>
// // Alternatively, you can use #include <bits/stdc++.h>

using namespace std;

int main() {
    vector<int> num = {1, 6, 4, 0, 0, 8, 2};
    int n = num.size();

    int j = 0;

    for (int i = 0; i < n; i++) {
        if (num[i] != 0) {
            num[j] = num[i];
            j++;
        }
    }

    while (j < n) {
        num[j] = 0;
        j++;
    }

    for (int i = 0; i < n; i++) {
        cout << num[i] << " ";
    }

    return 0;
}