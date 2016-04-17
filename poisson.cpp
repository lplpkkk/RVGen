#include <random>
#include <iostream>
 
int main()
{
    /*
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(1, 6);
 
    for (int n=0; n<10; ++n)
        std::cout << dis(gen) << ' ';
    std::cout << '\n';
    */

    double a=1e-4;
    double b=1e5;
    std::cout<<(a*b);
}
