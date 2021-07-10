#ifndef __TWEETER_H__
#define __TWEETER_H__


#include "include/Person.hpp"

class Tweeter: public Person
{
    private:
        std::string twitterHandle;
    public:
        Tweeter(std::string first, std::string second, int arbitrary, std::string handle);
        ~Tweeter();
};


#endif // __TWEETER_H__