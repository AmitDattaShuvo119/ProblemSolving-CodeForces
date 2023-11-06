#include <iostream>
#include <string>
#include <vector>
int main()
{
    int n;
    std::vector<std::string> input;
    std::string inputString;
    std::cin >> n;

    for (int i = 0; i < n; i++)
    {
        std::string temp;
        std::cin >> temp;
        input.push_back(temp);
    }

    for (int i = 0; i < n; i++)
    {
        inputString = input[i];
        size_t length = inputString.length();
        if (length > 10)
        {
            std::cout << inputString[0] << length - 2 << inputString[length - 1] << std::endl;
        }
        else
        {
            std::cout << inputString << std::endl;
        }
    }
    return 0;
}