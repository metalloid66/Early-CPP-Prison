#include "PrisonerManagement.h"
#include "Prisoner.h"
PrisonerManagement::PrisonerManagement()
{
    //ctor
}

PrisonerManagement::~PrisonerManagement()
{
    //dtor
}


void PrisonerManagement::assignGuard(Prisoner &prisoner){

}

void PrisonerManagement::cells(){

 vector<pair<string,int>>cell;
    for(int i =0; i <30; i++){

        if(i <= 9 ){cell.push_back(make_pair("A",i));}
        else if (i <=19 ){
            cell.push_back(make_pair("B",i-10));
        }
        else if (i <= 29 ){
            cell.push_back(make_pair("C",i-20));
        }
    }

    for(int i = 0; i <30; i++){
    cout<<cell[i].first<<cell[i].second<<" ";
    if(i >= 9 && i < 10){
        cout<<"\n";
    }
    else if(i >= 19 && i < 20){
        cout<<"\n";
    }
    }

}
void PrisonerManagement::releasePrisonerAuto(vector<Prisoner> &prisoners,int i){
//Deletes prisoner from Database class
    long int stime = 0;
             stime = time(NULL);
    if(stime == stime * prisoners[i].getRelease()* 86400){
            prisoners.erase(prisoners.begin()+i);
}}



void PrisonerManagement::releasePrisonerAuto(vector<vector<Prisoner>> &prisoners,int i,int j){
//Deletes prisoner from Database class
        long int stime = 0;
             stime = time(NULL);
    if(stime == stime * prisoners[i][j].getRelease()* 86400){
            prisoners[i].erase(prisoners[i].begin()+j);
}
}


void PrisonerManagement::setAll(Prisoner &prisoner,int j){


    cout<<"Enter Prisoner " << j+1 <<" Name: ";
    string name;
    cin>>name;
    int birthyear;
    cout<<"Enter Prisoner " << j+1 <<" Birthyear: ";
    cin>>birthyear;
    string crime;
    cout<<"Enter Prisoner " << j+1 <<" Crime: ";
    cin>>crime;
    cout<<"Enter Prisoner "<<j+1 << " Imprisonment period(in days): ";
    int release;
    cin>>release;
    int id;
    cout<<"Enter Prisoner " << j+1 <<" ID: ";
    cin>>id;
    prisoner = {name,birthyear,crime,release,id};
    cout<<"\n";
    prisoner.setguardName(prisoner);
    //prisoner.setCellName(room0);
    //releasePrisonerAuto(prisoner,j);
}


void PrisonerManagement::checkMax(int &pCount,int &lCount){
                while(lCount > 20 || lCount < 1){
        cout<<"Please enter a valid room count";
        cin>>lCount;
    }
    cout<<" \n";
            while(pCount > 4 || pCount < 1){
        cout<<"Please enter a valid prisoner count";
        cin>>pCount;
    }
    cout<<" \n";
}
void PrisonerManagement::checkMax(int &pCount){
            while(pCount > 4 || pCount < 1){
        cout<<"Please enter a valid prisoner count";
        cin>>pCount;
    }
    cout<<" \n";
}
void PrisonerManagement::printPrisoner(Prisoner &prisoner,const int PrisonerNum){
 std::cout<<"          Prisoner Number "<<PrisonerNum<<" Information          \n";
 std::cout<<"Prisoner's Name: "<<prisoner.getName()<<"\n";
 std::cout<<"Prisoner's Birthyear: "<<prisoner.getBirthyear()<<"\n";
 std::cout<<"Prddddisoner's Crime: "<<prisoner.getCrime()<<"\n";
 std::cout<<"Prisoner's is released in: "<<prisoner.getRelease()<<"\n";
 std::cout<<"Prisoner's ID: "<<prisoner.getId()<<"\n";
 std::cout<<"Prisoner's Guard: "<<prisoner.getguardName()<<"\n\n";
}
void PrisonerManagement::printPrisonerToFile(Prisoner &prisoner, const int PrisonerNum,ofstream& myfile){
 myfile<<"          Prisoner Number "<<PrisonerNum<<" Information          \n";
 myfile<<"Prisoner's Name: "<<prisoner.getName()<<"\n";
 myfile<<"Prisoner's Crime: "<<prisoner.getCrime()<<"\n";
 myfile<<"Prisoner's is released in: "<<prisoner.getRelease()<<"days \n";
 myfile<<"Prisoner's ID: "<<prisoner.getId()<<"\n";
 myfile<<"Prisoner's Guard: "<<prisoner.getguardName()<<"\n";
 myfile<<"Prisoner's Cell: "<<prisoner.getCellName()<<"\n\n";
}
