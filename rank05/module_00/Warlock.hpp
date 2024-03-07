#pragma once

#include <iostream>

class Warlock{
    private: 
        std::string name;
        std::string title;
        Warlock();

    public:
        Warlock(std::string, std::string);
        ~Warlock();

        const std::string &getName() const;
        const std::string &getTitle() const;
        void    setName(const std::string &);
        void    setTitle(const std::string &);
        void introduce() const;

};