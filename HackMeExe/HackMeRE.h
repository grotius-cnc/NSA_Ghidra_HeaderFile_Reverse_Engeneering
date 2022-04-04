#ifndef HACKMERE_H
#define HACKMERE_H

#include <string>

class HackMe
{
public:

    //! This one is only in the lib memory. So it's value must be retrieved by this reverse header.
    // std::string myString;

    HackMe();

    void setstring(std::string theString);

    std::string getstring();
};

#endif // HACKMERE_H
