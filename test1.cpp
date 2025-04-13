#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    int i = n;
    long long outerLoopCount = 0; // Count for outer loop
    long long middleLoopCount = 0; // Count for middle loop
    long long innerLoopCount = 0; // Count for inner loop

    while (i > 1) {
        outerLoopCount++; // Increment for each iteration of outer loop
        int j = i;

        while (j < n) {
            middleLoopCount++; // Increment for each iteration of middle loop
            int k = 0;

            while (k < n) {
                innerLoopCount++; // Increment for each iteration of inner loop
                k += 2;
            }

            j *= 2;
        }

        i /= 2;
    }

    cout << "Outer loop executed: " << outerLoopCount << " times" << endl;
    cout << "Middle loop executed: " << middleLoopCount << " times" << endl;
    cout << "Inner loop executed: " << innerLoopCount << " times" << endl;
    cout << "Total iterations: " << (outerLoopCount + middleLoopCount + innerLoopCount) << " times" << endl;

    return 0;
}
