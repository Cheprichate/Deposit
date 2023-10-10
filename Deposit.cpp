#include <iostream>
int perc ;
int sSum ;
int fSum ;
int years ;

int main()
{
    setlocale(LC_ALL, "Russian");

    std::cout << "Введите сумму вклада\n";
    std::cin >> sSum ;
    std::cout << "Введите процентную ставку\n";
    std::cin >> perc ;
    std::cout << "Введите желаемую сумму\n";
    std::cin >> fSum ;
    while (sSum<fSum) {     
        sSum+=(sSum / 100 * perc);
        years++;  
    }
 std::cout << "Нужно подождать всего "<< years ;
}