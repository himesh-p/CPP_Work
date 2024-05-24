
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    int num;
    ofstream evenFile("even.txt");
    ofstream oddFile("odd.txt");

    if (!evenFile.is_open() || !oddFile.is_open()) {
        cerr << "Error opening file!" << endl;
        return 1;
    }

    cout << "Enter numbers (enter -1 to stop):" << endl;
    while (true) {
        cin >> num;
        if (num == -1) break;
        if (num % 2 == 0) {
            evenFile << num << endl;
        } else {
            oddFile << num << endl;
        }
    }

    evenFile.close();
    oddFile.close();

    cout << "Numbers have been written to the files." << endl;

    return 0;
}