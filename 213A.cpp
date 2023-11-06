#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <limits>
int main()
{
    int n, count, result;
    result = 0;
    std::string input;
    std::cin >> n;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    for (int i = 0; i < n; i++)
    {
        count = 0;
        std::getline(std::cin, input);
        std::istringstream str(input);
        int num;
        std::vector<int> integers;

        while (str >> num)
        {
            integers.push_back(num);
        }
        for (int j = 0; j < 3; j++)
        {
            if (integers[j] == 1)
            {
                count++;
            }
        }
        if (count == 2 || count == 3)
        {
            result++;
        }
    }

    std::cout << result << std::endl;

    return 0;
}