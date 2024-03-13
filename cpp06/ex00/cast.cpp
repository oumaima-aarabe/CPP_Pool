#include <sstream>
#include "cast.hpp"
#include <cstdlib>
#include <cctype>
#include <cmath>
#include <climits>
#include <stdexcept> 

ScalarConverter::ScalarConverter()
{
}



ScalarConverter::~ScalarConverter()
{
}


int count_c(std::string input, char c)
{
    int res = 0;
    for (size_t i = 0; i < input.length(); i++)
        if (input[i] == c)
            res++;
    return res;
}

bool checkD(std::string input)
{
    std::istringstream iss(input);
    double d;
    iss >> std::noskipws >> d;
    return (iss.eof() && !iss.fail());
}

void ScalarConverter::convert(std::string &input)
{
    if (input == "nan" || input == "inf" || input == "+inf" || input == "-inf" ||
        input == "+inff" || input == "-inff" || input == "nanf") 
        {
            std::cout << "char: Non-displayable" << std::endl;
            std::cout << "int: Conversion impossible" << std::endl;
            if (count_c(input, 'f') == 2 || input == "nanf")
                input.erase(input.size() - 1, 1);
            std::cout << "float: " << input << "f" << std::endl;
            std::cout << "double: " << input << std::endl;
        }
    else if (input.size() == 1 && isprint(input[0]) && !isdigit(input[0])) 
    {
        std::cout << "char: " << input << std::endl;
        std::cout << "int: " << static_cast<int>(input[0]) << std::endl;
        std::cout << "float: " << static_cast<int>(input[0]) << ".0f"<< std::endl;
        std::cout << "double: " << static_cast<int>(input[0]) << ".0" << std::endl;
    }
    else
    {
        if (count_c(input, 'f'))
            input.erase(input.size() - 1, 1);
        if (!checkD(input))
            std::cout << "char: impossible\nint: impossible\nfloat: impossible\ndouble: impossible" << std::endl;
        else 
        {
            try {
                    char c = static_cast<char>(atoi(input.c_str()));
                    if (isprint(c))
                        std::cout << "char: '" << c << "'" << std::endl;
                    else
                        std::cout << "char: Non-displayable" << std::endl;
                }
                catch (const std::invalid_argument&) 
                {
                    std::cout << "char: Conversion impossible" << std::endl;
                }
                try {
                    int i = atoi(input.c_str());
                    std::cout << "int: " << i << std::endl;
                } catch (const std::invalid_argument&) {
                    std::cout << "int: Conversion impossible" << std::endl;
                } catch (const std::out_of_range&) {
                    std::cout << "int: Conversion impossible (overflow)" << std::endl;
                }
                try {
                    double d = atof(input.c_str());
                    float f = static_cast<float>(d);
                    if (f == static_cast<long>(f))
                        std::cout << "float: " << f << ".0f" << std::endl;
                    else
                    std::cout << "float: " << f << "f" << std::endl;
                } catch (const std::invalid_argument&) {
                    std::cout << "float: Conversion impossible" << std::endl;
                } catch (const std::out_of_range&) {
                    std::cout << "float: Conversion impossible (overflow)" << std::endl;
                }
                try 
                {
                    double d = atof(input.c_str());
                    if (d == static_cast<long>(d))
                        std::cout << "double: " << d << ".0" <<std::endl;
                    else
                        std::cout << "double: " << d <<std::endl;
                } catch (const std::invalid_argument&) {
                    std::cout << "double: Conversion impossible" << std::endl;
                } catch (const std::out_of_range&) {
                    std::cout << "double: Conversion impossible (overflow)" << std::endl;
                }
        }
    }
}