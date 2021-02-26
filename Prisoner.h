#ifndef PRISONER_H
#define PRISONER_H
#include "Guard.h"
#include<string>
#include<iostream>
using namespace std;
class Prisoner
{


    public:
        Prisoner(string name = "john doe", int birthyear = 1900,string crime = "unknown",int release = 0000, int id =0000, string guardName ="No Guard Assigned",string CellName ="No Cell Assigned");
        //getters
        int getRelease();
        string getName();
        int getBirthyear();
        string getCrime();
        int getId();
        string getguardName();
        string getCellName();
        //setters
        void setguardName(Prisoner prisoner);
        void setCellName(string cellNameF);
        virtual ~Prisoner();
    protected:
    private:

       string name;
        int birthyear;
        string crime;
        int id;
        string guardName;
        string CellName;
        int release;



};

#endif // PRISONER_H
