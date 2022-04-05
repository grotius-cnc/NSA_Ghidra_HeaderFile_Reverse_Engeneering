#ifndef HACKME_H
#define HACKME_H

#include <string>

class HackMe
{
public:

    std::string myString;

    //! Some function to create some memory.
    std::string crap;
    void crapfunction(int i);

    HackMe();

    void setstring(std::string theString);
    std::string getstring();
};

#endif // HACKME_H
