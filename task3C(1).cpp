#include<iostream>
#include<conio.h>
using namespace std;
void Zamenia(int* pa, int* pb);
int main()
{
  int a, b;
  int a1, b1;
  cout << "Do zameni:\n";
  std::cout << "Vvedite chislo A: ";
  std::cin >> a;
  a1 = printf("%x", a);


  std::cout << "\nVvedite chislo B: ";
  std::cin >> b;
  b1 = printf("%x", b);

  cout << "\na=" << a << " b=" << b << endl;
  Zamenia(&a, &b);
  cout << "Posle zameni:\n";
  cout << "chislo A=:";
  a1 = printf("%x\n", a);
  cout << "chislo B=:";
  b1 = printf("%x", b);
  return 0;
}
void Zamenia(int* pa1, int* pb1)
{
  int temp = *pa1;
  *pa1 = *pb1;
  *pb1 = temp;
}
