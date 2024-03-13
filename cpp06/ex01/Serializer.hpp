#pragma once

class Serializer
{
    Serializer();
    Serializer(const Serializer &);
    Serializer& operator=(const Serializer &);
    ~Serializer();
    public :
        uintptr_t serialize(Data* ptr);

};