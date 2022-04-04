#ifndef HACKMERE_H
#define HACKMERE_H

#include <string>

class HackMe
{
public:

    //! This one can not by found in Ghidra by memory and or string search.
    // std::string myString;

    HackMe();

    void setstring(std::string theString);
    //! Ghidra decompiled will show u :
    //! void __thiscall HackMe::setstring(HackMe *this,basic_string aString)

    std::string getstring();
    //! Ghidra decompiled will show u :
    //! HackMe * __thiscall HackMe::getstring[abi:cxx11](HackMe *this)
};

#endif // HACKMERE_H


