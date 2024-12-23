#include <iostream>
#include <vector>

typedef std::vector<std::pair<std::string, int>> PairList; // This massive line is the definition of PairList
using text_1 = std::string;                                // now a days keyword "using" is mostly used instead of typedef as it work better with templates.
using number_1 = int;

int main()
{
    // typedef = reserved keyword used to create an additional name alias for a type.
    // increases readability and prevents typos.

    text_1 firstname = "BRO";
    number_1 age = 21;

    std::cout << firstname << std::endl;
    std::cout << age << std::endl;
}