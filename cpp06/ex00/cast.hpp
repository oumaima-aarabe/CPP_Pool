#pragma once

#include <iostream>
#include <sstream>

class ScalarConverter
{
private:
    ScalarConverter();
    ScalarConverter(const ScalarConverter&);
    ScalarConverter& operator=(const ScalarConverter&);
    ~ScalarConverter();
public:
    static void convert(std::string);
};