#include <iostream>
using namespace std;


unsigned long FirstFactorial(unsigned long num)
{
    if (num > 18) {
        cout << "number should belong to [1,18];\n";
        return -1;
    }

    if (num == 1 || num == 0) {
        return 1;
    }

    return FirstFactorial(num-1) * num;
}

int main() {
    // keep this function call here
    int i;
    cin >> i;
    cout << FirstFactorial(i) << endl;
    return 0;

}
