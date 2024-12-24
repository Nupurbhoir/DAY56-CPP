#include <iostream>
using namespace std;

void isPrime(int n) {
    if (n < 2)
     {
        cout << n << " is not prime." << endl;
        return;
    }
    for (int i = 2; i * i <= n; i++) 
    {
        if (n % i == 0)
         {
            cout << n << " is not prime." << endl;
            return;
        }
    }
    cout << n << " is prime." << endl;
}

int main() {
    int num;
    cin >> num;
    isPrime(num);
    return 0;
}