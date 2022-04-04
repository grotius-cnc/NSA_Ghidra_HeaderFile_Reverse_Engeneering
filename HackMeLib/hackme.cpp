#include "hackme.h"

HackMe::HackMe()
{
}

void HackMe::setstring(std::string theString){
    myString=theString;
};

std::string HackMe::getstring(){
    return myString;
}
