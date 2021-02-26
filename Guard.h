#ifndef GUARD_H
#define GUARD_H
#include <vector>
#include <string>

class Guard
{
    public:
        //getter for vector guardNames
    std::vector<std::string>const &getGuardNames()const{return guardNames;}
    Guard();
    virtual ~Guard();
    private:
        //vector for guardNames;
    std::vector <std::string> guardNames;
};

#endif // GUARD_H
