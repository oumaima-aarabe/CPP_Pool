#include "Serializer.hpp"

    Serializer::Serializer()
    {

    }
    Serializer::Serializer(const Serializer &s)
    {
        *this = s;
    }
    Serializer& Serializer::operator=(const Serializer &s)
    {
        if (this != &s)
            *this = s;
        return *this;
    }
    Serializer::~Serializer()
    {
        
    }