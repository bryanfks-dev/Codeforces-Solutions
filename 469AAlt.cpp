#include <bits/stdc++.h>
using namespace std;

int main() {
    map<int, int> map;

    int max_lvl;

    cin >> max_lvl;

    int len, num;

    for (int i = 0; i < 2; i++) {
        cin >> len;

        for (int j = 1; j <= len; j++) {
            cin >> num;

            map[num] = j;
        }
    }

    cout << (map.size() == max_lvl ? "I become the guy." : "Oh, my keyboard!");

    return 0;
}