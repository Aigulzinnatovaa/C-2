#include <iostream>
using namespace std;



int main()
{
    int a, b;
    std::cout << "a=: ";
    cin >> a;
    std::cout << "b=: ";
    cin >> b;


    swap(a, b);
    cout << "Значение переменной a после обмена \t";


    printf(" %x \t", a);


    cout << "\n Значение переменной b после обмена \t";
    printf(" %x", b);
    return 0;
}


void swap(int& x, int& y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}
