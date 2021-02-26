#include <iostream>
#include <string>
#include "Prisoner.h"
#include <vector>
#include <ostream>
#include <fstream>
#include <iterator>
#include "PrisonerManagement.h"

string filename[15] = {"room1.txt","room2.txt","room3.txt","room4.txt","room5.txt",
                    "room6.txt","room7.txt","room8.txt","room9.txt","room10.txt",
                      "room11.txt","room12.txt","room13.txt","room14.txt","room15.txt"};

void AddingPrisoners(){
PrisonerManagement management;
int PrisonerCount;
int roomChoice;
vector<Prisoner>prisonersVec;
ofstream outputFile[15];
 cout<<"Which room do you want to add prisoners in ? \n \n";
 for(int i = 0; i <15; i++){
    cout<<filename[i]<<"  ";
    if(i >3 && i<5){
        cout<<"\n";
    }
    if(i >8 && i<10){
        cout<<"\n";
    }
 }
 cout<<"\n";
 cin>>roomChoice;
 roomChoice-=1;
  cout<<" \n \n";

 cout<<"How many prisoner's do you want to enter ?"<<endl;
    cin>>PrisonerCount;
    management.checkMax(PrisonerCount);
    cout<<"\n";
    Prisoner *prisonerAr = new Prisoner[PrisonerCount]();
     for(int i = 0; i < PrisonerCount ; i++){
        prisonersVec.push_back(prisonerAr[i]);
     }

     for(int i = 0; i< PrisonerCount; i++){
        management.setAll(prisonersVec[i],i);
        management.releasePrisonerAuto(prisonersVec,i);
     }
     vector<Prisoner>::iterator it;
     it = prisonersVec.begin();
     outputFile[roomChoice].open(filename[roomChoice].c_str());
     while(it!= prisonersVec.end()){

        static int prisonerNo = 1;
        management.printPrisoner(*it, prisonerNo);
        management.printPrisonerToFile(*it,prisonerNo,outputFile[roomChoice]);
        it++;
        prisonerNo++;
     }
     outputFile[roomChoice].close();

     }

void appscreen(){
    cout<<"                 Politechnika Warszawska Student Prison \n\n Please select one of the options\n";
    cout<<"1. Add Prisoner's to rooms \n2. View Prisoners in rooms\n3. View All Prisoners\n\n";
    int choice;
    cin>> choice;
    if(choice == 1){
        AddingPrisoners();
    }
    else if (choice == 2){

     cout<<"Which room do you want to view ? \n";

      //printing room names..
      for(int i = 0; i <15; i++){
    cout<<filename[i]<<"  ";
    if(i >3 && i<5){
        cout<<"\n";
    }
    if(i >8 && i<10){
        cout<<"\n";
    }
    } cout<<"\n";
   ifstream inputFile[15];
   cin>>choice;
   choice -=1;

   inputFile[choice].open(filename[choice]);
   string line;
   if (inputFile[choice].is_open())
  {
    while ( getline (inputFile[choice],line) )
    {
      cout << line << '\n';
    }
    inputFile[choice].close();
  }
    }

    else if (choice == 3){

        ifstream inputFile[15];
    for (int i = 0; i <15; i ++){

   inputFile[i].open(filename[i]);
   string line;
   if (inputFile[i].is_open())
  {
      cout<<"ROOM NUMBER "<<i+1<<"\n\n";
    while ( getline (inputFile[i],line) )
    {
      cout << line << '\n';
    }

    }
}}
}

int main()
{
   appscreen();
return 0;
}
