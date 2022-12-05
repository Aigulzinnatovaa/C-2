#include <iostream>
#include<cmath>
using namespace std;

int main()
{
     int age;
     
    string surname;
    string name;
    int ball;
    int result;
    std::cout << "введите возраст: ";
    std::cin >> age;
    std::cout << "введите фам: ";
    std::cin >> surname;
    std::cout << "введите имя: ";
    std::cin >> name;
    std::cout << "введите ball: ";
    std::cin >> ball;
    
    int shans=ball-age;
    result = abs(shans);
    
    std:: cout << "abs(" << shans << ") = |" << shans << "| = " << result << endl;
    
    std::cout  <<  "Шансы получить" <<"\t" << ball << "\t"<<"баллов у"<<"\t"<< surname<<"\t"<< name<< "\t"<<"равны"<<"\t"<< result <<"\t"<<"%"<< std::endl;
    return 0;
}
