#ifndef COMMON_H
#define COMMON_H
#include <string>

struct Task
{
    std::string description;
    int priority;
};
class uiManager
{
public:
    virtual int menu() = 0;

    virtual void secureInputRead(int &c) = 0;

    virtual ~uiManager(){};
};

#endif