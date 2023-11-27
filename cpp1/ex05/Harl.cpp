#include "Harl.hpp"

void Harl::debug() {
    std::cout << "I asked for a cheeseless mac and cheese!!!" << std::endl;
}

void Harl::info() {
    std::cout << "I cannot believe removing cheese does not reduce the fees" << std::endl;
}

void Harl::warning() {
    std::cout << "i think i should not pay for extra ingredients i didnt get" << std::endl;
}

void Harl::error() {
    std::cout << "i am giving a really bad review to this place" << std::endl;
}

void Harl::complain(std::string level) 
{
    std::string lev[4]={"DEBUG", "INFO", "WARNING", "ERROR"};
   void (Harl::*f[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

    for(int i = 0; i < 4 ; i++)
    {
        if (lev[i] == level)
        {
            (this->*f[i])();
            break;
        }
            
    }
}
