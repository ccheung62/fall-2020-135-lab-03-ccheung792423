#include <iostream>
#include <fstream>
#include <cstdlib>
#include <climits>

#include "reservoir.h"

double get_east_storage(std::string date){
  std::ifstream fin("Current_Reservoir_Levels.tsv");
  if (fin.fail()) {
    std::cerr << "File cannot be opened for reading." << std::endl;
    exit(1); // exit if failed to open the file
  }
  std::string junk;        
  getline(fin, junk); // read one line from the file to get rid of it
  std::string currDate = "1/01/2018";
  double eastSt;
  while(date != currDate) { // check if it's looking at the date specified 
    fin >> currDate >> eastSt; //take the first column as date and the second as east storage
    fin.ignore(INT_MAX, '\n'); //skips to the end of line, ignorring the remaining columns
  }
  fin.close();
  // and return the correct value
  return eastSt;
  
}
