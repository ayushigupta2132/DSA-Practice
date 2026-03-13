// divide two numbers without using / or *

#include <iostream>
#include <climits>
#include <cstdlib>
using namespace std;

int main() {
    int number, divisor;
    cin >> number >> divisor;

    if (divisor == 0) {
        cout << "Division by zero not allowed";
        return 0;
    }

    if (number == divisor) {
        cout << 1;
        return 0;
    }

    bool sign = true;
    if (number >= 0 && divisor < 0) sign = false;
    if (number < 0 && divisor > 0) sign = false;

    long long n = abs((long long)number);
    long long d = abs((long long)divisor);
    long long ans = 0;

    while (n >= d) {
        int cnt = 0;
        while (n >= (d << (cnt + 1))) {
            cnt++;
        }
        ans += (1LL << cnt);
        n = n - (d << cnt);
    }

    if (ans >= (1LL << 31) && sign == true)
        cout << INT_MAX;
    else if (ans >= (1LL << 31) && sign == false)
        cout << INT_MIN;
    else
        cout << (sign ? ans : -ans);

    return 0;
}
//tc=0(logn)**2
//sc=0(1)