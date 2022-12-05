#include <iostream>
using namespace std;

long Factorial(int n)
{
    int result = 1, i;
    if (n > 0)
        for (i = 1; i <= n; i++)
        {
            result *= i;
        }
    return result;
}

int main()
{
    int n;
    cout << "Vvod n";
    cin >> n;
    cout << "Factorial " << n << "=" << Factorial(n) << endl;
    return 0;
}
