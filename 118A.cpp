#include <iostream>
#include <string>

int main()
{
    std::string vowels = "AEIOUYaeiouy";
    std::string inputString;
    std::cin >> inputString;
    std::string modifiedString;

    for (char c1 : inputString)
    {

        if (c1 >= 'A' && c1 <= 'Z')
        {
            c1 = c1 + 32;
        }

        bool isVowel = false;
        for (char c2 : vowels)
        {
            if (c1 == c2)
            {
                isVowel = true;
                break;
            }
        }
        if (!isVowel)
        {
            modifiedString += c1;
        }
    }

    size_t inputLength = modifiedString.length();

    char *newArray = new char[2 * inputLength + 1];

    bool isEven = true;
    for (size_t i = 0; i < inputLength * 2; i++)
    {
        if (isEven)
        {
            newArray[i] = '.';
            isEven = false;
        }
        else
        {
            newArray[i] = modifiedString[(i - 1) / 2];
            isEven = true;
        }
    }
    newArray[2 * inputLength] = '\0';
    std::cout << newArray << std::endl;

    return 0;
}
