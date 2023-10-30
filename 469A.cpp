#include <bits/stdc++.h>
using namespace std;

int main() {
    int max_lvl;

    // Input max level
    cin >> max_lvl;

    int len, num;
    list<int> littleX, littleY;

    // Input littleX
    cin >> len;
    for (int i = 0; i < len; i++) {
        cin >> num;

        littleX.push_back(num);
    }

    // Input littleY
    cin >> len;
    for (int i = 0; i < len; i++) {
        cin >> num;
        
        littleY.push_back(num);
    }

    bool filled = true;

    for (int i = 1; i <= max_lvl; i++) {
        list<int>::iterator it = find(littleX.begin(), littleX.end(), i);

        // Check if little x can beat the level
        if (it == littleX.end()) {
            it = find(littleY.begin(), littleY.end(), i);

            // Check if little y can beat the level
            if (it == littleY.end()) {
                filled = false;

                break;
            }
        }
    }

    // Print result
    cout << (filled ? "I become the guy." : "Oh, my keyboard!") << endl;

    return 0;
}