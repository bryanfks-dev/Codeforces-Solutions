#include <bits/stdc++.h>
using namespace std;

int main() {
    int caseNum;

    // Case count input
    cin >> caseNum;
    
    for (int currCase = 0; currCase < caseNum; currCase++) {
        float a, b, c;

        // Input test case
        // a and b repesents mass of water in the vessels
        // c represents capacity of cup
        cin >> a >> b >> c;

        // Base case
        if (a == b) { // Mass of water in the both vessel is equal
            cout << 0 << endl;

            continue;
        }

        int move = 0; // Vaariable that track number of actions

        // Get the maximum mass of water in vessels
        float *max_vessel = (a > b) ? &a : &b,
              *min_vessel = (a > b) ? &b : &a;

        while (a != b) {
            float halfSubTot = (*max_vessel - *min_vessel) / 2;

            if (halfSubTot <= c) {
                *max_vessel -= halfSubTot;
                *min_vessel += halfSubTot;
            }
            else {
                *max_vessel -= c;
                *min_vessel += c;
            }

            move++;
        }

        cout << move << endl;

        // Math solution
        // cout << ((abs(a - b) - 1) / (2 * c)) - 1 << endl;
        // Explain:
        // abs(a - b) is to search for difference between vessel a and b,
        // then subtract by 1, because we want too keep one of vessel is bigger than the other one
        // the rest will to adapt move needed to balance two vessels
    }
    return 0;
}