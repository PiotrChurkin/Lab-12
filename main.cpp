#include <iostream>

bool PrimeNumber(int n, int i);

int main()
{
    int n, i = 0;
    std::cin >> n;
    if(PrimeNumber(n, 2))
        std::cout << "Prime number.";
    else
        std::cout << "Not prime number.";

    return 0;
    
}

bool PrimeNumber(int n, int i)
{
    if(i==static_cast<int>(sqrt(n))+1)
        return true;
    
    if(n%i==0)
        return false;
    else
        return PrimeNumber(n, i+1);
}