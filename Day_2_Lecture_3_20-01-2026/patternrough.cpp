#include <iostream>
using namespace std;

int main() {
    int n,a,b;
    cin >> n;   // example: 378
    a=0;

    

    for (int i = 2; i <= n; i++) {
        while (n % i == 0) {
            cout << i << " ";
            n = n / i;
        }
    }
    b= a+i;

    return 0;
}
