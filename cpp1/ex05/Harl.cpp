#include "Harl.hpp"

void Harl::debug() {
    std::cout << "I asked for a cheeseless mac and cheese!!!\n";
}

void Harl::info() {
    std::cout << "I cannot believe removing cheese does not reduce the fees\n";
}

void Harl::warning() {
    std::cout << "i think i should not pay for extra ingredients i didnt get\n";
}

void Harl::error() {
    std::cout << "i am giving a really bad review to this place\n";
}

void Harl::complain(std::string level) 
{
    void (Harl::*funcPtr)() = nullptr;

    if (level == "debug") {
        funcPtr = &Harl::debug;
    } else if (level == "info") {
        funcPtr = &Harl::info;
    } else if (level == "warning") {
        funcPtr = &Harl::warning;
    } else if (level == "error") {
        funcPtr = &Harl::error;
    } else {
        std::cout << "Unknown level: " << level << "\n";
        return;
    }

    (this->*funcPtr)();
}
