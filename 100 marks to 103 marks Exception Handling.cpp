#include <iostream>
using namespace std;
int main() {
    int maxMarks = 100;
    int yourScore = 103;

    try {
        if (yourScore > maxMarks) {
            throw "Score exceeds the maximum possible marks!";
        }
        cout << "Your score: " << yourScore << "/" << maxMarks << endl;
    } catch (const char* errorMsg) {
        // Handle the exception
        cout << errorMsg << endl;
        cout << "You are smart!" << endl;
    }

    return 0;
}

