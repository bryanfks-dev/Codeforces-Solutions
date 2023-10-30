#include <bits/stdc++.h>
using namespace std;

int main() {
    int first_cost, money, num_of_banana;

    // Input here
    cin >> first_cost >> money >> num_of_banana;

    int total_cost = 0;

    // Find the sum of banana cost
    for (int i = 1; i <= num_of_banana; i++)
        total_cost += i * first_cost;

    // Print the money to borrow
    cout << (total_cost <= money ? 0 : total_cost - money) << endl;
    
    return 0;
}