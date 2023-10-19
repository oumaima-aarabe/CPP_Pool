#include "PhoneBook.hpp"

Contact::Contact(){}

const std::string& Contact::getFirstName() const {
    return first_name;
}

const std::string& Contact::getLastName() const {
    return last_name;
}

const std::string& Contact::getNickname() const {
    return nickname;
}

const std::string& Contact::getPhoneNumber() const {
    return phone_number;
}

const std::string& Contact::getDarkestSecret() const {
    return darkest_secret;
}

void  Contact::set_first_name(const std::string &f) 
{
    first_name = f;
}

void  Contact::set_last_name(const std::string &l) 
{
    last_name = l;
}

void  Contact::set_nickname(const std::string &n) 
{
    nickname = n;
}

void  Contact::set_phone_number(const std::string &ph)
{
    phone_number = ph;
}

void  Contact::set_darkest_secret(const std::string &ds)
{
    darkest_secret = ds;
}
