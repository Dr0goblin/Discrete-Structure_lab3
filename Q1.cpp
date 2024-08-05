#include <iostream>

using namespace std;

int power(int a, int n) {
    if (n == 0) {
        return 1;
    } else if (n % 2 == 0) {
        return power(a * a, n / 2);
    } else {
        return a * power(a, n - 1);
    }
}

int main() {
    int a, n;
    cout<<"Enter a number:"<<endl;
    cin >> a;
     cout<<"Enter the power:"<<endl;
     cin >> n;
    cout <<"The result of a^n is :"<< power(a, n) << endl;
    return 0;
}

