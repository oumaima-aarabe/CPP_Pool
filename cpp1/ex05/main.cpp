#include <iostream>
#include <string>

class Harl {
private:
    void debug() {
        std::cout << "DEBUG: I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
    }

    void info() {
        std::cout << "INFO: I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
    }

    void warning() {
        std::cout << "WARNING: I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
    }

    void error() {
        std::cout << "ERROR: This is unacceptable! I want to speak to the manager now." << std::endl;
    }

public:
    void complain(std::string level) {
        void (Harl::*complaintFunction)() = nullptr;

        if (level == "DEBUG") {
            complaintFunction = &Harl::debug;
        } else if (level == "INFO") {
            complaintFunction = &Harl::info;
        } else if (level == "WARNING") {
            complaintFunction = &Harl::warning;
        } else if (level == "ERROR") {
            complaintFunction = &Harl::error;
        }

        if (complaintFunction) {
            (this->*complaintFunction)();
        } else {
            std::cout << "Unknown complaint level: " << level << std::endl;
        }
    }
};

int main() {
    Harl harl;

    harl.complain("DEBUG");
    harl.complain("INFO");
    harl.complain("WARNING");
    harl.complain("ERROR");
    harl.complain("UNKNOWN");

    return 0;
}
