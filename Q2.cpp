#include <iostream>

using namespace std;

int fib(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fib(n - 1) + fib(n - 2);
    }
}

int main() {
    int n;
    cout<<"Enter a number to set fibonacci series:"<<endl;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cout << fib(i) << " ";
    }
    cout << endl;
    return 0;
}

