#ifndef MANAGEMENT_H
#define MANAGEMENT_H
#include "Prisoner.h"
#include <iostream>
#include <fstream>
#include <ctime>

using namespace std;
class PrisonerManagement
{
    public:
        PrisonerManagement();
        virtual ~PrisonerManagement();

void assignGuard(Prisoner &prisoner);
void cells();
void releasePrisonerAuto(vector<Prisoner> &prisoners,int i);
void releasePrisonerAuto(vector<vector<Prisoner>> &prisoners,int i,int j);
void setAll(Prisoner &prisoner,int j);
void checkMax(int &pCount,int &lCount);
void checkMax(int &pCount);
void printPrisoner(Prisoner &prisoner,const int PrisonerNum);
void printPrisonerToFile(Prisoner &prisoner, const int PrisonerNum,ofstream& myfile);

    private:
    protected:

};
#endif // MANAGEMENT_H
