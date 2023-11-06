#include <iostream>
int main()
{
    int val;
    std::cin >> val;
    if (val % 2 == 0)
    {
        if (val == 2)
        {
            std::cout << "NO" << std::endl;
        }
        else
        {
            std::cout << "YES" << std::endl;
        }
    }
    else
        std::cout << "NO" << std::endl;
    return 0;
}