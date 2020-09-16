#include <iostream>
#include <fstream>
#include <cstdlib>
#include <climits>
#include <string>

#include "reverseorder.h"

void reverse_oreder(std::string date1, std::string date2) {
  std::ifstream fin("Current_Reservoir_Levels.tsv");
  if (fin.fail()) {
    std::cerr << "File cannot be opened for reading." << std::endl;
    exit(1); // exit if failed to open the file
  }
  std::string junk;        
  getline(fin, junk); // read one line from the file to get rid of it
  std::string currDate;
  double westEl;
  std::string rev = ""; //stores reversed line
  while (currDate!=date1){
    fin >> currDate >> junk >> junk >> junk >> westEl; // moves through the data
    fin.ignore(INT_MAX, '\n'); //skips to the end of line, ignorring the remaining columns
  }
  while (currDate!=date2) { //loop between the ealier date and one before the later date speficied 
    rev =  currDate + " " + std::to_string(westEl).erase(6,9) + "ft\n" + rev; //add each new data in front of the string to put it in reverse order
    fin >> currDate >> junk >> junk >> junk >> westEl; 
    fin.ignore(INT_MAX, '\n');
  }
  rev = currDate + " " + std::to_string(westEl).erase(6,9) + "ft\n" + rev; //puts in the last date's data
  std::cout << rev; //prints out the end result

  fin.close();
}
