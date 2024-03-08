#include "cast.hpp"

ScalarConverter::ScalarConverter()
{
}

ScalarConverter::ScalarConverter(const ScalarConverter& sc)
{
	*this = sc;
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& sc)
{
    if (this != &sc)
        *this = sc;
    return (*this);
}

ScalarConverter::~ScalarConverter()
{
}

void ScalarConverter::convert(std::string input)
{
    if (input == "nan" || input == "inf" || input == "+inf" || input == "-inf" ||
        input == "+inff" || input == "-inff") 
        {
            std::cout << "char: Non-displayable" << std::endl;
            std::cout << "int: Conversion impossible" << std::endl;
            float floatValue = std::numeric_limits<float>::infinity();
            if (input[0] == '-')
                floatValue = -floatValue;
            std::cout << "float: " << floatValue << "f" << std::endl;
            double doubleValue = std::numeric_limits<double>::infinity();
            if (input[0] == '-')
                doubleValue = -doubleValue;
            std::cout << "double: " << doubleValue << std::endl;
        }
    else {
        try {
                char charValue = std::stoi(input);
                if (isprint(charValue))
                    std::cout << "char: '" << charValue << "'" << std::endl;
                else
                    std::cout << "char: Non-displayable" << std::endl;
            }
            catch (const std::invalid_argument&) 
            {
                std::cout << "char: Conversion impossible" << std::endl;
            }
            try {
                int intValue = std::stoi(input);
                std::cout << "int: " << intValue << std::endl;
            } catch (const std::invalid_argument&) {
                std::cout << "int: Conversion impossible" << std::endl;
            } catch (const std::out_of_range&) {
                std::cout << "int: Conversion impossible (overflow)" << std::endl;
            }
            try {
                float floatValue = std::stof(input);
                std::cout << "float: " << floatValue << "f" << std::endl;
            } catch (const std::invalid_argument&) {
                std::cout << "float: Conversion impossible" << std::endl;
            } catch (const std::out_of_range&) {
                std::cout << "float: Conversion impossible (overflow)" << std::endl;
            }
            try {
                double doubleValue = std::stod(input);
                std::cout << "double: " << doubleValue << std::endl;
            } catch (const std::invalid_argument&) {
                std::cout << "double: Conversion impossible" << std::endl;
            } catch (const std::out_of_range&) {
                std::cout << "double: Conversion impossible (overflow)" << std::endl;
            }
    }
}