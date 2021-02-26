#include "Prisoner.h"

Prisoner::Prisoner(string name,int birthyear,string crime, int release, int id,string guardName,string CellName)
{
this->name = name;
this->crime = crime;
this->id = id;
this->birthyear = birthyear;
this->guardName = guardName;
this->CellName = CellName;
this->release = release;
}


string Prisoner::getName(){
return name;
}
int Prisoner::getBirthyear(){
return birthyear;
}
string Prisoner::getCrime(){
return crime;
}
int Prisoner::getRelease(){
return release;}
int Prisoner::getId(){
return id;
}
string Prisoner::getguardName(){
return guardName;
}

void Prisoner::setguardName(Prisoner prisoner){
    if (this->birthyear >= 1994 && this->birthyear <= 2000){
    this->guardName = "seba";
    }

}
string Prisoner::getCellName(){
return CellName;
}
void Prisoner::setCellName(string cellNameF){
    this->CellName = cellNameF;
}

Prisoner::~Prisoner()
{
    //dtor
}
